/*Exercise19: Scrivere un programma che legge x coppie di elementi. Ogni coppia è da un
numero reale (rappresentante il prezzo originale un articolo) e un carattere (la
lettera 'n' se l'articolo appartiene alla nuova collezione oppure la lettera 'V'
l'articolo appartiene alla vecchia collezione). Il programma legge x, le x coppie
e per ogni coppia calcola e stampa il prezzo finale dell'articolo:
•agli articoli della vecchia collezione va applicato uno sconto del 20% sul
prezzo originale
•agli articoli della nuova collezione uno sconto del 5%.
Il calcolo e la stampa del prezzo finale va delegato ad una funzione void
sconto opportunamente definita.
Esempio: se x=3 e le coppie 40 v 5 n 10 n l'output atteso è 32 4.75 9.5*/

#include<stdio.h>

void sconto(float prezzo, char collezione){
        float prezzoFinale;

        if(collezione == 'v'){
            prezzoFinale = prezzo * 0.8;
        } else if (collezione == 'n'){
            prezzoFinale = prezzo * 0.95;
        } else {
            printf("Errore: la collezione inserita non è valida.\n");
        }

        printf("Il prezzo finale dell'articolo è: %.2f\n", prezzoFinale);
}

int main(){
    int x;
    float prezzo;
    char collezione;

    printf("Inserisci il numero di coppie di elementi: ");
    scanf("%d", &x);
    printf("Ricorda: 'n' per la nuova collezione, 'v' per la vecchia collezione.\n");

    for(int i=1; i<=x; i++){
        printf("Inserisci il prezzo originale dell'articolo e la collezione separati da uno spazio");
        scanf("%f %c", &prezzo, &collezione);
        sconto(prezzo, collezione);
    }
}