/*Esercizio13: Esempio13: Scrivi un programma in C che:

Legge da tastiera una frase.
Conta quante volte ciascuna vocale (a, e, i, o, u) appare nella frase.
Stampa il risultato in un formato leggibile, indicando il numero di occorrenze per ogni vocale.*/

#include <stdio.h>
#include <ctype.h>

int main(){
    char frase[100];
    int vocali[5] = {0};

    printf("Inserisci una frase: ");
    fgets(frase, 100, stdin);

    /*Scorrimento di ogni carattere all'interno della frase*/
    for(int i=0; frase[i] != '\0'; i++){
        char c = tolower(frase[i]);
        if(c >= 'a' && c <= 'z'){
            switch (c) {
                case 'a': vocali[0]++; 
                break;

                case 'e': vocali[1]++;
                break;

                case 'i': vocali[2]++;
                break;

                case 'o': vocali[3]++;
                break;

                case 'u': vocali[4]++;
                break;
            }
        }
    }

    /*Stampo i risultati*/

    printf("Conteggio delle vocali:\n");
    for(int i=0; i<5; i++){
        char vocale = 'a' +i;
        printf("La lettera %c compare %d volte.\n", vocale, vocali[i]);
    }

    return 0;
}