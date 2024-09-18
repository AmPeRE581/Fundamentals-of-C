/*Esercizio1_6: Scrivere un programma che legge una sequenza di interi positivi
terminata da un valore negativo, e inserisce i primi 3 elementi pari in un vettore v1
e i primi 3 elementi dispari in un vettore v2.*/

#include <stdio.h>

#define MAX_NUMERI 100 // Massimo numero di numeri che l'utente può inserire

int main() {
    int numeri[MAX_NUMERI], v1[3], v2[3];
    int i = 0, j = 0, k = 0;

    printf("Inserisci una sequenza di numeri interi positivi (termina con un numero negativo):\n");

    // Leggiamo i numeri fino a che l'utente non inserisce un numero negativo
    while (1) {
        scanf("%d", &numeri[i]);
        if (numeri[i] < 0) {
            break;
        }
        i++;
    }

    // Riempiamo i vettori v1 (pari) e v2 (dispari)
    for (int x = 0; x < i; x++) {
        if (numeri[x] % 2 == 0 && j < 3) {
            v1[j] = numeri[x];
            j++;
        } else if (numeri[x] % 2 != 0 && k < 3) {
            v2[k] = numeri[x];
            k++;
        }
        if (j == 3 && k == 3) {
            break; // Se abbiamo già riempito entrambi i vettori, usciamo dal ciclo
        }
    }

    // Stampo i vettori risultanti
    printf("\nVettore dei primi 3 numeri pari:\n");
    for (int x = 0; x < j; x++) {
        printf("%d ", v1[x]);
    }

    printf("\nVettore dei primi 3 numeri dispari:\n");
    for (int x = 0; x < k; x++) {
        printf("%d ", v2[x]);
    }

    return 0;
}