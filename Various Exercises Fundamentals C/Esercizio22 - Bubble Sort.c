/*Esercizio22: Scrivi un programma in cche ordini un array di numeri interi utilizzando l'algoritmo di ordinamento a bolle.*/

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Scambio degli elementi
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Array originale: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Array ordinato: ");
    printArray(arr, n);

    return 0;
}