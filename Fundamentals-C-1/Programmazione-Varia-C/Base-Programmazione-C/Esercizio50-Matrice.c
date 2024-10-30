/*Esercizio50: Matrice*/

#include <stdio.h>
#include <stdbool.h>

#define MAX_N 100
#define MAX_M 100

bool raggiungiUscita(int matrice[][MAX_M], int N, int M, int A, int B, int Z, int W){
    bool visitate[MAX_N][MAX_M] = {false};
    int x = A, y = B;
    int passi =0;

    while(x != Z || y != W){
        if(x<0 || x>=N || y<0 || y>=M){
            return false; /*Fuori dai limiti della matrice*/
        }
        if(visitate[x][y]){
            return false; /*Ciclo infinito*/
        } 
        visitate[x][y] = true;
        int prossimaCella = matrice[x][y];
        x = prossimaCella / M;
        y = prossimaCella % M;
        passi++;
        if(passi >= N*M){
            return false; /*Troppe iterazioni senza raggiungere l'uscita*/
        }
    }
    return true;
}

int main(){
    int N, M, A, B, Z, W;
    int matrice[MAX_N][MAX_M];

    /*Leggi le dimensioni della matrice e le posizioni di partenza e arrivo*/
    printf("Inserisci le dimensioni della matrice (N M): ");
    scanf("%d %d", &N, &M);
    printf("Inserisci le coordinate della posizione iniziale (A B): ");
    scanf("%d %d", &A, &B);
    printf("Inserisci le coordinate della posizione finale (Z W):");
    scanf("%d %d", &Z, &W);

    /*Inizializza la matrice*/
    int contatore =0;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            matrice[i][j] = contatore;
            contatore++;
        }
    }

    /*Verifica se è possibile raggiungere l'uscita*/
    if(raggiungiUscita(matrice, N, M, A, B, Z, W)){
        printf("E' possibile raggiungere l'uscita.\n");
    } else {
        printf("Non è possibile raggiungere l'uscita.\n");
    }
    return 0;
}