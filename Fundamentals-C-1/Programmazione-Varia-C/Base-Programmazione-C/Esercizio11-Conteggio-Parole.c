/*Esercizio11: Programma per Contare le Parole:

-- Descrizione: Scrivi un programma che conti il numero di parole in una frase inserita dall'utente.

-- Requisiti:

1.Chiedi all'utente di inserire una frase.
2.Conta il numero di parole nella frase.
3.Stampa il conteggio delle parole.*/

#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];
    int count = 1;

    printf("Inserisci una frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(int i=0; i<strlen(frase); i++){
        if(frase[i] == ' ' && frase[i+1] != ' ' && frase[i+1] != '\0'){
            count++;
        }
    }

    printf("Il numero di parole nella frase è: %d\n", count);
    return 0;
}