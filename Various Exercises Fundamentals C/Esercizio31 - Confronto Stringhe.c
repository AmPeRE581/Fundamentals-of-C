/*Esercizio31: Scrivi un programma che confronti due stringhe inserite dall'utente e determini se sono uguali.*/

#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];
    char string2[100];

    // Prendi in input la prima stringa
    printf("Inserisci la prima stringa: ");
    fgets(string1, sizeof(string1), stdin);

    // Prendi in input la seconda stringa
    printf("Inserisci la seconda stringa: ");
    fgets(string2, sizeof(string2), stdin);

    // Rimuovi il carattere di nuova linea alla fine delle stringhe (se presente)
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

    // Confronta le due stringhe
    if (strcmp(string1, string2) == 0) {
        printf("Le stringhe sono uguali.\n");
    } else {
        printf("Le stringhe sono diverse.\n");
    }

    return 0;
}