/*Esercizio1-7: Media e deviazione standard

Scrivi un programma in C che:

1.Chieda all'utente di inserire un numero intero N che rappresenta la quantità di numeri da inserire.
2.Chieda all'utente di inserire N numeri interi.
3.Calcoli la media aritmetica dei numeri inseriti.
4.Calcoli la deviazione standard dei numeri inseriti.
5.Visualizzi i risultati ottenuti.*/

#include <stdio.h>
#include <math.h>

int main(){
    int N,i;
    float numeri[100], somma=0, media, varianza=0;
    
    printf("Quanti numeri vuoi inserire? --->");
    scanf("%d", &N);

    /*Leggi i numeri dall'utente e calcola la somma*/
    for(i=0; i<N; i++){
        printf("Inserisci il numero %d: ",i+1);
        scanf("%f", &numeri[i]);
        somma += numeri[i];
    }

    /*Calcola la media*/
    media = somma/N;

    /*Calcola la varianza*/
}