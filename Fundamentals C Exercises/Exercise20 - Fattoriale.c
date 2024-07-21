/*Exercise20: Scrivere un programma che legge una sequenza di interi positivi terminata
dal valore 0. Per ogni elemento della sequenza minore di 5 viene calcolato e
stampato il suo fattoriale altrimenti (se cioè l'elemento è maggiore di 4) il
suo triplo: le operazioni di calcolo del fattoriale/triplo e la successive stampa
del risultato vanno delegato ad una funzione void calcolo opportunamente
definita.
Esempio: se la sequenza è 7 80 3 4 0 l'output atteso è 21 240 6 24.*/

#include<stdio.h>

void calcolo(int n){
    int risultato;

    if(n<5){
        risultato = 1;
        for(int i=1; i<=n; i++){
            risultato=risultato * i;
        }
    } else {
        risultato = (n * 3);
    }

    printf("Il risultato per %d è: %d\n", n, risultato);
}

int main(){
    int n;

    printf("Inserisci un intero positivo (0 per terminare): ");
    scanf("%d", &n);

    while(n != 0){
        if(n>0){
            calcolo(n);
        }
        else {
            printf("Errore: n deve essere maggiore di 0");
        }
        printf("Inserisci un intero positivo (0 per terminare):");
        scanf("%d", &n);
    }
}
