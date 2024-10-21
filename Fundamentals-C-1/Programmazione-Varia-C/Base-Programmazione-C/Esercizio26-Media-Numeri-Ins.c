/*Esercizio26: Si scriva un programma in linguaggio C per calcolare la media aritmetica di una serie
di numeri inseriti da tastiera. L’introduzione di un valore particolare pari a “0” indica il
termine del caricamento dei dati.*/

#include <stdio.h>

int main(){
    int num, count = 0;
    double somma=0.0;

    printf("Inserisci numeri (termina con 0): \n");
    while(1){
        scanf("%d", &num);
        if(num==0){
            break;
        }

        somma += num;
        count++;
    }

    if(count !=0){
        printf("La media aritmetica è: %.2f\n", somma/count);
    } else {
        printf("Nessun numero è stato inserito.\n");
    }

    return 0;
}