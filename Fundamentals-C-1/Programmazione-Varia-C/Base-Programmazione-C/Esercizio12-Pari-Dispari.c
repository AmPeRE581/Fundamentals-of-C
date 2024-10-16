/*Esercizio12:Somma dei Numeri Pari e Dispari:

-- Descrizione: Scrivi un programma che legga una serie di numeri interi inseriti dall'utente e calcoli la somma dei numeri pari e la somma dei numeri dispari separatamente.

-- Requisiti:

1.Chiedi all'utente di inserire il numero di elementi della serie.
2.Leggi i numeri inseriti.
3.Calcola e stampa la somma dei numeri pari.
4.Calcola e stampa la somma dei numeri dispari.*/

#include <stdio.h>

int main(){
    int n, num, sommaPari = 0, sommaDispari=0; 

    printf("Inserisci il numero di elementi: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &num);

        if(num%2==0){
            sommaPari += num;
        } else {
            sommaDispari += num;
        }
    }

    printf("La somma dei numeri pari è: %d\n", sommaPari);
    printf("La somma dei numeri dispari è: %d\n", sommaDispari);

    return 0;
}