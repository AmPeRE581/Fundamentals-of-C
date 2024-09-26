/*Esercizio1_0: Leggi un numero in base 10 e scrivi le sue cifre dall'ultima alla prima.*/

#include <stdio.h>
#include <math.h>

int main(){
    int n, num, cifra;

    printf("Numero da usare: ");
    scanf("%d", &n);

    num=abs(n);

    while(num !=0){
        cifra=num%10;
        printf("%d", cifra);
        num=num/10;
    }
}