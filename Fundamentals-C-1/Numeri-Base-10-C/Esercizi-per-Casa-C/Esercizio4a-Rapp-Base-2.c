/*Esercizio 4a: Leggi un numero in base 10 e scrivi le cifre della sua rappresentazione in base 2*/

#include <stdio.h>

int main(){
    int num, resto;
    int binario[32]; /*Array per memorizzare le cifre binarie (32 Bit sufficienti per int)*/
    int i=0;

    printf("Inserisci un numero positivo: ");
    scanf("%d", &num);

    /*Controlla se il numero è negativo....*/
    if(num<0){
        printf("Il numero deve essere positivo.\n");
        return 1;
    }

    /*Conversione in binaria*/

    while(num>0){
        resto=num%2;
        binario[i]=resto;
        num/=2;
        i++;
    }

    /*Stampa il risultato al contrario (le cifre binarie sono state inserite al contrario nell'array)*/
    printf("La rappresentazione binaria è: ");
    for(int j=i-1; j>=0; j--){
        printf("%d", binario[j]);
    }

    printf("\n");

    return 0;
}