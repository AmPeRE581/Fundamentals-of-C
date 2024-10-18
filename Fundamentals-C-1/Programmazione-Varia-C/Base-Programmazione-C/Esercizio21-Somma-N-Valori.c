/*Esercizio21: Si scriva un programma in linguaggio C per calcolare la somma di un insieme di N numeri
inseriti da tastiera. Il programma deve leggere inizialmente il valore di N. In seguito il
programma legge gli N numeri e infine ne visualizza la somma.*/

#include <stdio.h>

int main(){
    int N, num, somma=0;

    /*Lettura del valore di N*/

    printf("Inserisci il numero di elementi (N): ");
    scanf("%d", &N);

    /*Lettura dei N numeri e calcolo della somma*/
    printf("Inserisci %d numeri: \n", N);
    for(int i=0; i<N; i++){
        scanf("%d", &num);
        somma+= num;
    }

    /*Stampa della somma*/
    printf("La somma dei numeri inseriti è: %d\n", somma);

    return 0;
}