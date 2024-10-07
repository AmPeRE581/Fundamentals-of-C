/*Esercizio2: Esempio2: Scrivi un programma in C che:

1.Chieda all'utente di inserire un numero intero positivo N.
2.Generi un array di N elementi, ciascuno contenente un numero intero casuale compreso tra 1 e 20.
3.Stampa l'array generato.
4.Ordini l'array in ordine crescente.
5.Stampa l'array ordinato.
6.Calcola e stampa la mediana dell'array*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N, i,j, temp;
    int array[100]; /*Si assume un massimo di 100 per l'array*/

    printf("Inserisci il numero di elementi: ");
    scanf("%d", &N);

    /*Genera numeri casuali e li inserisce nell'array*/
    srand(time(NULL));
    for(i=0; i<N; i++){
        array[i] = rand() % 20+1;
    }

    /*Stampa l'array non ordinato*/
    printf("Array non ordinato:");
    for(i=0; i<N; i++){
        printf("%d", array[i]);
    }

    printf("\n");

    /*Ordina l'array con bubble sort -- "Da notare, che si possono utilizzare altri algoritmi"*/
    for(i=0; i<N-1; i++){
        for(j=0; j<N-i-1; j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    /*Arriviamo al finale, stampando l'array ordinato...*/

    printf("Array Ordinato: ");
    for(i=0; i<N; i++){
        printf("%d", array[i]);
    }

    printf("\n");
}