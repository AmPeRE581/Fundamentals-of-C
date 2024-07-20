/*ESERCIZIO 2
Scrivere un programma che riceve tre numeri interi e verifica se
rappresentano il perimetro di un quadrato*/

#include<stdio.h>

int main(){
    
    //***Definizione Parametri di interesse***
    int l1, l2, l3, l4;
    int perimetro_quadrato;

    //***Definizione primi valori da prelevare***

    printf("Inserisci il valore del primo lato:");
    scanf("%d", &l1);

    printf("Inserisci il valore del secondo lato:");
    scanf("%d", &l2);

    printf("Inserisci il valore del terzo lato:");
    scanf("%d", &l3);

    printf("Inserisci il valore del quarto lato:");
    scanf("%d", &l4);


    //***Logica da seguire per il calcolo dei lati del quadrato***

    perimetro_quadrato= (l1+l2+l3+l4)*4;

    printf("Il perimetro del quadrato descritto è: %d", perimetro_quadrato);
}