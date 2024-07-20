/*Traccia dell'esercizio: Calcolo della media di un array (Exercise4)

Scrivere un programma in linguaggio C che calcoli la media dei valori presenti in un array di numeri interi. L'array e la sua lunghezza devono essere definiti nel codice.

Specifiche:

Definire un array di numeri interi contenente almeno 5 elementi.
Calcolare la media dei valori presenti nell'array.
Stampare a schermo l'array e il valore della media calcolata con una precisione di due decimali.
Passaggi suggeriti:

Dichiarare l'array e definire i suoi elementi direttamente nel codice.
Calcolare la somma di tutti gli elementi presenti nell'array.
Dividere la somma per il numero totale di elementi per ottenere la media.
Stampare a schermo l'array e la media calcolata.Traccia dell'esercizio: Calcolo della media di un array

Scrivere un programma in linguaggio C che calcoli la media dei valori presenti in un array di numeri interi. L'array e la sua lunghezza devono essere definiti nel codice.

Specifiche:

Definire un array di numeri interi contenente almeno 5 elementi.
Calcolare la media dei valori presenti nell'array.
Stampare a schermo l'array e il valore della media calcolata con una precisione di due decimali.
Passaggi suggeriti:

Dichiarare l'array e definire i suoi elementi direttamente nel codice.
Calcolare la somma di tutti gli elementi presenti nell'array.
Dividere la somma per il numero totale di elementi per ottenere la media.
Stampare a schermo l'array e la media calcolata.*/

#include<stdio.h>

int main(){
    //Dichiarazione e inizializzazione dell'array

    int array[] = {10, 20, 30, 40, 50};
    int lunghezza = sizeof(array) / sizeof(array[0]); //Calcolo della lunghezza dell'array
    int somma = 0;
    float media;
    
    //Calcolo della somma dei valori nell'array
    for(int i =0; i<lunghezza; ++i){
        somma+= array[i];
    }

    //calcolo della media
    media = (float)somma / lunghezza;

    //Stampa dell'array

    printf("Array: ");
    for(int i =0; i<lunghezza; ++i){
        printf("%d", array[i]);
    }

    //Stampa della media con due decimali
    printf("\nMedia: %.2f\n", media);

    return 0;
}