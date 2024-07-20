/*Exercise16: Scrivere un programma che legge una matrice
di numeri interi N x M (con 0<=N<=100 e
0<=M<=100) e stampa la cornice della matrice
inserita.*/

#include<stdio.h>
#define DIM 100

int main(){
    int n,m,i,j;
    int mat[DIM][DIM];

    printf("Il numero delle righe da leggere (<=100): ");
    scanf("%d", &n);
    printf("\nIl numero delle colonne da leggere (<=100): ");
    scanf("%d", &m);

    for(i=0; i<n; i++){
        printf("\nLettura della riga di indice %d\n" ,i);
            for(j=0; j<m; j++){
                printf("\nElemento con indice [%d][%d]: "i,j);
                scanf("%d",&mat[i][j]);
            }
    }

    printf("La cornice della matrice inserita è: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(i==0 || i== n-1 || j==0 || j==m-1){
                printf("%d", mat[i][j]);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}