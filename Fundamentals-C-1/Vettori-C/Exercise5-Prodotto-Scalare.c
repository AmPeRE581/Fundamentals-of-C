/*Esercizio1_5: Scrivere un programma che legge due vettori di interi
v1 e v2 di n elementi, calcola e scrive il prodotto scalare di v1 e v2.*/

#include <stdio.h>

int main() {
    int n, i;
    int v1[100], v2[100];
    int prodotto_scalare = 0;

    // Chiediamo all'utente di inserire la dimensione dei vettori
    printf("Inserisci la dimensione dei vettori: ");
    scanf("%d", &n);

    // Leggiamo gli elementi dei due vettori
    printf("Inserisci gli elementi del primo vettore:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Inserisci gli elementi del secondo vettore:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &v2[i]);
    }

    // Calcoliamo il prodotto scalare
    for (i = 0; i < n; i++) {
        prodotto_scalare += v1[i] * v2[i];
    }

    // Stampo il risultato
    printf("Il prodotto scalare dei due vettori è: %d\n", prodotto_scalare);

    return 0;
}