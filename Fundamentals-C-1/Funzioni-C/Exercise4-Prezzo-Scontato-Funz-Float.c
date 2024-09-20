/*Esercizio1_4: Esempio: Scrivi un programma che, dati un prezzo e uno sconto, calcola il prezzo scontato.*/

/*Funzione FLOAT - C*/

#include <stdio.h>

float sconto(float prezzo_originale, float sconto){
    float prezzo scontato;
    prezzo scontato=prezzo*sconto;
    return prezzo_scontato;
}

int main(){
    float p,s;
    printf("Inserire prezzo da scontare");
    scanf("%f", &p);

    printf("Inserire Sconto"); //es. 0.5 corrisponde al 50%
    scanf("%f",&s);
    
    float ris=sconto(p,s);
    printf("Prezzo scontato: %f",ris);
}