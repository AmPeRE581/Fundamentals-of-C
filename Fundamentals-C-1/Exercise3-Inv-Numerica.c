/*Esercizio1_3: Leggere due numeri interi a e b ed invertirli (cioè, fare sì che a fine programma il contenuto di a
sia il precedente contenuto di b e viceversa). Esempio: se a=3 e b=102, scrivere le opportune istruzioni a=102 e b=3.*/

#include <stdio.h>

int main(){
    int a,b, temp;

    printf("Inserisci il numero (a): ");
    scanf("%d", &a);

    printf("Inserisci il numero (b): ");
    scanf("%d", &b);

    /*Scambio di valori*/

    temp=a;
    a=b;
    b=temp;

    printf("Dopo lo scambio, a=%d e b = %d\n", a, b);

    return 0;

}