/*Esercizio1_4: Scrivere un programma che legge un vettore v di numeri in
virgola mobile di n elementi e ne stampa i primi m (n ed m sono due valori interi inseriti dall'utente con n>m).

Esempio: se n=5, m=3 e v vale {1.3; 5.2; 0.2; 3.7; 8.7} allora il programma
stampa [1.3; 5.2; 0.2]*/

#include <stdio.h>

int main() {
    int n, m, i;
    float v[100]; // Assumiamo un massimo di 100 elementi nel vettore

    // Chiediamo all'utente di inserire il numero totale di elementi (n) e i primi elementi da stampare (m)
    printf("Inserisci il numero totale di elementi (n): ");
    scanf("%d", &n);
    printf("Inserisci il numero di elementi da stampare (m): ");
    scanf("%d", &m);

    // Verifichiamo che n sia maggiore di m
    while (n <= m) {
        printf("Errore: n deve essere maggiore di m. Riprova:\n");
        scanf("%d", &n);
        scanf("%d", &m);
    }

    // Leggiamo gli elementi del vettore
    printf("Inserisci gli elementi del vettore:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }

    // Stampiamo i primi m elementi
    printf("I primi %d elementi del vettore sono:\n", m);
    for (i = 0; i < m; i++) {
        printf("%.2f ", v[i]);
    }
    printf("\n");

    return 0;
}
