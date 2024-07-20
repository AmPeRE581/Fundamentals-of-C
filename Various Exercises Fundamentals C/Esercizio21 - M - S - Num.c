/*Esercizio21: Questo esercizio richiede di creare un programma che legge una serie di numeri interi da input, 
li memorizza in un array, e poi calcola e stampa la somma e la media di questi numeri.

Descrizione dell'esercizio
Scrivi un programma in C che:

-- Chiede all'utente quanti numeri vuole inserire.
-- Legge i numeri dall'utente e li memorizza in un array.
-- Calcola e stampa la somma di tutti i numeri.
-- Calcola e stampa la media dei numeri.*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    
    // Chiedere all'utente quanti numeri vuole inserire
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);
    
    // Creare un array per memorizzare i numeri
    int numbers[n];
    
    // Leggere i numeri dall'utente
    printf("Inserisci %d numeri:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // Calcolare la somma dei numeri
    for(i = 0; i < n; i++) {
        sum += numbers[i];
    }
    
    // Calcolare la media dei numeri
    float average = sum / n;
    
    // Stampare la somma e la media
    printf("La somma è: %.2f\n", sum);
    printf("La media è: %.2f\n", average);
    
    return 0;
}