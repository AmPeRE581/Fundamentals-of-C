/*Esercizio7: L'utente deve costruire un programma che calcoli il fattoriale di un numero intero che puoi inserire a tua scelta...

il fattoriale di un numero è il prodotto di tutti i numeri interi dall'inizio fino a quel numero...*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;

    printf("Inserisci il numero di cui devo fare il fattoriale:");
    scanf("%d", &numero);
    
    
    /*Inizialliziamo il fattoriale*/

    int fattoriale=1;

    if(numero > 0){

        int i=numero;
        while(i!=0){
            
            fattoriale = fattoriale*i;

            i = i-1;
        }
    }

    printf("Fattoriale: %d \n", fattoriale);

    return 0;
}
