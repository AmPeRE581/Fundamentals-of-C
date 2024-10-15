/*Esercizio7: Cartellino del prezzo
Scrivere un programma che richieda all’utente il prezzo di un oggetto, e la percentuale
di sconto ad esso applicata, e che stampi a video il cartellino con il prezzo (originale e
scontato).


-- Esempio:
Inserisci i dati:
1.Prezzo: 25
2.Sconto: 10
-- Cartellino:
1.Prezzo: 25.00 euro
2.Sconto applicato 10%
3.Prezzo finale: 22.50 euro*/

#include <stdio.h>

int main(){
    float prezzoOriginale, scontoPercentuale, sconto, prezzoFinale;

    printf("Mi indichi per favore qual'è il prezzo originale del prodotto: ");
    scanf("%f", &prezzoOriginale);

    printf("Ora proseguiamo...\n");
    printf("Inserisci la percentuale di sconto sul prezzo originale: ");
    scanf("%f", &scontoPercentuale);

    /*Ora qui comincia la logica, caricando lo sconto che dobbiamo porre sul prezzo originale...*/

    sconto = (prezzoOriginale * scontoPercentuale) / 100;

    /*E infine calcoliamo il prezzo finale che riguarda tutta la procedura precedentemente fatta...*/

    prezzoFinale = prezzoOriginale - sconto;

    /*Infine ri/definiamo il cartellino del prezzo così da garantire la lettura completa*/

    printf("Il prezzo originale del cartellino è: %.2f\n", prezzoOriginale);
    printf("Il prezzo scontato del cartellino è: %.2f\n", prezzoFinale);
    printf("Infine lo sconto percentuale del cartellino è: %.2f\n", scontoPercentuale);
}