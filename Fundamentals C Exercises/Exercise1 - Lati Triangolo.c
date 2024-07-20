/*ESERCIZIO 1
Scrivere un programma che riceve tre numeri interi e verifica se
rappresentano i lati di un triangolo (perché un triangolo possa
essere tale la somma di ogni coppia lati deve essere maggiore
dell’altro).*/

#include<stdio.h>

int main(){
    
    //***Definizione Parametri di interesse***
    int l1, l2, l3;

    //***Definizione primi valori da prelevare***

    printf("Inserisci il valore del primo lato:");
    scanf("%d", &l1);

    printf("Inserisci il valore del secondo lato:");
    scanf("%d", &l2);

    printf("Inserisci il valore del terzo lato:");
    scanf("%d", &l3);


    //***Logica da seguire per il calcolo dei lati del triangolo***

    if(l1 < l2+l3){
        if(l2 < l1+l3){
            if(l3 < l1+l2){
                printf("Tutto il procedimento rappresenta un triangolo");
            } else {
                printf("Tutto il procedimento NON rappresenta un triangolo");
            }
            printf("Tutto il procedimento rappresenta un triangolo");
        } else {
            printf("Tutto il procedimento NON rappresenta un triangolo");
        }
        printf("Tutto il procedimento rappresenta un triangolo");
    } else {
        printf("Tutto il procedimento NON rappresenta un triangolo");
    }
}