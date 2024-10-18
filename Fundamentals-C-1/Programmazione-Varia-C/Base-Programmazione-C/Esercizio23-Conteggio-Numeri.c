/*Esercizio23: Un utente inserisce da tastiera una serie di numeri interi positivi, ed il termine della serie
è indicato dall’inserimento del valore -1. Il programma, al termine dell’inserimento, deve
stampare quanti numeri pari l’utente aveva inserito, e quanti numeri in totale sono stati
inseriti.
Esempio:
Inserisci un numero: 5
Inserisci un numero: 3
Inserisci un numero: 6
Inserisci un numero: 5
Inserisci un numero: 2
Inserisci un numero: 5
Inserisci un numero: 7
Inserisci un numero: 7
Inserisci un numero: -1
Numeri totali inseriti: 8
Numeri pari inseriti: 2*/

#include <stdio.h>

int main(){
    int num, countPari =0; countTotale =0;

    while(1){
        scanf("%d", &num);
        if(num==-1){
            break;
        }

        countTotale++;
        if(num%2==0){
            countPari++;
        }
    }

    printf("Numeri totali inseriti: %d\n", countTotale);
    printf("Numeri pari inseriti: %d\n", countPari);

    return 0;
}
