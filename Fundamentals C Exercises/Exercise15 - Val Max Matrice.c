/*Exercise15: Scrivere un programma che legge un intero x,
una matrice di numeri interi 3 x 4 e verifica se x
corrisponde al valore massimo degli elementi
della matrice.*/

#include<stdio.h>
#define N 3
#define M 4

int main(){
    int x,i,j,max;
    int mat[N][M];

    printf("Inserisci un intero: ");
    scanf("%d", &x);

    for(i=0; i<N; i++){
        printf("\nLettura della riga di indice %d\n",i);
        for(j=0; j<M; j++){
            printf("\nElemento con indice [%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    max = mat[0][0];
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            if(mat[i][j]>max){
                max = mat[i][j];
            }
        }
    }

    if(max == x){
        printf("\nIl numero %d corrisponde al valore massimo\n", x);
    } else {
        printf("\nIl numero %d non corrisponde al valore massimo\n", x);
    }
}