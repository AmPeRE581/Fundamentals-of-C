/*Esercizio1_2: Leggere due numeri interi x e y (si assume siano diversi da zero):
stampare il messaggio 'numeri di segno concorde' se x e y hanno lo stesso segno.
Esempio: se x=3 e y=9 il programma stampa 'numeri di segno concorde' e termina; se x=2 e y=-7 il programma termina direttamente.*/

#include <stdio.h>

int main(){
    int x,y;

    printf("Dammi il valore di (x): ");
    scanf("%d", &x);

    printf("Dammi il valore di (y): ");
    scanf("%d", &y);

    if((x > 0 && y > 0) || (x < 0 && y < 0)){
        printf("Numeri sono di segno concorde...");
    }

    return 0;
}