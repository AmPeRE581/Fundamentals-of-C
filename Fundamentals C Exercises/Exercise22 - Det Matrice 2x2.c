/*Exercise22: Scrivere un programma che calcola
il determinante di una matrice di valori reali
di dimensioni 2x2*/

#include <stdio.h>

// Funzione per calcolare il determinante di una matrice 2x2
double calcolaDeterminante2x2(double matrice[2][2]) {
    return (matrice[0][0] * matrice[1][1]) - (matrice[0][1] * matrice[1][0]);
}

int main() {
    double matrice[2][2];

    // Lettura dei valori della matrice 2x2
    printf("Inserisci i valori della matrice 2x2:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%lf", &matrice[i][j]);
        }
    }

    // Calcolo del determinante
    double determinante = calcolaDeterminante2x2(matrice);

    // Stampa del risultato
    printf("Il determinante della matrice 2x2 è: %lf\n", determinante);

    return 0;
}