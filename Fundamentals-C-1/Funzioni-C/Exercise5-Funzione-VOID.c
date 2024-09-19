/*Esercizio1_5: Esempio: Scrivi un programma che, dati un prezzo e uno sconto, calcola il prezzo scontato.*/

#include <stdio.h>

void sconto(float prezzo_originale, float sconto){
    float prezzo_scontato;
    prezzo_scontato=prezzo*sconto;
    printf("Prezzo scontato: %f", prezzo_scontato);
}

int main(){
    float p,s;
    printf("Inserire prezzo da scontare");
    scanf("%f",&p);

    printf("Inserire sconto"); //0.5 corrisponde al 50%
    scanf("%f",&s);

    sconto(p,s);
}