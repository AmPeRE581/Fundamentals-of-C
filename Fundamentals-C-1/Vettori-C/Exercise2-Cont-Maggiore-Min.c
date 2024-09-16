/*Esercizio1_2: Scrivere un programma che legge 5 numeri interi, un intero x, e stampa gli elementi del vettore 
il cui valore è contemporaneamente maggiore di x/2e minore 2x.*/

#include <stdio.h>

int main() {
    int numeri[5];
    int x, i;

    // Lettura dei 5 numeri interi
    printf("Inserisci 5 numeri interi:\n");
    for(i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    // Lettura dell'intero x
    printf("Inserisci il valore di x: ");
    scanf("%d", &x);

    // Stampa dei numeri che soddisfano la condizione x/2 < numero < 2x
    printf("Elementi del vettore maggiori di x/2 e minori di 2x:\n");
    for(i = 0; i < 5; i++) {
        if (numeri[i] > x / 2 && numeri[i] < 2 * x) {
            printf("%d ", numeri[i]);
        }
    }

    printf("\n");
    return 0;
}


