/*Scrivere un programma in c che scrive una funzione che calcola e restituisce il fattoriale di un numeri intero n*/

#include <stdio.h>

int fattoriale(int n){
    int numero_fattoriale=1;
    int i; //I verrà utilizzato come contatore

    for(i=2; i<=n; i++){
        numero_fattoriale=numero_fattoriale*i;
    }

    return numero_fattoriale;
}