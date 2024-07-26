/*Scrivere un programma che legge un vettore v1 e verifica se il vettore è ordinato.
Utilizza una funzione "non void" nello specifico una funzione bool, che verifica le istruzioni e restituisce "true" o "false" a seconda dei casi...*/

#include<stdio.h>
#include<stdbool.h>

/*Funzione per verificare se il vettore è crescente*/

bool isSorted(int n, int v1[]){
    for(int i=0; i<n-1; i++){
        if(v1[i] > v1[i+1]){
            return false;
        }
    }

    return true;
}

int main(){
    int n;

    /*Lettura dimensione vettore*/

    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &n);

    int v1[n];

    /*Lettura elementi vettore*/
    printf("Inserisci gli elementi del vettore: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &v1[i]);
    }

    /*Verifica se il vettore è ordinato*/

    if(isSorted(n, v1)){
        printf("Il vettore è ordinato in ordine crescente.\n");
    } else {
        printf("Il vettore non è ordinato in ordine crescente.\n");
    }
}