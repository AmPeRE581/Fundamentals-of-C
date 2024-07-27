/*Esercizio39: Calcolare il massimo comune divisore di due numeri inseriti dall'utente.*/

#include <stdio.h>

// Funzione per calcolare il massimo comune divisore usando l'algoritmo di Euclide
int calcolaMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Chiede all'utente di inserire i due numeri
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    // Calcola il MCD
    int mcd = calcolaMCD(num1, num2);

    // Stampa il risultato
    printf("Il massimo comune divisore di %d e %d è: %d\n", num1, num2, mcd);

    return 0;
}