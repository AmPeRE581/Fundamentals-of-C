/*Esercizio16: Esempio16: Gestione Array

1. Ordina un array di numeri in ordine crescente e decrescente
2. Cerca un elemento all'interno di un array
3. Calcola la media dei valori di un array*/

#include <stdio.h>
#include <stdlib.h>

/*Funzione utile -- iniziale per ordinare l'array.*/

void ordinaArray(int arr[], int n, int crescente){
    for(int i=0; i < n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if((crescente && arr[j] > arr[j+1]) || (!crescente && arr[j] < arr[j+1])){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/*Funzione utile -- cercare un elemento all'interno di un array*/

int cercaElemento(int arr[], int n, int elemento){
    for(int i=0; i<n; i++){
        if(arr[i] == elemento){
            return 1; /*L'elemento quando viene ritrovato, risulterà 1, altrimenti risulterà 0*/
        }
    }

    return -1; /*In questo caso, si riporta negativo poichè non trovato*/
}

/*Funzione utile -- Calcolare la media dei valori di un array*/

double calcolaMedia(int arr[], int n){
    int somma=0;
    for(int i=0; i<n; i++){
        somma+=arr[i];
    }

    return (double)somma/n;
}

int main(){
    int arr[]={12, 45, 2, 33, 67, 22};
    int n= sizeof(arr)/sizeof(arr[0]);

    /*Ordine array in maniera crescente -- */

    ordinaArray(arr, n, 1);
    printf("Array ordinato in ordine crescente: ");
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }

    printf("\n");

    /*Ricerca di elementi all'interno dell'array*/

    int elemento =33;
    int indice=cercaElemento(arr, n, elemento);
    if(indice != -1){
        printf("L'elemento %d trovato all'indice %d\n", elemento, indice);
    } else {
        printf("L'elemento %d non trovato\n", elemento);
    }

    /*Calcola la media degli array che si possiedono al momento*/
    double media = calcolaMedia(arr, n);
    printf("Media dei valori nell'array: %.2f\n", media);

    return 0;
}