/*Esercizio15*/

#include <stdio.h>

#define MAX_DIM 100 //MAI Definire una matrice :)

/*** Svolgimento Punto 1 ***/
void stampa_somma_matrice(int mat[MAX_DIM][MAX_DIM], int n, int m) {
    int i, j;
    int somma_riga, somma_colonna;

    // Somma delle righe
    for (i = 0; i < n; i++) {
        somma_riga = 0;
        for (j = 0; j < m; j++) {
            somma_riga += mat[i][j];
        }
        printf("Somma della riga %d: %d\n", i, somma_riga);
    }

    // Somma delle colonne
    for (j = 0; j < m; j++) {
        somma_colonna = 0;
        for (i = 0; i < n; i++) {
            somma_colonna += mat[i][j];
        }
        printf("Somma della colonna %d: %d\n", j, somma_colonna);
    }
}

/*** Svolgimento Punto 2 ***/
void massimo_minimo_matrice(int mat[MAX_DIM][MAX_DIM], int n, int m, int *max, int *min) {
    int i, j;
    *max = mat[0][0]; // Inizializzazione a un valore della matrice
    *min = mat[0][0]; // Inizializzazione a un valore della matrice

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (mat[i][j] < *min) {
                *min = mat[i][j];
            }
            if (mat[i][j] > *max) {
                *max = mat[i][j];
            }
        }
    }
}

/*** Svolgimento Punto 3 ***/
int cerca_term_matrice(int mat[MAX_DIM][MAX_DIM], int n, int m, int termine) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (mat[i][j] == termine) {
                return 1; // Termine trovato
            }
        }
    }
    return 0; // Termine non trovato
}

int main() {
    int mat[MAX_DIM][MAX_DIM];
    int n = 3; // Esempio di dimensione
    int m = 3; // Esempio di dimensione
    int i, j;
    
    // Esempio di riempimento della matrice
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            mat[i][j] = i * m + j + 1;
        }
    }

    stampa_somma_matrice(mat, n, m);

    int max, min;
    massimo_minimo_matrice(mat, n, m, &max, &min);
    printf("Minimo: %d\n", min);
    printf("Massimo: %d\n", max);

    int termine = 5; // Esempio di termine da cercare
    if (cerca_term_matrice(mat, n, m, termine)) {
        printf("Termine %d trovato nella matrice\n", termine);
    } else {
        printf("Termine %d non trovato nella matrice\n", termine);
    }

    return 0;
}
