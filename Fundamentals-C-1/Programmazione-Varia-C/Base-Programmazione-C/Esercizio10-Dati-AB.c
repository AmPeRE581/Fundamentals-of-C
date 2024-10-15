/*Controlla A e B

Si scriva un programma in linguaggio C che legga due numeri da tastiera, detti A e B, e
determini le seguenti informazioni, stampandole a video:

1. determini se B è un numero positivo o negativo
2. determini se A è un numero pari o dispari
3. calcoli il valore di A + B
4. determini quale scelta dei segni nell’espressione (+-A) + (+-B) porta al risultato massimo,
e quale è questo valore massimo.

-- Suggerimento. Nel punto 4., il valore massimo della somma di A e B si può ottenere
sommando il valore assoluto di A e di B.*/

#include <stdio.h>
#include <stdlib.h> /*Sviluppo della libreria per la versione ABS*/

int main(){
    int A,B;

    /*Lettura dei propri numeri da tastiera*/
    printf("Inserisci il valore di A: ");
    scanf("%d", &A);
    printf("Inserisci il valore di B: ");
    scanf("%d", &B);

    /*1. Determinare se B che prende il numero è positivo oppure negativo*/

    if(B >0){
        printf("B è un numero positivo.\n");
    } else if(B <0){
        printf("B è un numero negativo.\n");
    } else {
        printf("B è zero.\n");
    }
}

