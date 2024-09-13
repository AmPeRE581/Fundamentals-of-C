/*Esercizio3_1: Scrivere un programma che scrive tutti gli interi da 1 fino ad n (con numero intero non negativo.)

Per ogni/uno di questi "esercizi" identificare prima di tutto, il tipo di ciclo da utilizzare...*/

#include <stdio.h>

int main() {
    int num[3];
    int positivi = 0, negativi = 0;

    // Leggi tre numeri interi
    for (int i = 0; i < 3; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    // Controlla se i numeri sono positivi o negativi
    for (int i = 0; i < 3; i++) {
        if (num[i] > 0) positivi++;
        else if (num[i] < 0) negativi++;
    }

    // Stampa il risultato
    printf("Hai inserito %d numeri positivi e %d numeri negativi.\n", positivi, negativi);

    return 0;
}

