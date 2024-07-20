/*Exercise24: Scrivere un programma che calcola e stampa l’elemento più frequente
all’interno di una matrice di n x n valori interi.*/

#include <stdio.h>
#include <stdlib.h>

// Funzione per trovare l'elemento più frequente in un array
int trovaElementoPiuFrequente(int* array, int dimensione) {
    int maxCount = 0;
    int elementoPiuFrequente = array[0];

    for (int i = 0; i < dimensione; i++) {
        int count = 0;
        for (int j = 0; j < dimensione; j++) {
            if (array[j] == array[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            elementoPiuFrequente = array[i];
        }
    }
    return elementoPiuFrequente;
}

int main() {
    int n;

    // Lettura della dimensione della matrice
    printf("Inserisci la dimensione della matrice (n x n): ");
    scanf("%d", &n);

    // Allocazione della matrice
    int** matrice = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrice[i] = (int*)malloc(n * sizeof(int));
    }

    // Lettura degli elementi della matrice
    printf("Inserisci gli elementi della matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }

    // Creazione di un array temporaneo per contenere tutti gli elementi della matrice
    int* elementi = (int*)malloc(n * n * sizeof(int));
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            elementi[k++] = matrice[i][j];
        }
    }

    // Trovare l'elemento più frequente
    int elementoPiuFrequente = trovaElementoPiuFrequente(elementi, n * n);

    // Stampa dell'elemento più frequente
    printf("L'elemento più frequente nella matrice è: %d\n", elementoPiuFrequente);

    // Deallocazione della memoria
    for (int i = 0; i < n; i++) {
        free(matrice[i]);
    }
    free(matrice);
    free(elementi);

    return 0;
}