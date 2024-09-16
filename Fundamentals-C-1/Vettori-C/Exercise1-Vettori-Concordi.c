/*Esercizio1_1: Scrivere un programma in cui un vettore v di 5 elementi è costruito come segue: l'utente inserisce
2 numeri interi nelle prime tre posizioni di v e, se questi numeri sono concordi, i rimanenti 3 elementi di v
vengono posti a 0, altrimenti a -1.*/

#include <stdio.h>

int main() {
    int v[5];  // Vettore di 5 elementi
    int concordi = 0;  // Variabile per verificare se i numeri sono concordi

    // Lettura dei primi due numeri
    printf("Inserisci due numeri interi per le prime due posizioni del vettore:\n");
    scanf("%d %d", &v[0], &v[1]);

    // Lettura del terzo numero
    printf("Inserisci il terzo numero intero:\n");
    scanf("%d", &v[2]);

    // Controllo se i primi due numeri sono concordi (entrambi positivi o entrambi negativi)
    if ((v[0] >= 0 && v[1] >= 0) || (v[0] < 0 && v[1] < 0)) {
        concordi = 1;
    }

    // Assegnazione degli ultimi tre elementi in base alla concordanza
    if (concordi) {
        v[3] = 0;
        v[4] = 0;
    } else {
        v[3] = -1;
        v[4] = -1;
    }

    // Stampa del vettore
    printf("Il vettore risultante è:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}