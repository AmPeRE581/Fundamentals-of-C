/*Esercizio2_2: Leggere due numeri interi x e y. Se x è maggiore di y, sottrarli e stampare il risultato; in caso contrario, azzerare y.
Successivamente se x è maggiore di 100, calcolarne il quadrato e stampare il risultato.*/

#include <stdio.h>

int main() {
    int x, y;

    // Leggere i due numeri interi
    printf("Inserisci due numeri interi x e y: ");
    scanf("%d %d", &x, &y);

    // Controllare se x è maggiore di y
    if (x > y) {
        int risultato = x - y;
        printf("Risultato della sottrazione: %d\n", risultato);
    } else {
        y = 0;
        printf("y è stato azzerato: %d\n", y);
    }

    // Controllare se x è maggiore di 100
    if (x > 100) {
        int quadrato = x * x;
        printf("Il quadrato di x è: %d\n", quadrato);
    }

    return 0;
}
