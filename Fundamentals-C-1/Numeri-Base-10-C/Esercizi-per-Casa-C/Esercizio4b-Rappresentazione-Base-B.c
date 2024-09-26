/*Esercizio4b: Leggi un numero in base 10 e scrivi le cifre della sua rappresentazione in una base b tale che 1<b<=16*/

#include <stdio.h>
#include <math.h>

void convertiBase(int num, int base){
    /*Controlli per assicurarsi che la base sia valida*/
    if(base<2 || base >16){
        printf("La base deve essere compresa tra 2 e 16.\n");
        return;
    }

    /*Array per memorizzare le cifre della rappresentazione nella nuova base*/
    char cifre[32]; /*Dimensioni sufficienti per un intero a 32 bit*/
    int i=0;

    /*Conversione*/
    while(num>0){
        int resto=num%base;
        cifre[i] = (resto <=9) ? resto + '0' : resto -10+'A';
        num /=base;
        i++;
    }

    /*Stampa del risultato al contrario*/
    printf("La rappresentazione in base %d è: ",base);
    for(int j=i-1; j>=0; j--){
        printf("%c", cifre[j]);
    }

    printf("\n");
}

int main(){
    int num, base;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &num);

    printf("Inserisci la base di conversione (tra 2 e 16):");
    scanf("%d",&base);

    convertiBase(num, base);

    return 0;
}