/*Scrivere un programma in c che scrive una funzione che calcola e restituisce il fattoriale di un numeri intero n*/ 
/*Versione 1.0*/

#include <stdio.h>

int fattoriale(int n){
    int numero_fattoriale=1;
    int i; //I verrà utilizzato come contatore

    for(i=2; i<=n; i++){
        numero_fattoriale=numero_fattoriale*i;
    }

    return numero_fattoriale;
}

int main(){
    int fatt=fattoriale(n);

    printf("Il fattoriale di n risulta essere: %d\n", fatt);
}