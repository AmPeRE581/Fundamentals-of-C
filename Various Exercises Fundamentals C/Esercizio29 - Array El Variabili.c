/*Esercizio29: Calcolare la media di un array di numeri con un numero di elementi variabile*/

#include <stdio.h>

int main() {
    int n;
    int array[100];
    int i;
    float media = 0;

    printf("Inserisci il numero di elementi: ");
    scanf("%d", &n);

    printf("Inserisci %d numeri:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        media += array[i];
    }

    media /= n;

    printf("La media è: %.2f\n", media);

    return 0;
}