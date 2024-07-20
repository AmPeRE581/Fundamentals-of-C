#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#include <dirent.h>
#include <fcntl.h>
#include <errno.h>
#include <ifaddrs.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <linux/wireless.h>

#define PROC_STAT "/proc/stat"
#define PROC_DIR "/proc"


void print_cpu_usage() {
    FILE* file;
    char buffer[256];
    unsigned long long int user, nice, system, idle, iowait, irq, softirq, steal, guest, guest_nice;
    static unsigned long long int prev_user, prev_nice, prev_system, prev_idle, prev_iowait, prev_irq, prev_softirq, prev_steal;
    unsigned long long int total, prev_total, total_diff, idle_diff;

    file = fopen(PROC_STAT, "r");
    if (file == NULL) {
        perror("fopen");
        return;
    }
    fgets(buffer, sizeof(buffer) - 1, file);
    fclose(file);

    sscanf(buffer, "cpu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",
           &user, &nice, &system, &idle, &iowait, &irq, &softirq, &steal, &guest, &guest_nice);

    total = user + nice + system + idle + iowait + irq + softirq + steal;
    prev_total = prev_user + prev_nice + prev_system + prev_idle + prev_iowait + prev_irq + prev_softirq + prev_steal;

    total_diff = total - prev_total;
    idle_diff = idle - prev_idle;

    if (total_diff != 0) {
        printf("CPU Usage: %.2f%%\n", 100.0 * (total_diff - idle_diff) / total_diff);
    }

    prev_user = user;
    prev_nice = nice;
    prev_system = system;
    prev_idle = idle;
    prev_iowait = iowait;
    prev_irq = irq;
    prev_softirq = softirq;
    prev_steal = steal;
}

void print_memory_usage() {
    struct sysinfo memInfo;

    sysinfo(&memInfo);

    long long totalVirtualMem = memInfo.totalram;
    totalVirtualMem += memInfo.totalswap;
    totalVirtualMem *= memInfo.mem_unit;

    long long virtualMemUsed = memInfo.totalram - memInfo.freeram;
    virtualMemUsed += memInfo.totalswap - memInfo.freeswap;
    virtualMemUsed *= memInfo.mem_unit;

    long long totalPhysMem = memInfo.totalram;
    totalPhysMem *= memInfo.mem_unit;

    long long physMemUsed = memInfo.totalram - memInfo.freeram;
    physMemUsed *= memInfo.mem_unit;

    printf("Memory Usage: %.2f%% (%.2f%% of Physical Memory)\n",
           100.0 * virtualMemUsed / totalVirtualMem,
           100.0 * physMemUsed / totalPhysMem);
}

void print_highest_priority_process() {
    DIR* dir;
    struct dirent* entry;
    char path[1024];
    char buffer[128];
    int pid, prio;
    int highest_prio = 20; // Lower value indicates higher priority
    char highest_prio_process[256] = {0};

    if ((dir = opendir(PROC_DIR)) == NULL) {
        perror("opendir");
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_DIR && isdigit(entry->d_name[0])) {
            snprintf(path, sizeof(path), PROC_DIR "/%s/stat", entry->d_name);
            FILE* file = fopen(path, "r");
            if (file) {
                if (fgets(buffer, sizeof(buffer), file)) {
                    sscanf(buffer, "%d %*s %*c %*d %*d %*d %*d %*d %*u %*u %*u %*u %*u %*u %*u %*d %*d %*d %*d %*d %d", &pid, &prio);
                    if (prio < highest_prio) {
                        highest_prio = prio;
                        snprintf(highest_prio_process, sizeof(highest_prio_process), "%s (PID: %d)", entry->d_name, pid);
                    }
                }
                fclose(file);
            }
        }
    }
    closedir(dir);

    if (highest_prio_process[0]) {
        printf("Highest Priority Process: %s\n", highest_prio_process);
    } else {
        printf("No high priority process found.\n");
    }
}

