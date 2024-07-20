/*Esercizio26: Indovinare un numero*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game(int max_attempts, int min, int max) {
    int numero, guess, tentativi = 0;
    srand(time(0));
    numero = rand() % (max - min + 1) + min;

    printf("Indovina il numero tra %d e %d:\n", min, max);

    while (tentativi < max_attempts) {
        scanf("%d", &guess);
        tentativi++;

        if (guess > numero) {
            printf("Troppo alto! Riprova:\n");
        } else if (guess < numero) {
            printf("Troppo basso! Riprova:\n");
        } else {
            printf("Esatto! Hai indovinato in %d tentativi.\n", tentativi);
            break;
        }

        if (tentativi == max_attempts) {
            printf("Hai superato il numero massimo di tentativi. Il numero era %d.\n", numero);
        }
    }
}

int main() {
    int scelta, max_attempts = 10, min = 1, max = 100, livello;
    char giocare_ancora;

    printf("Benvenuto al gioco dell'Indovina Numero!\n");
    printf("In questo gioco, devi indovinare un numero compreso in un intervallo specificato.\n");
    printf("Puoi scegliere un livello di difficoltà o un intervallo personalizzato.\n");
    printf("Hai un numero limitato di tentativi per indovinare il numero corretto.\n");
    printf("Buona fortuna!\n");

    do {
        printf("\nSeleziona il livello di difficoltà:\n");
        printf("1. Facile (1-50)\n");
        printf("2. Medio (1-100)\n");
        printf("3. Difficile (1-200)\n");
        printf("4. Personalizzato\n");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                min = 1;
                max = 50;
                max_attempts = 10;
                break;
            case 2:
                min = 1;
                max = 100;
                max_attempts = 10;
                break;
            case 3:
                min = 1;
                max = 200;
                max_attempts = 15;
                break;
            case 4:
                printf("Inserisci il valore minimo dell'intervallo: ");
                scanf("%d", &min);
                printf("Inserisci il valore massimo dell'intervallo: ");
                scanf("%d", &max);
                printf("Inserisci il numero massimo di tentativi: ");
                scanf("%d", &max_attempts);
                break;
            default:
                printf("Scelta non valida. Impostato a livello Medio.\n");
                min = 1;
                max = 100;
                max_attempts = 10;
                break;
        }

        play_game(max_attempts, min, max);

        printf("Vuoi giocare di nuovo? (s/n): ");
        scanf(" %c", &giocare_ancora);
    } while (giocare_ancora == 's' || giocare_ancora == 'S');

    return 0;
}