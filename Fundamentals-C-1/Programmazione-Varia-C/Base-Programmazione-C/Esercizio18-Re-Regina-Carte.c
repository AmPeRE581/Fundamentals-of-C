/*Esercizio18: Re e Regina 

Su una scacchiera 8x8 sono posizionati due pezzi: il Re bianco e la Regina nera.
Si scriva un programma in linguaggio C che, acquisite le posizioni del Re e della Regina,
determini se la Regina è in posizione tale da poter mangiare il Re. Le posizioni dei due pezzi
sono identificate da mediante la riga e la colonna su cui si trovano, espresse come numeri
interi tra 1 e 8.*/

#include <stdio.h>
#include <stdlib.h>

/*Funzione che controlla se la Regina può mangiare il Re*/
int puoMangiareRe(int reRiga, int reColonna, int reginaRiga, int reginaColonna){
    /*La regina può muoversi orizzontalmente, verticalmente o diagonalmente*/
    if(reRiga == reginaRiga || reColonna == reginaColonna || abs(reRiga - reginaRiga) == abs(reginaColonna - reginaColonna)){
        return 1;
    }

    return 0;
}

int main(){
    int reRiga, reColonna, reginaRiga, reginaColonna;

    /*Lettura delle posizioni del Re*/
    printf("Inserisci la posizione del Re(riga e colonna tra 1 e 8): ");
    scanf("%d %d", &reRiga, &reColonna);

    /*Lettura delle posizioni della Regina*/
    printf("Inserisci la posizione della Regina(riga e colonna tra 1 e 8):");
    scanf("%d %d", &reginaRiga, &reginaColonna);

    /*Controllo se la regina può mangiare il Re*/
    if(puoMangiareRe(reRiga, reColonna, reginaRiga, reginaColonna)){
        printf("La Regina può mangiare il Re.\n");
    } else {
        printf("La Regina non può mangiare il Re.\n");
    }

    return 0;
}