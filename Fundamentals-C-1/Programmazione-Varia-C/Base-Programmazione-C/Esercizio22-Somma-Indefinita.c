/*Esercizio22: Si scriva un programma in linguaggio C per calcolare la somma di un insieme di numeri
inseriti da tastiera. Il programma deve:
• leggere una sequenza di numeri
• fermarsi non appena viene inserito il numero 0
• visualizzare il valore corrispondente alla somma dei valori introdotti.*/

#include <stdio.h>

int main(){
    int num, somma=0;

    printf("Inserisci i numeri (termina con 0):\n");

    /*Lettura dei numeri e calcolo della somma*/
    while(1){
        scanf("%d", &num);
        if(num==0){
            break;
        }
        somma +=num;
    }

    /*Stampa della somma*/

    printf("La somma dei numeri inseriti è: %d\n", somma);

    return 0;
}