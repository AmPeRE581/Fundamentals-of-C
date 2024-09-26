/*Esercizio2_0: Leggere un numero in base 10 (max 8 cifre) e dire se è palindromo.*/

#include <stdio.h>
#include <math.h>
#define DIM 8

int main(){
    int n,base=10;
    int cifre[DIM];

    printf("Numero di max %d da verificare: ", DIM);
    scanf("%d",&n);

    int num=abs(n);
    int cifra, quante_cifre=0;

    while(num!=0){
        cifra=num%base;
        cifre[quante_cifre]=cifra;
        quante_cifre++;
        num=num/base;
    }

    int i;
    for(i=0; i<quante_cifre/2 && cifre[i]==cifre[quante_cifre-i-1]; i++){ /*Quello contenuto nel FOR (Se il numero è palindromo, ci saranno 'quante_cifre/2' confronti con esito positivo)*/
        if(i<quante_cifre/2){
            printf("Numero non palindromo");
        } else{
            printf("Numero Palindromo");
        }
    }
}