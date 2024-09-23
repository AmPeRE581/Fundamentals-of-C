/*Esercizio1_9: Funzione POW (per la potenza)*/

/*Nella funzione pow(n,e) riportiamo tra i parametri la variabile n che usiamo...
per immettere la base e la variabile e che usiamo per immettere l'esponente*/

#include <stdio.h>
#include <math.h>

int main(){
    int n,e,p;
    
    printf("Quale Base:?\n");
    scanf("%d", &n);
    
    printf("Quale Esponente:?\n");
    scanf("%d",&e);

    p= pow (n,e); //Funzione in questione

    printf("Il risultato e': %d\n",p);
}