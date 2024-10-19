/*Esercizio24: Si scriva un programma in linguaggio C che legga da tastiera una serie di numeri interi
fino a quando la somma di tutti i numeri introdotti fino a quel momento non supera il
valore 1000. A quel punto, il programma stampa il valore del prodotto di tutti i numeri
inseriti.*/

#include <stdio.h>

int main(){
    int num;
    long long prodotto =1;
    int somma=0;

    printf("Inserisci numeri interi (il programma termina quando la somma supera 1000):\n");

    while(somma<=1000){
        scanf("%d", &num);
        somma+=num;
        prodotto *=num;
    }

    printf("Il prodotto di tutti i numeri inseriti è: &lld\n", prodotto);

    return 0;
}
