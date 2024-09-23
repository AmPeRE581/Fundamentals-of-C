/*Esercizio0_2: Scrivere un programma che legge una sequenza di numeri interi terminata da un
valore negativo. Per ogni numero della sequenza, se questo è il primo, ne calcola il fattoriale.

A tal fine, utilizzare due funzioni fattoriale e primo completando il codice riportato di seguito.*/

#include <stdio.h>

//Funzione per calcolare il fattoriale...

int fattoriale(int n){
    if(n == 0){
        return 1;
    } else {
        return n * fattoriale(n - 1);
    }
}

int primo(int x){
    if(x <= 1){
        return 0;
    }

    for(int i = 2; i * i <=x; i++){
        if(x % i == 0){
            return 0; //Se è divisibile non è primo....
        }
    }

    return 1; //Se non si possiedono divisori è il primo...
}

int main(){
    int num, primo_trovato = 0;

    printf("Inserisci una sequenza di numeri interi (numero negativo per terminare): \n");
    scanf("%d", &num);

    while(num >= 0){
        if(primo_trovato == 0){
            printf("Il fattoriale di %d è:\n", num, fattoriale(num));
            primo_trovato = 1;
        } else {
            if(primo(num)){
                printf("%d è un numero primo. \n", num);
            }
        }

        scanf("%d", &num);
    }

    return 0;
}