void print_network_usage() {
    struct ifaddrs* ifap, *ifa;
    struct iwreq wrq;
    int sockfd;
    char buffer[128];

    if (getifaddrs(&ifap) != 0) {
        perror("getifaddrs");
        return;
    }

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd == -1) {
        perror("socket");
        freeifaddrs(ifap);
        return;
    }

    for (ifa = ifap; ifa; ifa = ifa->ifa_next) {
        if (ifa->ifa_addr && ifa->ifa_addr->sa_family == AF_INET) {
            memset(&wrq, 0, sizeof(wrq));
            strncpy(wrq.ifr_name, ifa->ifa_name, IFNAMSIZ);

            if (ioctl(sockfd, SIOCGIWNAME, &wrq) == 0) {
                snprintf(buffer, sizeof(buffer), "/sys/class/net/%s/statistics/tx_bytes", ifa->ifa_name);
                FILE* tx_file = fopen(buffer, "r");
                snprintf(buffer, sizeof(buffer), "/sys/class/net/%s/statistics/rx_bytes", ifa->ifa_name);
                FILE* rx_file = fopen(buffer, "r");

                if (tx_file && rx_file) {
                    unsigned long tx_bytes, rx_bytes;
                    fscanf(tx_file, "%lu", &tx_bytes);
                    fscanf(rx_file, "%lu", &rx_bytes);
                    printf("Interface: %s, TX: %lu bytes, RX: %lu bytes\n", ifa->ifa_name, tx_bytes, rx_bytes);
                    fclose(tx_file);
                    fclose(rx_file);
                }
            }
        }
    }

    close(sockfd);
    freeifaddrs(ifap);
}

void print_dns_info() {
    FILE* file;
    char buffer[256];

    file = fopen("/etc/resolv.conf", "r");
    if (file == NULL) {
        perror("fopen");
        return;
    }

    printf("DNS Servers:\n");
    while (fgets(buffer, sizeof(buffer), file)) {
        if (strncmp(buffer, "nameserver", 10) == 0) {
            char* dns_ip = buffer + 11;
            dns_ip[strcspn(dns_ip, "\n")] = '\0'; // Rimuove il carattere di nuova linea
            printf("%s", dns_ip);

            // Controlla se il DNS è Cloudflare, OpenDNS o Google
            if (strcmp(dns_ip, "1.1.1.1") == 0 || strcmp(dns_ip, "1.0.0.1") == 0) {
                printf(" (Cloudflare DNS)\n");
            } else if (strcmp(dns_ip, "8.8.8.8") == 0 || strcmp(dns_ip, "8.8.4.4") == 0) {
                printf(" (Google DNS)\n");
            } else if (strcmp(dns_ip, "208.67.222.222") == 0 || strcmp(dns_ip, "208.67.220.220") == 0) {
                printf(" (OpenDNS)\n");
            } else {
                printf("\n");
            }
        }
    }

    fclose(file);
}

void print_cpu_threads_usage() {
    FILE* file;
    char buffer[256];
    int cores = sysconf(_SC_NPROCESSORS_ONLN);
    int active_threads = 0;

    file = fopen(PROC_STAT, "r");
    if (file == NULL) {
        perror("fopen");
        return;
    }

    while (fgets(buffer, sizeof(buffer), file)) {
        if (strncmp(buffer, "cpu", 3) == 0 && isdigit(buffer[3])) {
            active_threads++;
        }
    }
    fclose(file);

    printf("CPU Threads Usage: %d/%d\n", active_threads, cores);
}

int main() {
    static int first_run = 1;

    while (1) {
        print_cpu_usage();
        print_memory_usage();
        
        if (first_run) {
            print_highest_priority_process();
            print_dns_info();
            print_cpu_threads_usage();
            first_run = 0;
        }
        
        print_network_usage();
        sleep(20); // Aggiorna ogni secondo
    }

    return 0;
}
