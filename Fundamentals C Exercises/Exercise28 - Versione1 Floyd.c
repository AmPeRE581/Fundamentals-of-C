/*Esercizio28: Versione1 Floyd*/

#include <stdio.h>

int main(){
    int N, i,j, num=1;

    /* -- Richiedere l'input da parte utente... -- */

    printf("Richiedi il numero di righe del triangolo di Floyd:");
    scanf("%d", &N);

    /* -- Stampa le prime righe -- */

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
                num++;
        }
    
    printf("\n");
    
    }

}