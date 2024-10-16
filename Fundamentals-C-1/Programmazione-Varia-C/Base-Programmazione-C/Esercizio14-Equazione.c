/*Esercizio14: Data l’equazione
(-- ax + b = 0 -- ) con a e b inseriti da tastiera, scrivere un programma in linguaggio C per determinare il valore di x, se esiste, che risolve l’equazione.*/

#include <stdio.h>

int main(){
    float A,B,X;

    printf("Inserisci il valore di A: ");
    scanf("%f", &A);

    printf("Inserisci il valore di B: ");
    scanf("%f", &B);

    if(A != 0){
        X = -b / a;
        printf("La soluzione dell'equazione è x = &.2f\n", x);
    } else {
        if(b==0){
            printf("L'equazione ha infinite soluzioni.\n");
        } else {
            printf("L'equazione non ha soluzioni.\n");
        }
    }

    return 0;
}