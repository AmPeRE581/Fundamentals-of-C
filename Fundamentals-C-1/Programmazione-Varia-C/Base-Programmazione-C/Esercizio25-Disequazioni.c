/*Esercizio25: Disequazioni: Dato un numero reale positivo Y immesso da tastiera, si scriva un programma in linguaggio
C che determini qual è il massimo numero intero positivo X tale per cui sia valida la
relazione.*/

#include <stdio.h>
#include <math.h>

int main(){
    double Y;
    int X=0;

    /*Lettura del numero reale positivo Y*/
    printf("Inserisci un numero reale positivo Y: ");
    scanf("%lf", &Y);

    /*Trova il massimo numero intero positivo X tale che X^2 ≤ Y*/
    while((X+1)*(X+1) <= Y){
        X++;
    }

    printf("Il massimo numero intero positivo X tale che X^2 <= Y è: %d\n", X);

    return 0;
}