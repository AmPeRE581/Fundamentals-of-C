/*Esercizio2_3: Leggere tre numeri interi e stampare un messaggio che comunica
all'utente quanti numeri positivi ha inserito e quanti negativi.*/

#include <stdio.h>

int main() {
    int num1, num2, num3;
    int positivi = 0, negativi = 0;

    // Leggi tre numeri interi
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &num3);

    // Controlla se i numeri sono positivi o negativi
    if (num1 > 0) positivi++;
    else if (num1 < 0) negativi++;

    if (num2 > 0) positivi++;
    else if (num2 < 0) negativi++;

    if (num3 > 0) positivi++;
    else if (num3 < 0) negativi++;

    // Stampa il risultato
    printf("Hai inserito %d numeri positivi e %d numeri negativi.\n", positivi, negativi);

    return 0;
}


