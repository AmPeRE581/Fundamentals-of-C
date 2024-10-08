/*Esercizio6: Esempio6: Scrivi un programma in C che:

1.Chieda all'utente di inserire una frase.
2.Conti il numero di vocali presenti nella frase.
3.Stampa il risultato.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h> /*Libreria serve per la classificazione dei caratteri, all'interno della programmazione*/

int main(){
    char frase[100];
    char vocali[] = "aeiouAEIOU";

    int i,j, contatore=0; 

    printf("Inserisci una frase: ");
    fgets(frase, 100, stdin);

    /*Rimuovi il newline se presente*/
    frase[strcspn(frase, "\n")]=0;

    for(i=0; frase[i] != '\0'; i++){
        for(j=0; vocali[j] != '\0'; j++){
            if(tolower(frase[i])==vocali[j]){
                contatore++;

                break;
            }
        }
    }

    printf("La frase contiene %d vocali.\n", contatore);

    return 0;
}