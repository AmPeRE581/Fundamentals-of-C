/*Esercizio4_2: Scrivere un programma che risolve l'equazione "ax+b=0", con a e b numeri interi diversi da zero e inseriti dall'utente*/

#include <stdio.h>

int main(){
    int a,b;
    float x;

    printf("Digita (a): ");
    scanf("%d", &a);
    printf("Digita (b): ");
    scanf("%d", &b);

    x=b/a;
    printf("Risultato: %f",x);
}
/*--------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){
    int a, b;

    float x;

    printf("Digita (a): ");
    scanf("%d", &a);
    printf("Digita (b): ");
    scanf("%d", &b);

    x=(float)-b/a;

    printf("Risultato: %f", x);
}