/*Esercizio1_0: Scrivere un programma che registra i numeri primi, e ne svolge e ne applica le varie operazioni.*/

#include <stdio.h>
#include <math.h>

int main(){
    int n,i,j, è_numero_primo;

    /*DA RICORDARE: I numeri primi sono unicamente positivi, quindi privi di negatività.*/
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);

    printf("I numeri primi da 2 a %d sono: \n", n);

    for(i=2; i<=n; i++){
        è_numero_primo = 1; /*Si presume che inizialmente il numero sia primo...*/

        for(j=2; j<=sqrt(i); ++j){
            if(i%j == 0){
                è_numero_primo = 0; /*'i' è divisibile per j, quindi non è primo...*/
                break;
            }
        }

        if(è_numero_primo){
            printf("%d",i);
        }
    }

    printf("\n");

    return 0;
}