/*Exercise17: Scrivere un programma che legge da tastiera
una matrice MAT di interi N x M (con
0<=N<=100 e 0<=M<=100) ed un indice di riga
i. Estrarre e posizionare in un vettore V gli
elementi della i-esima riga della matrice MAT.*/

#include<stdio.h>
#define DIM 100 //non puoi usare DIM se prima non lo dichiari :)
int main(){

    int n,m,i,j,index;
    int mat[DIM][DIM];
    int v[DIM];


    printf("Il numero delle righe da leggere (<=100): ");
    scanf("%d", &n);
    printf("\nIl numero delle colonne da leggere (<=100): ");
    scanf("%d", &m);

    for(i=0; i<n; i++){
        printf("\nLettura della riga di indice %d\n" ,i);
            for(j=0; j<m; j++){
                printf("\nElemento con indice [%d][%d]: ",i,j);
                scanf("%d",&mat[i][j]);
            }
    }

    printf("\nInserisci indice di riga: ");
    scanf("%d", &index);

    if(index <n){
        for(j=0; j<m; j++){
            v[j]=mat[index][j];
        }

        printf("Il vettore contenente gli elementi della riga %d della matrice e':\n", index);
        for(j=0; j<m; j++){
            printf("%d", v[j]);
        }
        printf("\n");
    }
    else{
        printf("Attenzione, hai inserito un indice di riga non valido");
    }
}
