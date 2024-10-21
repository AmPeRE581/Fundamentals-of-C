#include <stdio.h>
#define MAX_AZIENDE 100

int main(){
    int n_aziende, offerte[MAX_AZIENDE][4], migliore_offerta =0;
    float migliore_rapporto =0;
    int totali_3_volte =0;

    printf("Inserisci il numero di aziende che hanno fatto offerte: ");
    scanf("%d", &n_aziende);

    /*Lettura delle offerte*/
    for(int i=0; i<n_aziende; i++){
        printf("Offerta %d: codice, costo, frequenza (giorni/settimana), addetti", i+1);
        for(int j=0; j<4; j++){
            scanf("%d", &offerte[i][j]);
        }
    }

    /*Trova la migliore offerta*/
    for(int i=0; i<n_aziende; i++){
        float rapporto = (float)offerte[i][1] / offerte[i][2]; /*Costo giornaliero*/
        if(rapporto < migliore_rapporto || migliore_rapporto == 0){
            migliore_rapporto = rapporto;
            migliore_offerta = i;
        }

        /*Conto le offerte con pulizia almeno 3 volte a settimana*/
        if(offerte[i][2] >= 3){
            totali_3_volte++;
        }
    }

    /*Stampa i risultati*/
    printf("\nMigliore offerta: azienda %d (costo per giorno: %.2f)\n", offerte[migliore_offerta][0], migliore_rapporto);
    printf("Costo totale della migliore offerta: %d\n", offerta[migliore_offerta][1]);
    printf("Aziende che puliscono almeno 3 volte a settimana: %d\n", totali_3_volte);

    return 0;
}