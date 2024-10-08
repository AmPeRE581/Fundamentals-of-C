/*Esercizio7: Esempio7: Scrivi un programma in C che:

1.Chieda all'utente di inserire una frase.
2.Chieda all'utente di inserire un numero intero positivo (chiave di cifratura).
3.Cifri la frase utilizzando la cifra di Cesare. La cifra di Cesare è un semplice metodo di cifratura per sostituzione in cui ogni lettera dell'alfabeto viene sostituita da una lettera che si trova un certo numero di posizioni più avanti nell'alfabeto.
 - Stampa la frase cifrata.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[100], alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
    int chiave, i, indice;

    printf("Inserisci una frase: ");
    fgets(frase, 100, stdin);

    printf("Inserisci la chiave di cifratura (numero intero positivo): ");
    scanf("%d", &chiave);

    for(i=0; frase[i] != '\0'; i++){
        if(isalpha(frase[i])){
            indice=tolower(frase[i]) - 'a';
            indice=(indice+chiave)%26;
            frase[i]=alfabeto[indice];
        }
    }

    printf("La frase cifrata è: %s\n", frase);

    return 0;
}