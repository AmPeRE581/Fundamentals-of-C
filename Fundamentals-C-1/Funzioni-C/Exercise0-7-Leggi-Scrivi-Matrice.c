/*Esercizio0_7: Esempi di funzioni con array bidimensionali come argomenti.*/

/*La funzione leggi_matrice per la lettura di una matrice; la funzione riceve la matrice mat,
il numero di righe nr e di colonne nc di mat che occorre leggere*/

/*La funzione scrivi_matrice per la scrittura di una matrice; la funzione riceve la matrice mat, 
il numero di righe nr e di colonne nc di mat che occorre scrivere*/

#define DIM1 100
#include <stdio.h>

void leggi_matrice(int mat[][DIM1], int nr, int nc){
    int i,j;
    for(i=0; i<nr; i++){
        for(j=0; j<nc; j++){
            printf("%d\t", mat[i][j]);
        }

        printf("\n");
    }
}