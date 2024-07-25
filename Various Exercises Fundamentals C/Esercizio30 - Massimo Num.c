/*Esercizio30: Scrivi un programma che prende in input 5 numeri, e ne faccia il massimo fra loro*/

#include <stdio.h>

int main() {
    int numbers[5];
    int i;
    int max;

    // Prendi in input 5 numeri
    printf("Inserisci 5 numeri:\n");
    for(i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Trova il massimo tra i numeri inseriti
    max = numbers[0];
    for(i = 1; i < 5; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Stampa il massimo
    printf("Il massimo tra i numeri inseriti è: %d\n", max);

    return 0;
}