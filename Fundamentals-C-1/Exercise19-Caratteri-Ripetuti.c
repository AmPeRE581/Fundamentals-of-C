/*Esercizio4_8: Leggere n caratteri (uno per linea) e scrivere quante volte il primo carattere letto è 
ripetuto tra gli altri n-1 caratteri.*/

#include <stdio.h>

int main() {
    int n, i, conteggio = 0;
    char primoCarattere, carattere;

    // Lettura del numero di caratteri
    printf("Quanti caratteri vuoi inserire? ");
    scanf("%d", &n);

    // Verifica che n sia maggiore di 1
    if (n <= 1) {
        printf("Il numero di caratteri deve essere maggiore di 1.\n");
        return 1;
    }

    // Lettura del primo carattere
    printf("Inserisci il carattere 1: ");
    scanf(" %c", &primoCarattere); // Spazio prima di %c per ignorare caratteri precedenti come newline

    // Lettura dei successivi n-1 caratteri
    for (i = 2; i <= n; i++) {
        printf("Inserisci il carattere %d: ", i);
        scanf(" %c", &carattere);
        
        // Confronto con il primo carattere
        if (carattere == primoCarattere) {
            conteggio++;
        }
    }

    // Stampa del risultato
    printf("Il primo carattere '%c' è stato ripetuto %d volte tra gli altri %d caratteri.\n", primoCarattere, conteggio, n - 1);

    return 0;
}
