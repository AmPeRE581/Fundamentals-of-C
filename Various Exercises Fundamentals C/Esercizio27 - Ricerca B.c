/*Esercizio27: Ricerca Binaria
Scrivi un programma che implementa l'algoritmo di ricerca binaria su un array ordinato. 
Il programma dovrebbe chiedere all'utente di inserire un numero da cercare e indicare se il numero è presente e in quale posizione.*/

#include<stdio.h>

int ricercaBinaria(int arr[], int sinistra, int destra, int x){
    while(sinistra <= destra){
        int medio= sinistra + (destra - sinistra) /2;

        if(arr[medio] == x){
            return medio;
        }

        if(arr[medio] < x){
            sinistra = medio +1;
        } else {
            destra = medio -1;
        }
    }

    return -1;
}

int main(){
    int arr[10], x, risultato;

    printf("Inserisci 10 numeri ordinati: \n");
    for(int i=0; i<10; i++){
        printf("numero %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Inserisci un numero da cercare: ");
    scanf("%d", &x);

    risultato = ricercaBinaria(arr, 0, 9, x);

    if(risultato != -1){
        printf("Numero %d trovati alla posizione %d\n", x, risultato);
    } else {
        printf("Numero %d non trovato nell'array\n", x);
    }

    return 0;
}