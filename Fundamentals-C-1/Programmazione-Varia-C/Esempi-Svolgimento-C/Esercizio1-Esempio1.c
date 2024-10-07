/*Esercizio1: Esempio1: Scrivi un programma in C che:

1.Chieda all'utente di inserire un numero intero positivo N.
2.Generi una sequenza di N numeri casuali compresi tra 1 e 100.

- Calcoli e stampi:
1.La somma di tutti i numeri generati.
2.Il numero più grande e il numero più piccolo della sequenza.
3.La media dei numeri generati.
4.Quanti numeri della sequenza sono pari.
5.Quanti numeri della sequenza sono divisibili per 5.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N, num, somma=0, max, min, pari=0, divisibili_per_5=0;

    /*Inizializza il generatore di numeri casuali*/
    srand(time(NULL));

    /*Chiedi all'utente di inserire N*/
    printf("Inserisci un numero intero positivo: ");
    scanf("%d",&N);

    /*Genera N numeri casuali e calcola le statistiche*/
    max=min=rand() % 100+1; /*Inizializza max e min con il primo numero*/
    for(int i=0; i<N; i++){
        num=rand()%100+1;

        somma+=num;
        if(num>max){
            max=num;
        }

        if(num<min){
            min=num;
        }

        if(num%2==0){
            pari++;
        }

        if(num%5==0){
            divisibili_per_5++;
        }
    }

    /*Calcola la media*/
    float media=(float)somma/N;

    /*Stampa i risultati*/

    printf("La somma dei numeri è: %d\n", somma);
    printf("Il numero più grande è: %d\n", max);
    printf("Il numero più piccolo è: %d\n", min);
    printf("La media è: %.2f\n", media);

    printf("Ci sono %d numeri pari\n", pari);
    printf("Ci sono %d numeri divisibili per 5\n", divisibili_per_5);

    return 0;
}