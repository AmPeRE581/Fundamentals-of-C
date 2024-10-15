/*Esercizio5: Si scriva un programma in linguaggio C che legga un valore intero e visualizzi il valore
intero precedente e il successivo.*/

#include <stdio.h>

int main(){
    int numero;

    printf("Inserisci un numero:");
    scanf("%d", &numero);

    /*Da qui comincia la logica del numero inverso...*/

    printf("Il numero precedente a quello inserito è: %d\n", numero -1);
    printf("Il numero successivo a quello inserito è: %d\n", numero +1);
}

