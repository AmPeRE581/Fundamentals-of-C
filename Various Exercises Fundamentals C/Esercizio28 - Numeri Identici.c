/*Esercizio28: Scrivi un programma che identifica i numeri identici*/

#include<stdio.h>

int main(){

    int num1, num2;

    printf("Inserisci il primo numeretto: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numeretto: ");
    scanf("%d", &num2);

    while(num1 != num2){
        num1=num2;

        printf("Inserisci il numero: ");
        scanf("%d" &num2);

        printf("I numeri %d e %d inseriti sono identici.....");
    }

}