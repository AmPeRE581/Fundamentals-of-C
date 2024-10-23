/*Esercizio37: Un utente introduce da tastiera due numeri interi, chiamati INIZIO e LUN. Il programma
deve stampare una serie di numeri interi consecutivi. La serie inizia al valore INIZIO ed è
lunga LUN elementi.
Esempio:
Inserisci Inizio: 7
Inserisci Lun: 4
La serie è: 7 8 9 10*/

#include <stdio.h>

int main(){
    int inizio, lun, i; 

    printf("Inserisci il valore iniziale:");
    scanf("%d", &inizio);

    printf("Inserisci la lunghezza della serie:");
    scanf("%d", &lun);

    printf("La serie è:");
    for(i=inizio; i<inizio + lun; i++){
        printf("%d", i);
    }
    printf("\n");

    return 0;
}