/*Esercizio35: Si scriva un programma in linguaggio C che acquisisca un numero intero positivo N da
tastiera e stampi il valore del fattoriale di N.
Suggerimento. Si ricorda che il fattoriale di un numero è il prodotto di tutti i numeri
compresi tra 1 ed N.
N! = 1 * 2 * 3 * : : : * (N - 1) * N
Inoltre 0! = 1.*/

#include <stdio.h>

int main(){
    int N, fattoriale=1;

    printf("Inserisci un numero intero positivo:");
    scanf("%d, &N");

    /*Controlliamo se il numero è negativo*/
    if(N<0){
        printf("Il fattoriale non è definito per numeri negativi.\n");
    } else {
        /*Calcoliamo il fattoriale*/
        for(int i=1; i<=N; i++){
            fattoriale *=i;
        }
        printf("Il fattoriale di %d è: %d\n", N, fattoriale);
    }
    return 0;
}