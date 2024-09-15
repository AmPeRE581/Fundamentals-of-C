/*Esercizio4_1: Scrivere un programma che calcola e scrive la somma dei numeri da 0 a 10...*/

/*(Utilizzo del costrutto FOR)*/

#include <stdio.h>

int main(){
int somma;
int i;
somma=0;

for(i=0; i<=10; i++){
    somma=somma+i;
}

printf("La somma dei numeri da 0 a 10: %d", somma);
}

/*----------------------------------------------------------------------------------------------------*/

/*(Utilizzo del costrutto WHILE)*/

#include <stdio.h>

int main(){
    int i;
    somma=0;
    i=0; /*Questo perchè appunto siamo nel costrutto WHILE*/

    while(i<=10){
        somma=somma+i;
        i++;
    }

    printf("La somma dei numeri da 0 a 10: %d", somma);
}