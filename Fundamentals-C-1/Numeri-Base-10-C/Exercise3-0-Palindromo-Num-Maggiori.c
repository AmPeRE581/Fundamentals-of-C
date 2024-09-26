/*Esercizio3_0: Leggere un numero in base 10 e, se palindromo, stampare la cifra maggiore.
Utilizzare una funzione 'max_palindromo' che riceve un vettori di interi, il suo riempimento e restituisce il massimo dei valori in esso contenuti.*/

#include <stdio.h>
#include <math.h>
#define DIM 8

int max_palindromo(int m[], int n){
    int cifra_max=m[0];
    int i;
    for(i=1; i<n; i++){
        if(m[i]>cifra_max){
            cifra_max=m[i];
        }

        return cifra_max;
    }
}

/*Se volessi la posizione del vettore in cui si trova il primo possibile.*/

int max_pos_palindromo(int m[], int n){
    int pos_cifra_max=0; 
    int i;
    for(i=1; i<n; )
}

int main(){
    int n, base=10;
    int cifre[DIM];
    printf("Numero di %d cifre da verificare: ", DIM);
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
    for(i=0; i<quante_cifre/2 && cifre[i] == cifre[quante_cifre-i-1]; i++){
        if(i<quante_cifre/2){
            printf("Numero non palindromo");
        }
    } else {
        int max=max_palindromo(cifre, quante_cifre);
        printf("Numero palindromo e cifra maggiore risulta %d", max);
    }
}