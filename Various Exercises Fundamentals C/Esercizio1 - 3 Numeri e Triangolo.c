//Esercizio1: Scrivere un programma che legge 3 numeri interi e verifica se quei 3 numeri rappresentano i lati di un triangolo...

#include <stdio.h>

int main(){
    int l1,l2,l3;
    int lati_triangolo;
    int i;

    int somma_lati;

    printf("Quanti lati vuoi che legga?");
    scanf("%d", &lati_triangolo);

    if(lati_triangolo!=3){
        printf("I lati inseriti, non rappresentano quelli di un triangolo");

        return 0;

    } else {

        printf("Valore di L1: ");
        scanf("%d", &l1);

        printf("Valore di L2: ");
        scanf("%d", &l2);

        printf("Valore di L3: ");
        scanf("%d", &l3);

    }

    if(l1<l2+l3 || l2<l1+l3 || l3<l2+l1){
        printf("E' un triangolo...");
    }

    }
