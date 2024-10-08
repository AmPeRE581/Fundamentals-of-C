/*Esercizio4: Esempio4: Scrivi un programma in C che:

1.Chieda all'utente di inserire una frase.
2.Conti il numero di vocali presenti nella frase.
3.Stampa il numero di vocali trovate.
4.Sostituisca tutte le vocali con un asterisco (*) e stampi la nuova frase.*/

#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];
    int i, contatore_vocali=0;

    printf("Inserisci una frase: ");
    fgets(frase, 100, stdin);

    /*Rimuovere il carattere di nuova linea se presente...*/
    frase[strcspn(frase, "\n")] = 0;

    /*Conta le vocali e sostituiscile con '*' */

    for(i=0; frase[i] != '\0'; i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' ||frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            contatore_vocali++;

            frase[i] = '*';
        }
    }

    printf("Numero di vocali: %d\n", contatore_vocali);
    printf("Frase Modificata: %s\n", frase);

    return 0;
}