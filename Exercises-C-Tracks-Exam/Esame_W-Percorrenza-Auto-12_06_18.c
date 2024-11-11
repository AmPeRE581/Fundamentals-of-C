#include <stdio.h>
#define MAX_SEQUENZE 100
#define TRIMESTRI 4

int percorrenza_anno(int mat[][TRIMESTRI], int i, int da, int fino_a){
    int somma=0; 
    for(int j=da; j<= fino_a; j++){
        somma += mat[i][j];
    }
    return somma;
}

int pos_massimo(int v[], int n){
    int max=v[0], pos=0;
    for(int i=1; i<n; i++){
        if(v[i] > max){
            max=v[i];
            pos=i;
        }
    }

    return pos;
}

int main(){
    int n;
    printf("Inserisci il numero di sequenze");
    scanf("%d", &n);

    int veicolo_anno_Km[MAX_SEQUENZE][TRIMESTRI+1];
    int totale_percorrenza_anno[MAX_SEQUENZE];

    /*Lettura delle sequenze*/
    for(int i=0; i<n; i++){
        printf("Inserisci i dati per la sequenza %d: \n", i+1);
        for(int j=0; j<= TRIMESTRI; j++){
            scanf("%d", &veicolo_anno_Km[i][j]);
        }
    }
    /*Calcolo della percorrenza annua per ogni sequenza*/
    for(int i=0; i<n; i++){
        totale_percorrenza_anno[i] = percorrenza_anno(veicolo_anno_Km, i, 2, TRIMESTRI);
    }
    /*Trova la posizione del massimo nel vettore totale_percorrenza_anno*/
    int pos_max = pos_massimo(totale_percorrenza_anno, n);

    /*Stampa i risultati*/
    printf("\nVeicoli con la massima percorrenza annua: \n");
    for(int i=0; i<n; i++){
        if(totale_percorrenza_anno[i] == totale_percorrenza_anno[pos_max]){
            printf("- Veicolo: %d - anno: %d\n", veicolo_anno_Km[i][0], veicolo_anno_Km[i][1]);
        }
    }

    return 0;
}