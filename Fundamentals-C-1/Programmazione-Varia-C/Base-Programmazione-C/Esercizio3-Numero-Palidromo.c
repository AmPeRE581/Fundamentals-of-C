/*Esercizio3: Svolgere un esercizio c, che trovi i numeri di ordine palindromo...*/

#include <stdio.h>

int main() {
    int num, numero_inverso = 0, promemoria, numero_originale;
    printf("Inserisci un numero intero: ");
    scanf("%d", &num);

    numero_originale = num;

    while (num != 0) {
        promemoria = num % 10;
        numero_inverso = numero_inverso * 10 + promemoria;
        num /= 10;
    }

    if (numero_originale == numero_inverso) {
        printf("%d è un numero palindromo.\n", numero_originale);
    } else {
        printf("%d non è un numero palindromo.\n", numero_originale);
    }

    return 0;
}