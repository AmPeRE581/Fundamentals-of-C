/*Esercizio1_3: Funzione VOID Con Parametri*/ /*NON FUNZIONANTE DA VERIFICARE!!!*/

#include<stdio.h>
#define DIM 100

void scrivi(int mat[][DIM], int x){
    int i,j;
    printf("Stampo Matrice...\n");
    for(i=0; i<x; i++){
        for(j=0; j<x; j++){
            printf("%d",mat[i][j]);
        }
    }
}

void leggi(int mat[][DIM], int x){
    int i,j;
    printf("\nLeggo Matrice...\n");
    for(i=0; i<x; i++){
        for(j=0; j<x; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

int main(){
    int m1[DIM][DIM];
    int m2[DIM][DIM];
    int n;

    printf("Dimensione Matrice? ---->");
    scanf("%d", &n);

    printf("Effettuo la lettura tramite la matrice funzione\n");
    leggi(m1,n);
    
    printf("Effettuo la scrittura tramite la matrice funzione\n");
    leggi(m1,n);

    printf("Effettuo la lettura tramite la matrice funzione\n");
    leggi(m2,n);

    printf("Effettuo la scrittura tramite la matrice funzione\n");
    leggi(m2,n);
}