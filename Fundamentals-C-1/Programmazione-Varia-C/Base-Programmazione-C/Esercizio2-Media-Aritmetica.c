/*Esercizio2: 

-- Descrizione: Scrivi un programma che chieda all'utente di inserire tre numeri interi e poi calcoli e stampi la loro media aritmetica.

-- Requisiti:

1.Chiedi all'utente di inserire tre numeri interi.
2.Calcola la media aritmetica dei tre numeri.
3.Stampa il risultato.*/

#include <stdio.h>

int main(){
    int num1, num2, num3;
    float media;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    printf("Inserisci il terzo numero: ");
    scanf("%d", &num3);

    media = (num1+num2+num3) / 3;

    printf("Il risultato della media aritmetica è: %.2f", media);


}