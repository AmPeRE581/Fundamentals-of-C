/*Esercizio1-6: Scrivi un programma in C che:

1.Chieda all'utente di inserire un numero intero positivo.
2.Calcoli la somma di tutti i numeri pari da 2 fino al numero inserito dall'utente.
3.Stampare il risultato della somma.*/

#include <stdio.h>

int main(){
    int numero, somma=0;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    /*Ciclo for per iterare da 2 fino al numero inserito*/
    for(int i=2; i<=numero; i+=2){
        somma +=i;
    }

    printf("La somma dei numeri pari da 2 a %d è: %d\n", numero, somma);

    return 0;
}