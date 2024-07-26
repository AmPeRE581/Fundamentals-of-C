/*Esercizio35: Scrivere un programma che legge una matrice m1 quadrata n x n e verifica se:

- 1. m1 è matrice identità: tutti gli elementi della diagonale principale sono costituiti
dal numero 1, mentre i restanti elementi sono 0.

- 2. m1 è matrice nulla: composta da soli 0.

- 3. m1 è triangolare inferiore: tutti gli elementi al di sopra della diagonale
principale sono pari a 0.

- Per ciascuno dei tre casi implementare una funzione non void, nello specifico una
funzione bool, che verifica le istruzioni e restituisce true o false a seconda dei casi.b*/

#include<stdio.h>
#include<stdbool.h>

/* -- Funzione Verifica matrice identità -- */

bool isIdentityMatrix(int n, int m1[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                if(m1[i][j] != 1){
                    return false;
                }
            } else {
                if(m1[i][j] != 0){
                    return false;
                }
            }
        }
    }
    return true;
}

/* -- Funzione Verifica matrice nulla -- */

bool isZeroMatrix(int n, int m1[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(m1[i][j] != 0){
                return false;
            }
        }
    }
    return true;
}

/* -- Funzione Verifica matrice è triangolare inferiore -- */

bool isLowerTriangularMatrix(int n, int m1[n][n]){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(m1[i][j]!=0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    /* -- Lettura dimensione matrice -- */

    int n;
    printf("Inserisci la dimensione della matrice quadrata (n): ");
    scanf("%d", &n);

    /* -- Lettura Elementi Matrice -- */

    int m1[n][n];
    printf("Inserisci gli elementi della matrice: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    /* -- Verifica dei vari casi -- */

    if(isIdentityMatrix(n, m1)){
        printf("La matrice è una matrice identità.\n");
    } else {
        printf("La matrice non è una matrice identità.\n");
    }

    if(isZeroMatrix(n, m1)){
        printf("La matrice è una matrice nulla.\n");
    } else {
        printf("La matrice non è una matrice nulla.\n");
    }

    if(isLowerTriangularMatrix(n, m1)){
        printf("La matrice è una matrice triangolare inferiore.\n");
    } else {
        printf("La matrice non è una matrice triangolare inferiore.\n");
    }
}