/*Esercizio27: Si scriva un programma in linguaggio C per calcolare il valore massimo e minimo di un
insieme di N numeri inseriti da tastiera. Il programma deve leggere il valore di N, ed
in seguito deve leggere una sequenza di N numeri. A questo punto il programma deve
stampare il massimo ed il minimo tra i numeri inseriti.*/

#include <stdio.h>

int main(){
    int N, num, max, min;

    /*Chiediamo all'utente di inserire il numero di elementi*/
    printf("Quanti numeri vuoi inserire? --->:");
    scanf("%d", &N);

    /*Iniziamo a leggere i numeri e a trovare il massimo e il minimo*/
    printf("Inserisci %d numeri:\n", N);
    scanf("%d", &num); /*Leggiamo il primo numero*/

    max=num; /*Si inizializza il primo numero con max e min*/
    min=num;

    for(int i=1; i<N; i++){
        scanf("%d", &num);
        
        if(num>max){
            max=num;
        }

        if(num<min){
            min=num;
        }
    }

    /*E qui ho terminato, e stampo i risultati*/
    printf("Il valore massimo è: %d\n", max);
    printf("Il valore minimo è: %d\n", min);

    return 0;
}