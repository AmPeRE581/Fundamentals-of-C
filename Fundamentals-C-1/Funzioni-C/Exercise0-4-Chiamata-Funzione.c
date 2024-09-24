/*Esempio: Chiamata di una funzione nel main*/

#include <stdio.h>
#define DIM 6

void leggi(int x[], int n){
    int i;
    printf("Lettura dell'array...");

    for(i=0; i<n; i++){
        printf("Elemento del vettore: ");
        scanf("%d", &x[i]);
    }
}

int main(){
    int vet[DIM];
    int riempimento = 5;
    leggi(vet, riempimento);

    /*Qui le istruzioni per la scrittura dell'array*/

    printf("Fatto!\n");
}