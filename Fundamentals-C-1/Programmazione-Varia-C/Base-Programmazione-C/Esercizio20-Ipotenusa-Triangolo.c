/*Esercizio20: Calcolo dell'Ipotenusa di un Triangolo Rettangolo:

-- Descrizione: Scrivi un programma che calcoli l'ipotenusa di un triangolo rettangolo dati i cateti.*/

#include <stdio.h>
#include <math.h>

int main() {
    double cateto1, cateto2, ipotenusa;

    // Lettura delle lunghezze dei cateti
    printf("Inserisci la lunghezza del primo cateto: ");
    scanf("%lf", &cateto1);
    printf("Inserisci la lunghezza del secondo cateto: ");
    scanf("%lf", &cateto2);

    // Calcolo dell'ipotenusa
    ipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    // Stampa del risultato
    printf("L'ipotenusa del triangolo rettangolo è: %.2f\n", ipotenusa);

    return 0;
}