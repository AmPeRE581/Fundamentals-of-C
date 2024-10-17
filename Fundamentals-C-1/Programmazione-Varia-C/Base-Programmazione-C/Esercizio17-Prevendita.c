/*Esercizio17: Prevendita biglietti
Il servizio di rivendita di biglietti percepisce una provvigione sul prezzo del biglietto. La
provvigione è pari al 15% del prezzo del biglietto, ma in ogni caso è pari ad almeno 5 C.
Scrivere un programma che, dato il prezzo di un biglietto, calcoli e stampi:
• il valore della provvigione
• il prezzo finale del biglietto*/

#include <stdio.h>

int main(){
    float prezzo_biglietto, provvigione, prezzo_finale;

    /*Lettura del prezzo del biglietto*/
    printf("Inserisci il prezzo del biglietto: ");
    scanf("%f", &prezzo_biglietto);

    /*Calcolo della provvigione*/
    provvigione = prezzo_biglietto * 0.15;
    if(provvigione < 5){
        provvigione = 5;
    }

    /*calcolo del prezzo finale*/
    prezzo_finale = prezzo_biglietto + provvigione;

    /*Stampa dei risultati*/

    printf("Il valore della provvigione è: %.2f\n", provvigione);
    printf("Il prezzo finale del biglietto è: %.2f\n", prezzo_finale);

    return 0;
}