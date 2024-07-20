/*Esercizio9: Scrivere un programma C che legge un array di interi da tastiera e poi lo stampa in ordine invertito...*/

#include <stdio.h>

int main(){
    int x;

    //Chiedi all'utente quanti numeri vuole inserire...considera che abbiamo scelto di inserire 5 numeri....

    printf("Quanti numeri vuoi inserire?--->");
    scanf("%d",&x);

    int array[x];
    int i;

    //Legge gli elementi dell'array direttamente da tastiera....

    printf("Inserisci i numeri che vuoi inserire nell'array... --->");
    for(i=0; i<x; i++){ 
        printf("Numero %d:",i+1); 
        scanf("%d",&array[i]); 
    }


    printf("\nArray invertito: ");
    for (i = x; i >= 0; i--) {
        printf("%d", array[i]);
    }
        return 0;
}
