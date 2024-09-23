/*Esercizio1_9: Funzione SQRT (per la radice quadrata)*/

/*In maniera analoga, nella funzione sqrt(n) riportiamo tra parentesi il numero di cui
vogliamo trovare la radice quadrata.*/

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float r;

    printf("Immetti il numero:\n");
    scanf("%d", &n);

    r=sqrt(n);
    printf("Il risultato e': %f\n", r);
}