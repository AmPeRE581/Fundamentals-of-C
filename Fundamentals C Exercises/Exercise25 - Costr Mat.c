/*Exercise25: Scrivere un programma che legge un intero n, n numeri interi e li utilizza
per costruire una matrice mat di dimensione n x 5 in cui l’i-esimo
elemento della sequenza è ripetuto 5 volte nell’i-esima riga di mat*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Lettura del valore di n
    printf("Inserisci il valore di n: ");
    scanf("%d", &n);

    // Allocazione della matrice
    int mat[n][5];

    // Lettura dei numeri e costruzione della matrice
    for (int i = 0; i < n; i++) {
        int numero;
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numero);
        for (int j = 0; j < 5; j++) {
            mat[i][j] = numero;
        }
    }

    // Stampa della matrice
    printf("La matrice risultante è:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}