/*Esercizio8: Segno del numero

Si realizzi un programma in linguaggio C che acquisisca da tastiera un numero e stampi
un messaggio che indichi se tale numero sia positivo oppure negativo.*/

#include <stdio.h>

int main(){
    int numero;

    printf("Inserisci il numero: ");
    scanf("%d", &numero);

    if(numero >0){
        printf("Il numero è positivo...\n");
    } else if(numero <0){
        printf("Il numero è negativo...\n");
    } else {
        printf("Il numero è zero...\n");
    }
}

