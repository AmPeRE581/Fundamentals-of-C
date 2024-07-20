/*Esercizio25: Scrivi una funzione che calcola la potenza di un numero. 
La funzione dovrebbe prendere due argomenti: la base e l'esponente.*/

#include<stdio.h>

double potenza(double base, int esponente){
    double risultato = 1.0;
    for(int i=0; i<esponente; i++){
        risultato *= base;
    }
    return risultato; 
}

int main(){
    double base; 
    int esponente;

    printf("Inserisci la base: ");
    scanf("%lf", &base);

    printf("Inserisci l'esponente: ");
    scanf("%d", &esponente);

    printf("%.2lf elevato alla potenza di %d è %.2lf\n", base, esponente, potenza(base, esponente));

    return 0;
}