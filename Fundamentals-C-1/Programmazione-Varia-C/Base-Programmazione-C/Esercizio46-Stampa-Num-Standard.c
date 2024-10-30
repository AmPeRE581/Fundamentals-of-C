/*Esercizio46: Scrivere ed eseguire un programma C opportunamente suddiviso in funzioni che letta in input una sequenza di 10 numeri, calcoli e stampi su standard output:
 -- la media dei numeri letti (come divisione tra la somma dei numeri e 10)
 -- il numero massimo tra i numeri letti
Inoltre, siano ME la media e MA il massimo, per ogni numero X della sequenza, calcolare e stampare su standard output:
 -- la differenza ME - X
 -- la differenza MA - X*/

#include <stdio.h>
#define NUM_ELEMENTI 10

/*Funzione per calcolare la media di un array di numeri*/
float calcolaMedia(int numeri[]){
    int somma=0; 
    for(int i=0; i<NUM_ELEMENTI; i++){
        somma += numeri[i];
    }
    return (float)somma / NUM_ELEMENTI;
}

/*Funzione per trovare il massimo valore di un array di numeri*/
int trovaMassimo(int numeri[]){
    int massimo = numeri[0];
    for(int i=1; i<NUM_ELEMENTI; i++){
        massimo = numeri[i];
    }
    return massimo;
}

int main(){
    int numeri[NUM_ELEMENTI];
    int i;

    printf("Inserisci %d numeri:\n", NUM_ELEMENTI);
    for(i=0; i<NUM_ELEMENTI; i++){
        scanf("%d", &numeri[i]);
    }

    float media = calcolaMedia(numeri);
    int massimo = trovaMassimo(numeri);

    printf("\nLa media è: %.2f\n", media);
    printf("Il massimo è: %d\n\n", massimo);

    for(i=0; i<NUM_ELEMENTI; i++){
        printf("Numero: %d\n", numeri[i]);
        printf("Differenza media-numero: %.2f\n", media - numeri[i]);
        printf("Differenza massimo-numero: %d\n\n", massimo - numeri[i]);
    }

    return 0;
}