/*Esercizio1_10_1: Scrivi un programma in C che:

Chieda all'utente di inserire un numero intero positivo.
Disegni un Quadrato/Rettangolo fatto di asterischi, con il numero di righe uguale al numero inserito dall'utente.
Ogni riga del Quadrato/Rettangolo deve avere un asterisco in più rispetto alla precedente.*/

#include <stdio.h>

int main(){
    int base, altezza, i,j;

    printf("Inserisci la base del rettangolo: ");
    scanf("%d", &base);

    printf("Inserisci la base del quadrato: ");
    scanf("%d", &altezza);

    for(i=1; i<=altezza; i++){
        for(j=1; j<=base; j++){
            printf("*");
        }
        printf("*");
    }

    return 0;
}

