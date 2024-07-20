/*Esercizio4: Scrivi un programma in C che simuli il lavoro di un cassiere. Il programma deve fare quanto segue:

1. Richiedere all'utente di inserire il prezzo di tre articoli.
2. Calcolare il totale dell'acquisto.
3. Se il totale supera una certa soglia, applicare uno sconto (a tua scelta, max. 20%)
4. Chiedere all'utente se ha una carta fedeltà e, se sì, applicare un ulteriore sconto del 5% sul totale (dopo aver applicato il primo sconto, se applicabile).
5. Visualizzare il totale finale da pagare.*/


#include <stdio.h>

int main(){

    /*Primo punto*/
    double prezzo_art_1;
    double prezzo_art_2;
    double prezzo_art_3;
    double somma;

    double percentuale;
    double acquisto_percentuato;

    char risposta_fedelta;

    double somma_percentuale_5;

    printf("Inserisci il prezzo del primo articolo: ");
    scanf("%lf", &prezzo_art_1);

    printf("Inserisci il prezzo del primo articolo: ");
    scanf("%lf", &prezzo_art_2);

    printf("Inserisci il prezzo del primo articolo: ");
    scanf("%lf", &prezzo_art_3);

    /*Secondo punto*/

    somma = prezzo_art_1 + prezzo_art_2 + prezzo_art_3;
    printf("Il totale dell'acquisto è %lf", somma);

    /*Terzo punto*/

    //Si suppone che la somma massima sia di 20...

    if(totale_acquisto != 20){
        printf("Hai superato la soglia, quindi ti applico lo sconto del 20");
        percentuale = (20 * 20) / 100;

        printf("Il totale percentuato è %f", acquisto_percentuato);
    } else {
        printf("Non hai superato la soglia, lo sconto non si può applicare....vaffanculo");
    }

    /*Quarto Punto - Quinto Punto*/

    //Da notare, che qui...sono racchiusi sia il punto 4 che il punto 5, poichè sono ridotti, per pulizia del codice.

    printf("Si possiede una carta fedeltà? ");
    scanf("%c", &risposta_fedelta);

    if(risposta_fedelta == 'si'){
        somma_percentuale_5 = (totale_acquisto * 5) / 100;
        printf("Il totale confermato, applicando l'ulteriore 5 percento è: %lf", somma_percentuale_5); 
    } else {
        printf("L'ulteriore sconto, non può essere applicato perchè non ha in possesso la carta fedeltà");
    }


}