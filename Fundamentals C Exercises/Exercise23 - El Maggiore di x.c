/*Exercise23: Scrivere un programma che legge una matrice m di interi 3x3 , un intero
x e costruisce e stampa un vettore v contente solo gli elementi di m
maggiori di x.*/

#include <stdio.h>

int main() {
    int m[3][3];   // Matrice 3x3
    int v[9];      // Vettore per contenere gli elementi maggiori di x (massimo 9 elementi)
    int x;         // Intero x
    int i, j;      // Variabili per i cicli
    int k = 0;     // Indice per il vettore v

    // Lettura della matrice 3x3
    printf("Inserisci gli elementi della matrice 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    // Lettura del valore di x
    printf("Inserisci un valore intero x: ");
    scanf("%d", &x);

    // Costruzione del vettore con gli elementi maggiori di x
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (m[i][j] > x) {
                v[k] = m[i][j];
                k++;
            }
        }
    }

    // Stampa del vettore
    printf("Vettore contenente gli elementi di m maggiori di x:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
