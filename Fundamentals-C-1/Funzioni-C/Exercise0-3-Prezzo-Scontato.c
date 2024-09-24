/*Esercizio0_3: Esempio: Un programma che, dati un prezzo e uno sconto, calcola il prezzo scontato.*/
/*Utilizzo parametro FLOAT*/

float sconto(float prezzo_originale, float sconto){
    float prezzo_scontato;
    prezzo_scontato = prezzo*sconto;

    return prezzo_scontato;
}

int main(){
    float p,s;
    printf("Inserire prezzo da scontare:");
    scanf("%f", &p);
    printf("Inserire sconto: "); //Es. 0.5 corrisponde al 50%

    scanf("%f", &s);
    float ris = sconto(p,s);

    printf("Il prezzo scontato risulta %f", ris);
}