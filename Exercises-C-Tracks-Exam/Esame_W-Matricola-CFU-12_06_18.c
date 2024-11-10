#include <stdio.h>

#define MAX_TERNE 100 /*Si assumono un max di 100 terne*/

/*Funzione per leggere una riga della matrice*/
void lettura_riga(int mat[][3], int quale_riga, int n_col){
    for(int j=0; j<n_col; j++){
        scanf("%d", &mat[quale_riga][j]);
    }
}

/*Funzione per calcolare la media di una colonna della matrice*/
float calcolo_media(int mat[][3], int n, int index_c){
    int somma=0; 
    for(int i=0; i<n; i++){
        somma += mat[i][index_c];
    }
    return (float)somma/n;
}

int main(){
    int n;
    int studente_anno_cfu[MAX_TERNE][3];

    printf("Inserisci il numero di terne: ");
    scanf("%d", &n);

    /*Leggi le terne e le inserisci nella matrice*/
    for(int i=0; i<n; i++){
        lettura_riga(studente_anno_cfu, i, 3);
    }

    /*Calcola la media dei cfu*/
    float media_cfu = calcolo_media(studente_anno_cfu, n, 2);

    /*Stampa gli studenti con cfu superiori alla media*/
    printf("Studenti con cfu superiori alla media (%.2f): \n", media_cfu);
    for(int i=0; i<n; i++){
        if(studente_anno_cfu[i][2] > media_cfu){
            printf("Studente: %d, Anno Immatricolazione: %d\n", studente_anno_cfu[i][0], studente_anno_cfu[i][1]);
        }
    return 0;
}

}