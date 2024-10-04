/*Esercizio1_10: Scrivi un programma in C che:

Chieda all'utente di inserire un numero intero positivo.
Disegni un triangolo rettangolo fatto di asterischi, con il numero di righe uguale al numero inserito dall'utente.
Ogni riga del triangolo deve avere un asterisco in più rispetto alla precedente.*/

#include <stdio.h>

int main(){
    int altezza, i,j;

    printf("Inserisci l'altezza del triangolo: ");
    scanf("%d",&altezza);

    for(i=1; i<=altezza; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}