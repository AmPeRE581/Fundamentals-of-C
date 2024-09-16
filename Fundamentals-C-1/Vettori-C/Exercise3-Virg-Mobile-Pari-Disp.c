/*Esercizio1_3: Scrivere un programma che legge 10 numeri in virgola mobile, li inserisce in un vettore v, e quindi
stampa prima tutti gli elementi di v con indice pari e poi tutti quelli con indice dispari.*/

#include <stdio.h>

int main() {
    float v[10];
    int i;

    // Lettura dei 10 numeri in virgola mobile
    printf("Inserisci 10 numeri in virgola mobile:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    // Stampa degli elementi con indice pari
    printf("Elementi con indice pari:\n");
    for (i = 0; i < 10; i += 2) { // Indici pari: 0, 2, 4, 6, 8
        printf("%f ", v[i]);
    }
    printf("\n");

    // Stampa degli elementi con indice dispari
    printf("Elementi con indice dispari:\n");
    for (i = 1; i < 10; i += 2) { // Indici dispari: 1, 3, 5, 7, 9
        printf("%f ", v[i]);
    }
    printf("\n");

    return 0;
}


