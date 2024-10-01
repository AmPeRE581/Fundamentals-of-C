#include <stdio.h>
#include <math.h>

int main() {
    int numero, i;
    int e_primo = 1; // Assumiamo inizialmente che il numero sia primo

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    // Controlliamo se il numero è positivo
    if (numero <= 1) {
        printf("Il numero deve essere maggiore di 1.\n");
        return 1;
    }

    // Controlliamo se il numero è divisibile per qualche numero da 2 a sqrt(numero)
    for (i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            e_primo = 0; // Se è divisibile, non è primo
            break; // Possiamo interrompere il ciclo
        }
    }

    // Stampiamo il risultato
    if (e_primo) {
        printf("%d è un numero primo.\n", numero);
    } else {
        printf("%d non è un numero primo.\n", numero);
    }

    return 0;
}