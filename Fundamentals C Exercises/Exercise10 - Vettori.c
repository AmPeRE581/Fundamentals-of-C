/*Exercise10: Si dichiarino due variabili: un vettore VET1 di numeri interi, di
dimensione 7, ed un intero k. Gli elementi del vettore e k siano
inseriti da tastiera dall’utente. Scrivere un programma che
moltiplica tutti gli elementi del vettore per k e stampa il nuovo
contenuto di VET1.*/

#include<stdio.h>

int main(){
    
    int k;
    int i=0; 
    int vet1[7];

    printf("\nInserisci valore intero k: ");
    scanf("%d", &k);

    for(i=0; i<7; i++){
        printf("\nInserisci l'elemento in posizione %d del vettore: ",i);
        scanf("%d", &vet1[i]);
    }

    for(i=0; i<7; i++){
        vet1[i] = vet1[i]*k;
    }

    printf("\nNuovo contenuto del vettore: [");
    for(i=0; i<7; i++){
        printf("%d", vet1[i]);
    }
    printf("]\n");
}
