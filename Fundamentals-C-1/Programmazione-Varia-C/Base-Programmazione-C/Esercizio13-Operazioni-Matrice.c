/*Esercizio13: Operazioni con le matrici*/

#include <stdio.h>

void leggiMatrice(int matrice[][10], int n);
void stampaMatrice(int matrice[][10], int n);
void sommaMatrici(int matrice1[][10], int matrice2[][10], int risultato[][10], int n);
void sottraiMatrici(int matrice1[][10], int matrice2[][10], int risultato[][10], int n);
void moltiplicaMatrici(int matrice1[][10], int matrice2[][10], int risultato[][10], int n);

int main(){
    int n, matrici1, matrici2;
    printf("Inserisci la dimensione delle matrici(NxN): ");
    scanf("%d", &n);

    int matrice1[10][10], matrice2[10][10], risultato[10][10];
    
    printf("Inserisci gli elementi della prima matrice: \n");
    leggiMatrice(matrice1, n);

    printf("Inserisci gli elementi della seconda matrice: \n");
    leggiMatrice(matrice2, n);

    sommaMatrici(matrici1, matrice2, risultato, n);
    printf("Somma delle matrici:\n");
    stampaMatrice(risultato, n);

    sottraiMatrici(matrici1, matrice2, risultato, n);
    printf("Sottrazione delle matrici: \n");
    stampaMatrice(risultato, n);

    moltiplicaMatrici(matrice1, matrice2, risultato, n);
    printf("Moltiplicazione delle matrici: \n");
    stampaMatrice(risultato, n);

    return 0;
}

void leggiMatrice(int matrice[][10], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matrice[i][j]);
        }
    }
}

void stampaMatrice(int matrice[][10], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d", matrice[i][j]);
        }

        printf("\n");
    }
}

void sommaMatrici(int matrice1[][10], int matrice2[][10], int risultato[][10], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            risultato[i][j] = matrice1[i][j] + matrice2[i][j];
        }
    }
}

void sottraiMatrici(int matrice1[][10], int matrice2[][10], int risultato[][10], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            risultato[i][j] = matrice1[i][j] - matrice2[i][j];
        }
    }
}