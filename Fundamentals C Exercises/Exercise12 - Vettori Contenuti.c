/*Exercise12: Scrivere un programma che legge un vettore di interi di
dimensione 10, un intero x e verifica se x è contenuto nel vettore
(e, se si, quante volte)*/

#include<stdio.h>

int main(){
    int x;
    int i=0;
    int cont=0; 
    int vett1[10];

    for(i=0; i<10; i++){
        printf("\nInserisci l'elemento in posizione %d del vettore: ",i);
        scanf("%d", &vett1[i]);
    }

    printf("\nInserisci valore intero x: ");
    scanf("%d",&x);

    for(i=0; i<10; i++){
        if(vett1[i] == x){
            cont++;
        }
    }

    printf("\nL'elemento %d è contenuto nel vettore %d volte\n", x, cont);
}