/*Esercizio4_2: Scrivere un programma che calcola e scrive la somma dei numeri di una sequenza terminata da un valore negativo...*/
/*--------------------------------------------------------------------------------------------------------------------------------*/
/*(Utilizzo del costrutto WHILE)*/

#include <stdio.h>

int main(){
    
    int letto;
    int somma;
    somma=0;

    scanf("%d", &letto);

    while(letto >=0){
        somma=somma+letto;
        scanf("%d", &letto);
    }

    printf("%d", somma);
}