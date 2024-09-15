/*Esercizio3_5: Leggere tre numeri interi da utilizzare per definire due intervalli. Ipotizzare che i tre numeri interi siano diversi.
Uno dei due intervalli, deve avere estremo inferiore uguale al più piccolo dei numeri letti, l'altro deve avere estremo superiore uguale al più grande dei numeri letti
Gli altri estremi dei due intervalli debbono essere uguali al valore intermedio tra i 3 valori letti. Il programma deve scrivere i due intervalli.

Ad esempio: Se i 3 numeri letti sono 45/23/12 il programma scriverà:
Primo intervallo: Estremo inferiore 12, estremo superiore 23.
Secondo Intervallo: Estremo inferiore 23, estremo superiore 45.*/

#include <stdio.h>

int main() {
    int a, b, c;
    int min, mid, max;

    // Lettura dei tre numeri interi
    printf("Inserisci tre numeri interi diversi: ");
    scanf("%d %d %d", &a, &b, &c);

    // Determinazione del minimo, medio e massimo
    if (a < b && a < c) {
        min = a;
        if (b < c) {
            mid = b;
            max = c;
        } else {
            mid = c;
            max = b;
        }
    } else if (b < a && b < c) {
        min = b;
        if (a < c) {
            mid = a;
            max = c;
        } else {
            mid = c;
            max = a;
        }
    } else {
        min = c;
        if (a < b) {
            mid = a;
            max = b;
        } else {
            mid = b;
            max = a;
        }
    }

    // Stampa degli intervalli
    printf("Primo intervallo: Estremo inferiore %d, estremo superiore %d.\n", min, mid);
    printf("Secondo intervallo: Estremo inferiore %d, estremo superiore %d.\n", mid, max);

    return 0;
}