/*Esame 05-07-2023 - Contatore GAS*/

#include <stdio.h>
#include <stdlib.h>

#define COSTO_PER_UNITA 0.25

void individua_posizione_massimo(int *vett, int n, int *posizione);

int main() {
    int n;

    // Chiedi all'utente di inserire il numero di sequenze
    printf("Inserisci il numero di sequenze: ");
    scanf("%d", &n);

    // Allocazione dinamica dei vettori
    int *matricoleContatore = (int *)malloc(n * sizeof(int));
    int *consumi = (int *)malloc(n * sizeof(int));
    double *importo = (double *)malloc(n * sizeof(double));

    if (!matricoleContatore || !consumi || !importo) {
        printf("Errore di allocazione della memoria.\n");
        return 1;
    }

    // Lettura delle sequenze
    for (int i = 0; i < n; i++) {
        int numLetture;

        printf("Inserisci la matricola del contatore: ");
        scanf("%d", &matricoleContatore[i]);

        printf("Inserisci il numero di letture: ");
        scanf("%d", &numLetture);

        if (numLetture < 2) {
            consumi[i] = 10; // Consumo forfettario
            for (int j = 0; j < numLetture; j++) {
                int dummy;
                scanf("%d", &dummy); // Letture ignorate
            }
        } else {
            int primaLettura, ultimaLettura, lettura;
            scanf("%d", &primaLettura); // Prima lettura

            // Legge le letture intermedie
            for (int j = 1; j < numLetture - 1; j++) {
                scanf("%d", &lettura);
            }

            scanf("%d", &ultimaLettura); // Ultima lettura

            consumi[i] = ultimaLettura - primaLettura;
        }
    }

    // Calcolo importi
    for (int i = 0; i < n; i++) {
        importo[i] = consumi[i] * COSTO_PER_UNITA;
    }

    // Individuazione della posizione del consumo massimo
    int posizione_massimo;
    individua_posizione_massimo(consumi, n, &posizione_massimo);

    // Stampa delle matricole con il consumo più alto
    printf("Matricola del contatore con il consumo più alto: %d\n", matricoleContatore[posizione_massimo]);

    // Stampa delle matricole e degli importi da pagare
    printf("Matricole e importi da pagare:\n");
    for (int i = 0; i < n; i++) {
        printf("Matricola: %d, Importo: %.2f Euro\n", matricoleContatore[i], importo[i]);
    }

    // Libera la memoria allocata
    free(matricoleContatore);
    free(consumi);
    free(importo);

    return 0;
}

void individua_posizione_massimo(int *vett, int n, int *posizione) {
    int massimo = vett[0];
    *posizione = 0;

    for (int i = 1; i < n; i++) {
        if (vett[i] > massimo) {
            massimo = vett[i];
            *posizione = i;
        }
    }
}

