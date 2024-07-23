#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>

void search_and_execute(const char *program) {
    pid_t pid = fork();
    if (pid == 0) {
        // Processo figlio
        char *argv[] = {program, NULL};
        execvp(program, argv);

        // Se execvp fallisce, stampa un messaggio di errore e termina
        perror("Errore nell'esecuzione del programma");
        exit(EXIT_FAILURE);
    } else if (pid > 0) {
        // Processo padre: attende che il processo figlio termini
        int status;
        waitpid(pid, &status, 0);
    } else {
        // Errore nella creazione del processo figlio
        perror("Errore nella creazione del processo figlio");
        exit(EXIT_FAILURE);
    }
}

int main() {
    char program[256];  // Buffer per memorizzare il nome del programma

    printf("Inserisci il nome del programma da avviare: ");
    if (fgets(program, sizeof(program), stdin) != NULL) {
        // Rimuove il carattere di nuova linea dall'input
        size_t len = strlen(program);
        if (len > 0 && program[len-1] == '\n') {
            program[len-1] = '\0';
        }

        // Cerca ed esegue il programma
        search_and_execute(program);
    } else {
        printf("Errore nella lettura dell'input\n");
    }

    return 0;
}