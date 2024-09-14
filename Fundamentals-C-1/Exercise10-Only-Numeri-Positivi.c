/*Esercizio3_4: Scrivere un programma che accetta solo numeri positivi, terminando la lettura quando un numero negativo o pari a zero
viene inserito.*/

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci numeri positivi (termina con un numero negativo o zero):\n");

    while (1) {
        printf("Inserisci un numero: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Numero negativo o zero inserito. Programma terminato.\n");
            break;
        }

        printf("Hai inserito: %d\n", numero);
    }

    return 0;
}