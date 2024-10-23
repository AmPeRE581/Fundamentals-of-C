/*Esercizio34: Conversione Binario/Decimale. Il numero binario è rappresentato su N bit, e il valore di N è inserito da tastiera.
L’utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit
meno significativo (ossia dal bit di peso 20). Il programma visualizzerà il numero decimale
corrispondente.
Suggerimento. Per calcolare le potenze di 2 utilizzare la funzione pow, includendo la libreria
math.h. Ad esempio per calcolare 25, si scriverà pow(2,5). In generale, data una base a, per
calcolare y = ab, si scrive y = pow(a,b) includendo la libreria math.h.*/

#include <stdio.h>
#include <math.h>

int main(){
    int N, bit, decimale=0, potenza=0;

    printf("Inserisci il numero di bit: ");
    scanf("%d", &N);

    printf("Inserisci le cifre binarie (da destra a sinistra): \n");

    for(int i=0; i<N; i++){
        printf("Bit %d: ",i);
        scanf("%d", &bit);

        /*Verifica che il bit sia 0 o 1*/
        if(bit != 0 && bit !=1){
            printf("Errore: il bit deve essere 0 o 1.\n");
            return 1; 
        }

        /*Calcola il valore del bit in base alla sua posizione*/
        decimale += bit*pow(2, potenza);
        potenza++;
    }

    printf("Il numero decimale corrispondente è: %d\n", decimale);

    return 0;
}