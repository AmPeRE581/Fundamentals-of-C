/*Esercizio1: Programma di Somma:

-- Descrizione: Scrivi un programma che chieda all'utente di inserire due numeri interi e poi calcoli e stampi la loro somma.

-- Requisiti:

1.Chiedi all'utente di inserire due numeri interi.
2.Calcola la somma dei due numeri.
3.Stampa il risultato.*/

#include <stdio.h>

int main(){
    int num1, num2, somma;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    somma= num1+num2;

    printf("Il risultato della somma è: %d\n", somma);
}