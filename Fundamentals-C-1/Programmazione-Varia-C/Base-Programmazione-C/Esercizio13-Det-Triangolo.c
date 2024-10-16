/*Esercizio13: Si scriva un programma in linguaggio C che legga da tastiera i valori delle lunghezze dei
tre lati di un triangolo (detti A, B e C), e determini:
• se il triangolo è equilatero
• se il triangolo è isoscele
• se il triangolo è scaleno
• se il triangolo è rettangolo.*/

#include <stdio.h>
#include <math.h>

int main(){
    float A,B,C;

    /*Lettura dei lati del triangolo*/

    printf("Inserisci la lunghezza del lato A: ");
    scanf("%f", &A);
    printf("Inserisci la lunghezza del lato B: ");
    scanf("%f", &B);
    printf("Inserisci la lunghezza del lato C: ");
    scanf("%f", &C);

    /*Determinazione del tipo di triangolo*/
    if(A == B && B == C){
        printf("Il triangolo è equilatero.\n");
    } else if (A == B || B == C || A == C){
        printf("Il triangolo è isoscele.\n");
    } else {
        printf("Il triangolo è scaleno.\n");
    }

    /*Determinazione se il triangolo è rettangolo*/
    if((A*A + B*B == C*C) || (A*A + C*C == B*B) || (B*B + C*C == A*A)){
        printf("Il triangolo è rettangolo.\n");
    } else{
        printf("Il triangolo non è rettangolo.\n");
    }
}