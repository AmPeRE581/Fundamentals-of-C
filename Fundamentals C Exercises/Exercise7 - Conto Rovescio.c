/*Exercise7: Si vuole realizzare un'applicazione che permetta di mostrare
a schermo i numeri tipici di un conto alla rovescia, partendo
da un valore deciso dall'utente. Tale valore deciso dall'utente deve
essere maggiore di 0.*/

#include<stdio.h>

int main(){
    //***Definisco le variabili iniziali***
    
    int n;

    //***Leggo le prime variabili e quindi di seguito anche gli input***
    printf("Inserisci un numero in input: ");
    scanf("%d", &n);

    //***In questo caso, ragiono su come dovrebbe funzionare il codice***

    if(n>0){
        printf("\nOutput: ");
        for(int i=n; i>=0; i--){
            printf("%d", i);
        }
        printf("\n");
    }
    else {
        printf("Errore: il numero inserito è <=0");
    }
}