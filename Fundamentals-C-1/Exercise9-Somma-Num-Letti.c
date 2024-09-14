/*Esercizio3_3: Scrivere un programma che legge n numeri interi e calcola e scrive la somma degli n numeri letti.*/

#include <stdio.h>

int main() {
    int n, numero, somma = 0;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numero);
        somma += numero;
    }

    printf("La somma dei %d numeri inseriti è: %d\n", n, somma);

    return 0;
}


