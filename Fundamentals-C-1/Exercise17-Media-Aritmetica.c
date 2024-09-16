/*Esercizio4_6: Scrivere un programma che legge n numeri interi e ne calcola e stampa la media aritmetica.*/

#include <stdio.h>

int main() {
    int n, i, numero;
    int somma = 0;
    
    // Lettura del numero di elementi
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    // Controllo che n sia positivo
    if (n <= 0) {
        printf("Il numero di elementi deve essere maggiore di zero.\n");
        return 1;
    }

    // Lettura dei numeri e calcolo della somma
    for (i = 0; i < n; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numero);
        somma += numero;
    }

    // Calcolo e stampa della media aritmetica
    double media = (double)somma / n;
    printf("La media aritmetica è: %.2f\n", media);

    return 0;
}