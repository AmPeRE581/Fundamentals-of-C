/*Esercizio29: Verifica Istruzioni Matrice*/

#include <stdio.h>
#include <stdbool.h>

/* -- Funzione per verificare se la matrice è una matrice identità -- */

bool isIdentityMatrix(int n, int m1[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                if(m1[i][j] != 1){
                    return false;
                } else {
                    if(m1[i][j] != 0){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

/* -- Funzione per verificare se la matrice è una matrice nulla -- */

bool isZeroMatrix(int n, int m1[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(m1[i][j]){
                return false;
            }
        }
    }
    return true;
}

/* -- Funzione per verificare se la matrice è una matrice inferiore -- */

bool isLowerTriangularMatrix(int n, int m1[n][n]){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(m1[i][j] !=0 ){
                return false;
            }
        }
    }
    return true;
}

int main(){
    /*Lettura dimensione matrice*/

    int n;
    printf("Inserisci la dimensione della matrice quadrata(n): ");
    scanf("%d", &n);

    /*Lettura elementi matrice*/
    
    int m1[n][n];
    printf("Inserisci gli elementi della matrice: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    /*Verifica casistiche*/

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