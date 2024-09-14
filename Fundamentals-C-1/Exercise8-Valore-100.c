/*Esercizio3_2: Scrivere un programma che legge una sequenza di valori interi inseriti dall'utente finchè la somma dei numeri
letti non supera il valore di 100.*/

#include <stdio.h>

int main() {
    int numero;
    int somma = 0;

    printf("Inserisci numeri interi (la somma non deve superare 100):\n");

    while (somma <= 100) {
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
        somma += numero;

        if (somma > 100) {
            printf("La somma ha superato 100. Programma terminato.\n");
            break;
        }

        printf("Somma attuale: %d\n", somma);
    }

    return 0;
}
