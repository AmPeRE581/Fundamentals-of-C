/*Esercizio31: Quadrati Perfetti: Si scriva un programma in linguaggio C per il calcolo dei quadrati perfetti per una sequenza
di numeri. Il programma deve prima leggere un numero inserito da tastiera, e quindi
stampare i primi quadrati perfetti sino al quadrato del numero.*/

#include<stdio.h>
#include<math.h>

int main(){
    int numero, i, quadrato;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    printf("I quadrati perfetti fino a %d sono:\n", numero*numero);

    for(i=1; i<=numero; i++){
        quadrato = i*i;
        printf("%d", quadrato);
    }

    printf("\n");

    return 0;
}