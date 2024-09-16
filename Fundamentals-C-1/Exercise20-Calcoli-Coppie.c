/*Esercizio4_9: Scrivere un programma che legge n coppie di numeri interi e, per ogni coppia letta, scrivere la somma
di tutti i numeri interi che cadono nell'intervallo che ha come estremo inferiore l'elemento minore della coppiua e come
estremo superiore l'altro elemento della coppia.*/

#include <stdio.h>

int main() {
    int n, i, a, b, somma, min, max;

    // Lettura del numero di coppie
    printf("Quante coppie di numeri vuoi inserire? ");
    scanf("%d", &n);

    // Ciclo per ogni coppia di numeri
    for (i = 0; i < n; i++) {
        printf("Inserisci la coppia di numeri %d (separati da spazio): ", i + 1);
        scanf("%d %d", &a, &b);

        // Determinazione degli estremi dell'intervallo
        if (a < b) {
            min = a;
            max = b;
        } else {
            min = b;
            max = a;
        }

        // Calcolo della somma dei numeri nell'intervallo [min, max]
        somma = 0;
        for (int j = min; j <= max; j++) {
            somma += j;
        }

        // Stampa della somma per la coppia corrente
        printf("La somma dei numeri nell'intervallo [%d, %d] è: %d\n", min, max, somma);
    }

    return 0;
}