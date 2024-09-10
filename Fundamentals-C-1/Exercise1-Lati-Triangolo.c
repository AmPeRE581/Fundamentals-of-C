/*Esercizio1_1: Leggere tre numeri interi l1, l2 ed l3 che rappresentano i lati di un triangolo, calcolare e scrivere il perimetro.
Esempio: Se l1=3, l2=7, l3=1, il programma stampa 'perimetro=11'*/

#include<stdio.h>

int main(){
    int l1, l2, l3;
    int perimetro_triangolo;

    printf("Dammi il valore di L1: ");
    scanf("%d", &l1);

    printf("Dammi il valore di L2: ");
    scanf("%d", &l2);

    printf("Dammi il valore di L3: ");
    scanf("%d", &l3);

    perimetro_triangolo = l1+l2+l3;

    printf("Il risultato del perimetro del triangolo è: %d", &perimetro_triangolo);
}