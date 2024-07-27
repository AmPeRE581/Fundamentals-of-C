/*Esercizio40: Scrivi un programma in c che calcola il minimo comune multiplo di due numeri inseriti dall'utente.*/

#include <stdio.h>

// Funzione per calcolare il massimo comune divisore (MCD) usando l'algoritmo di Euclide
int calcolaMCD(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Funzione per calcolare il minimo comune multiplo (MCM)
int calcolaMCM(int a, int b) {
    return (a * b) / calcolaMCD(a, b);
}

int main() {
    int num1, num2;
    
    // Richiesta dei numeri all'utente
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    
    // Calcolo del MCM
    int mcm = calcolaMCM(num1, num2);
    
    // Stampa del risultato
    printf("Il minimo comune multiplo di %d e %d è %d\n", num1, num2, mcm);
    
    return 0;
}