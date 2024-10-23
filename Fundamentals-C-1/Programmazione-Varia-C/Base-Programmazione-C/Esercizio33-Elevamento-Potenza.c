/*Esercizio33: Elevamento di Potenza: Si realizzi un programma che, dati due valori B (numero reale, detto ‘base’) ed E (numero
intero positivo, detto ‘esponente’), calcoli e stampi il valore reale di BE (base elevato ad
esponente). Non si utilizzi la funzione pow() ma si adotti il metodo delle moltiplicazioni
successive.
Esempio:
Inserisci B: 3.5
Inserisci E: 4
Risultato B^E = 150.0625*/

#include<stdio.h>

int main(){
    double base, risultato;
    int esponente, i;

    printf("Inserisci la base(numero reale): ");
    scanf("%lf", &base);

    printf("Inserisci l'esponente (numero intero positivo): ");
    scanf("%d", &esponente);

    /*Inizializza il risultato a 1*/
    risultato =1.0;

    /*Moltiplica la base per se stessa esponente volte*/
    for(i=0; i<esponente; i++){
        risultato *=base;        
    }

    printf("Risultato B^E = %.41f\n", risultato);
}