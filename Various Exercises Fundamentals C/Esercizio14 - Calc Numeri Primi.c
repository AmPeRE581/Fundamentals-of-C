/*Esercizio14: Calcolo di numeri primi
Scrivi un programma in C che trovi e stampi tutti i numeri primi compresi tra 1 e un numero n inserito dall'utente.

Specifiche:
Il programma deve richiedere all'utente di inserire un numero intero positivo n.
Il programma deve calcolare e stampare tutti i numeri primi compresi tra 1 e n.
Un numero primo è un numero intero maggiore di 1 che non ha divisori diversi da 1 e da sé stesso.*/

#include<stdio.h>

int numero_primo(int numero);

int main(){
    int n;

    /***Chiediamo all'utente di inserire il numero***/
    printf("Inserisci il numero--->");
    scanf("%d", &n);

    /***Dalla consegna risulta che i numeri non devono essere minori di 2 quindi andiamo a ricercarlo...***/
    if(n<2){
        printf("Non ci sono numeri minori di 2 secondo quanto tu abbia inserito...");

        return 0;
    }

    /***Adesso qui, stampiamo tutti i numeri che sono compresi fra 1 e n e in questo caso, quindi che sono numeri primi***/

    for(int i = 2; i<=n; i++){
        if(numero_primo(i)) {
            printf("%d", i);    
        }
    }
    printf("\n");

    return 0;
} 

        /***Qui si completa la funzione sopra...quella che consente principalmente di effettuare il calcolo dei numeri primi***/
    int numero_primo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

