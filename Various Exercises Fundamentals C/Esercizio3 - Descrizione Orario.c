/*Esercizio3: Scrivere un programma, che riceve 3 numeri interi e verifica se questi rappresentano un orario valido*/

#include <stdio.h>

int main(){
    
    int ore;
    int minuti;


    printf("Inserisci le ore: ");
    scanf("%d", &ore);

    printf("Inserisci i minuti: ");
    scanf("%d", &minuti);

    if(ore >= 0 && ore <24){
        if(minuti >= 0 && minuti <59){
            printf("\nQuesti rappresentano le ore e i minuti di un orologio italiano...");
        } else {
            printf("\nQuesti non rappresentano un orologio italiano");
        }
        printf("\nQuesti rappresentano le ore e i minuti di un orologio");
    } else {
        printf("\nQuesti non rappresentano un orologio italiano");
    }
}
