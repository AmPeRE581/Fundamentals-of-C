#include <stdio.h>
#define MAX_AZIENDE 100

int main(){
    int n_aziende, offerte[MAX_AZIENDE][4], migliore_offerta =0;
    float migliore_rapporto =0;
    int quantita_totale =0, offerte_lunghe =0;

    printf("Inserisci il numero di aziende che hanno fatto offerte: ");
    scanf("%d", &n_aziende);

    /*Lettura dell'offerta*/
    for(int i=0; i<n_aziende; i++){
        printf("Offerta %d: codice, costo, quantità(kg), durata(mesi): ", i+1);
        for(int j=0; j<4; j++){
            scanf("%d", &offerte[i][j]);
        }
    }

    /*Trova la migliore offerta*/
    for(int i=0; i<n_aziende; i++){
        float rapporto = (float)offerte[i][1] / offerte[i][2]; /*Costo per KG*/
        if(rapporto < migliore_rapporto || migliore_rapporto == 0){
            migliore_rapporto = rapporto;
            migliore_offerta = i;
        }

        /*Calcola la quantità totale e cona le offerte lunghe*/
        quantita_totale += offerte[i][2];
        if(offerte[i][3] >=6){
            offerte_lunghe++;
        }
    }

    /*Stampa dei risultati*/
    printf("\nMigliore offerta: azienda %d (costo per kg: %.2f)\n", offerte[migliore_offerta][0], migliore_rapporto);
    printf("Quantità totale di cibo: %d kg\n", quantita_totale);
    printf("Aziende con offerte di almeno 6 mesi: %d\n", offerte_lunghe);

    return 0;
}