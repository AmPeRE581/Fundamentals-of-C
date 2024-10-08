/*Esercizio8: Esempio8: Scrivi un programma in C che:

1.Chieda all'utente di inserire due parole.
2.Verifichi se le due parole sono anagrammi. Due parole sono anagrammi se sono composte esattamente dalle stesse lettere, ma in un ordine diverso (es. ascolta e ascolta).
3.Stampa un messaggio appropriato indicando se le parole sono anagrammi o meno.*/

#include <stdio.h>
#include <string.h>

int main(){
    char parola1[50], parola2[50];

    printf("Inserisci la prima parola: ");
    scanf("%s", parola1);

    printf("Inserisci la seconda parola: ");
    scanf("%s", parola2);

    /*Ordina le due parole*/
    qsort(parola1, strlen(parola1), sizeof(char), (void*)strcmp);
    qsort(parola2, strlen(parola2), sizeof(char), (void*)strcmp);

    /*Confronto con le parole ordinate*/

    if(strcmp(parola1, parola2) == 0){
        printf("Le parole sono anagrammi!\n");
    } else {
        printf("Le parole non sono anagrammi.\n");
    }

    return 0;
}