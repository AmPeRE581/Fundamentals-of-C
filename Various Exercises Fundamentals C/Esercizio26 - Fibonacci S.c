/*Esercizio26: Scrivi un programma che chiede all'utente di inserire un numero intero positivo n 
e poi stampa i primi n numeri della sequenza di Fibonacci.*/

/*IT: In matematica, la successione di Fibonacci è una successione di numeri interi 
in cui ciascun numero è la somma dei due precedenti, eccetto i primi due che sono, per definizione 0/1...*/

/*ENG: In mathematics, the Fibonacci sequence is a sequence of integers
in which each number is the sum of the two previous ones, except the first two which are, by definition 0/1...*/

#include <stdio.h>

int main(){
    int n, t1=0, t2=1, prossimo_termine;

    printf("Inserisci il numero di termini:");
    scanf("%d", &n);

    printf("i primi %d termini della sequenza di Fibonacci sono:\n", n);

    for(int i=1; i<=n; ++i){
        printf("%d", t1);
        prossimo_termine = t1+t2;
        t1 = t2;
        t2 = prossimo_termine;
    }

    printf("\n");

    return 0;
}