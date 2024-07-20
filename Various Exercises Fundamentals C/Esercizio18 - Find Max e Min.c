/*Esercizio18: Trova il Massimo e il Minimo
Scrivi un programma in linguaggio C che faccia quanto segue:

- Chieda all'utente di inserire il numero di elementi (interi) da considerare.
- Chieda all'utente di inserire i numeri.
- Trovi e visualizzi il numero massimo e il numero minimo tra quelli inseriti.

Requisiti

- Utilizza un array per memorizzare i numeri.
- Utilizza un ciclo for per iterare attraverso i numeri.
- Trova il massimo e il minimo utilizzando due variabili di appoggio.
- Visualizza il numero massimo e il numero minimo.*/

#include<stdio.h>

int main(){
    int n,i;
    int max, min;

    printf("Inserisci il numero di elementi: ");
    scanf("%d", &n);

    if(n<=0){
        printf("Il numero di elementi deve essere maggiore di zero.\n");
        return 1;
    }

    int numeri[n];

    for(i=0; i<n; i++){
        printf("Inserisci il numero %d: ", i+1);
        scanf("%d", &numeri[i]);
    }

    max = numeri[0];
    min = numeri[0];

    for(i=1; i<n; i++){
        if(numeri[i] > max){
            max = numeri[i];
        }
        if(numeri[i] < min){
            min = numeri[i];
        }
    }

    printf("Il numero massimo è: %d\n", max);
    printf("Il numero minimo è: %d\n", min);

    return 0;
}