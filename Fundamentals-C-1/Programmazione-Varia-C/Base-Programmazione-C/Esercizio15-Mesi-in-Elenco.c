/*Esercizio15: Stampa dei mesi
-- Dato un numero intero tra 1 e 12, che rappresenta il mese corrente, stampare il nome del
mese per esteso (“Gennaio” ... “Dicembre”).*/

#include <stdio.h>
int main(){
    int mese;

    printf("Inserisci un numero tra 1 e 12: ");
    scanf("%d", &mese);

    switch(mese){
        case1: printf("Gennaio\n");
        break;

        case2: printf("Febbraio\n");
        break;

        case3: printf("Marzo\n");
        break;

        case4: printf("Aprile\n");
        break;

        case5: printf("Maggio\n");
        break;

        case6: printf("Giugno\n");
        break;

        case7: printf("Luglio\n");
        break;

        case8: printf("Agosto\n");
        break;

        case9: printf("Settembre\n");
        break;

        case10: printf("Ottobre\n");
        break;

        case11: printf("Novembre\n");
        break;

        case12: printf("Dicembre\n");
        break;

        default: printf("Numero non valido...Devi inserire un numero fra 1 e 12...");
    }

    return 0;
}