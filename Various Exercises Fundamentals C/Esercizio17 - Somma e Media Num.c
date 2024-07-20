/*Esercizio17: Somma e Media di Numeri
Scrivi un programma in linguaggio C che faccia quanto segue:

- Chieda all'utente di inserire il numero di elementi (interi) da sommare.
- Chieda all'utente di inserire i numeri.
- Calcoli la somma e la media dei numeri inseriti.
- Visualizzi la somma e la media.

Requisiti
 
- Utilizza un array per memorizzare i numeri.
- Utilizza un ciclo for per iterare attraverso i numeri e calcolare la somma totale.
- Calcola la media come somma totale dei numeri diviso per il numero di elementi.
- Visualizza la somma e la media con due cifre decimali.*/

#include <stdio.h>

int main(){
    int n, i;
    float somma = 0.0, media;

    printf("Inserisci il numero di elementi: ");
    scanf("%d", &n);

    if(n<=0){
        printf("Il numero di elementi deve essere maggiore di zero.\n");
        return 1;
    }

    float numeri[n];

    for(i=0; i<n; i++){
        printf("Inserisci il numero %d:", i+1);
        scanf("%f", &numeri[i]);
        somma += numeri[i];
    }

    media = somma / n;

    printf("La somma dei numeri è %.2f\n", somma);
    printf("La media dei numeri è: %.2f\n", media);

    return 0;
}