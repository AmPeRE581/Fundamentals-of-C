/*Esercizio3: Esempio3: Scrivi un programma in C che simuli il lancio di due dadi. Il programma dovrà:

1.Generare due numeri casuali compresi tra 1 e 6, rappresentando i risultati dei due dadi.
2.Stampare i valori ottenuti dai due dadi.
3.Calcolare la somma dei due valori e stamparla.
4.Stampare un messaggio a seconda della somma ottenuta:
 - Se la somma è 7 o 11: "Hai vinto!"
 - Se la somma è 2, 3 o 12: "Hai perso!"
 -- Altrimenti: "Riprova!"*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int dado1, dado2, somma;

    /*Inizializza il generatore di numeri casuali*/
    srand(time(NULL));

    dado1 = rand() % 6+1;
    dado2 = rand() % 6+1;

    /*Calcola la somma*/
    somma = dado1 + dado2;

    /*Stampo i risultati*/
    printf("Il primo dado è: %d\n", dado1);
    printf("Il secondo dado è: %d\n", dado2);
    printf("La somma è: %d\n", somma);

    /*Verifica il risultato del gioco*/
    if(somma == 7 || somma == 11){
        printf("Hai vinto!\n");
    } else if (somma == 2 || somma == 3 || somma == 12){
        printf("Hai perso!\n");
    } else {
        printf("Riprova!\n");
    }

    return 0;
}