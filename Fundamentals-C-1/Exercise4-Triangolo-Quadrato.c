/*Esercizio2_1: Leggere due numeri interi l1 e l2 e dire (cioè informare l'utente tramite una stampa) se si tratta dei lati di un quadrato
o di un rettangolo.*/

#include <stdio.h>

int main() {
    int l1, l2;

    // Legge i due numeri interi
    printf("Inserisci il primo lato (l1): ");
    scanf("%d", &l1);
    printf("Inserisci il secondo lato (l2): ");
    scanf("%d", &l2);

    // Determina se si tratta di un quadrato o di un rettangolo
    if (l1 == l2) {
        printf("Si tratta di un quadrato.\n");
    } else {
        printf("Si tratta di un rettangolo.\n");
    }

    return 0;
}