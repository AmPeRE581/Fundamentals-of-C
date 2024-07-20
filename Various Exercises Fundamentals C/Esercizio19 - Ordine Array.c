/*Esercizio19: Ordinamento di un Array
Scrivi un programma in linguaggio C che faccia quanto segue:

- Chieda all'utente di inserire il numero di elementi di un array.
- Chieda all'utente di inserire gli elementi dell'array.
- Ordini l'array in ordine crescente utilizzando l'algoritmo di ordinamento a scelta.
- Visualizzi l'array ordinato.

Requisiti
- Utilizza un array per memorizzare i numeri.
- Utilizza l'algoritmo di ordinamento a scelta (Selection Sort).
- Visualizza l'array ordinato.*/

#include<stdio.h>

void selectionSort(int array[], int size){
    for(int i =0; i< size - 1; i++){
        int minIndex = i;

    for(int j =i+1; j<size; j++){
        if(array[j] < array[minIndex]){
            minIndex = j;
        }
    }

    int temp = array[minIndex];
    array[minIndex] = array[i];
    array[i] = temp;
    }
}

int main(){
    int n;
    
    printf("Inserisci il numero di elementi: ");
    scanf("%d", &n);

    if(n<=0){
        printf("Il numero di elementi deve essere maggior edi zero.\n");
        return 1;
    }

    int array[n];

    for(int i=0; i<n; i++){
        printf("Inserisci l'elemento %d: ", i+1);
        scanf("%d", &array[i]);
    }

    selectionSort(array, n);

    printf("L'array ordinato è: ");
    for(int i=0; i<n; i++){
        printf("%d", array[i]);
    }

    printf("\n");

    return 0;
}
