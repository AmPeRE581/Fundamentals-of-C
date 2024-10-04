/*Esercizio1-9: Scrivi un programma in C che:

Chieda all'utente di inserire una frase.
Conti quante volte compare una determinata lettera nella frase.
Stampi il risultato a schermo.*/

#include <stdio.h>
#include <string.h>

int main(){
    char frase[100], lettera;
    int i, contatore=0;

    printf("Inserisci una frase: ");
    fgets(frase, 100, stdin);

    printf("Inserisci la lettera da cercare: ");
    scanf("%c", &lettera);

    for(i=0; frase[i] != '\0'; ++i){
        if(frase[i] == lettera){
            contatore++;
        }
    }

    printf("La lettera '%c' compare %d volte.\n", lettera, contatore);

    return 0;
}