/*Esercizio1-4: Scrivi un programma in C che:

1.Chieda all'utente di inserire un numero intero positivo.
2.Calcoli la somma di tutti i numeri interi da 1 fino al numero inserito dall'utente.
3.Stampi il risultato della somma.*/

#include <stdio.h>

int main(){
    int numero, somma=0;

    /*Si chiede al nuovo utente, se si vuole inserire un numero*/

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    /*Controlliamo se il numero è positivo*/

    if(numero <=0){
        printf("Il numero deve essere positivo.\n");

        return 1;
    }

    /*Calcoliamo la somma utilizzando un ciclo for*/
    for(int i=1; i<=numero; i++){
        somma +=i;
    }

    /*Stampiamo il risultato*/
    printf("La somma dei numeri da 1 %d è: %d\n", numero, somma);

    return 0;
}