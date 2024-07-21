/*Exercise8: Creare un'applicazione in grado di mostrare la
tabellina di un numero scelto dall'utente
partendo dal numero moltiplicato per zero fino
al numero moltiplicato per 10.*/

#include<stdio.h>

int main(){

    //***Definisco le variabili iniziali***
    int n, prodotto;

    //***Leggo le prime variabili e quindi di seguito anche gli input***
    printf("Inserisci il numero di input: ");
    scanf("%d", &n);


    //***In questo caso, ragiono su come dovrebbe funzionare il codice***
    printf("\nOutput: ");
    for(int i=0; i<=10; i++){
        prodotto = n*i;
        printf("%d", prodotto);
    }
    printf("\n");
}
