/*Esercizio24: Scrivi un programma che chiede all'utente di inserire tre numeri interi e determina il maggiore tra di essi.*/

#include<stdio.h>

int main(){

    int num1, num2, num3;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    printf("Inserisci il terzo numero: ");
    scanf("%d", &num3);

    if(num1 >= num2 && num3 >= num1){
        printf("Il maggiore dei numeri inseriti è: %d\n", num1);
    } else if(num2 >= num1 && num2 >= num3){
        printf("Il maggiore dei numeri inseriti è: %d\n", num2);
    } else{
        printf("Il maggiore dei numeri inseriti è: %d\n", num3);
    }
}