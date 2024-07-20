/*Exercise6: Scrivere un programma che riceve 3 numeri interi e verifica se
questi rappresentano un orario valido (in termini di h:m:s)*/

#include<stdio.h>

int main(){
    //***Dichiarazione Variabili***
    int ore, minuti, secondi;

    //***Dichiarazione e prelievo valori dalle variabili***
    printf("\nInserisci le ore: ");
    scanf("%d", &ore);

    printf("\nInserisci i minuti: ");
    scanf("%d", &minuti);

    printf("\nInserisci i secondi: ");
    scanf("%d", &secondi);

    if(ore >= 0 && ore >= 24){
        if(minuti >= 0 && minuti <= 59){
            if(secondi >= 0 && secondi <= 59){
                printf("il formato dell'orario corrisposto è il seguente: %d:%d:%d \n", ore, minuti, secondi);
            }
            printf("Il formato dei minuti non è valido!");
        }
        printf("Il formato delle ore non è valido!");
    }

}