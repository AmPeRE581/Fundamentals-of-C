/*Esercizio4_7: Scrivere un programma che legge una sequenza di numeri interi terminati dal valore 0 e ne calcola
e stampa la media aritmetica.*/

#include <stdio.h>

int main() {
    int numero, somma = 0, conteggio = 0;

    // Lettura della sequenza di numeri
    printf("Inserisci i numeri (termina con 0):\n");
    
    while (1) {
        scanf("%d", &numero);
        
        // Condizione di terminazione
        if (numero == 0) {
            break;
        }

        somma += numero;  // Aggiorna la somma
        conteggio++;      // Conta quanti numeri sono stati inseriti
    }

    // Controllo che sia stato inserito almeno un numero
    if (conteggio == 0) {
        printf("Nessun numero valido inserito.\n");
    } else {
        // Calcolo e stampa della media aritmetica
        double media = (double)somma / conteggio;
        printf("La media aritmetica è: %.2f\n", media);
    }

    return 0;
}