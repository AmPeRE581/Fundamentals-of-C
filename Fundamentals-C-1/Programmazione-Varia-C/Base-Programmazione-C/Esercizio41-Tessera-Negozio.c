/*Esercizio41: Identificativo Tessera Negozio*/

#include <stdio.h>
#define MAX_TESSERE 100

int main(){
    float somma_minima_da_usare;
    int n, num_tessere=0; /*num_tessere parte da zero, per inizializzarsi*/
    int tessere[MAX_TESSERE];
    float totale_importo_speso[MAX_TESSERE];
    int codice_tessera, numero_utilizzi, max_utilizzi=0, min_spesa=0;
    float importo, somma;

    /*Leggo dei dati iniziali*/
    printf("Inserisci la somma minima da usare: ");
    scanf("%f", &somma_minima_da_usare);
    printf("Inserisci il numero di sequenze: ");
    scanf("%d", &n);

    /*Si elaborano le sequenze*/
    for(int i=0; i<n; i++){
        printf("Sequenza %d: \n", i+1);
        scanf("%d %d", &codice_tessera, &numero_utilizzi);
        somma=0;
    for(int j=0; j<numero_utilizzi; j++){
        scanf("%f", &importo);
        somma +=importo;
    }
    /*Se la somma è maggiore o uguale alla soglia, aggiungo la tessera e l'importo totale ai vettori*/
    if(somma >= somma_minima_da_usare){
        tessere[num_tessere] =codice_tessera;
        totale_importo_speso[num_tessere] =somma;
        num_tessere++;

        /*Aggiorno il numero massimo di utilizzi e il numero di tessere con spesa inferiore alla soglia*/
        if(numero_utilizzi > max_utilizzi){
            max_utilizzi =numero_utilizzi;
        }
        if(somma < somma_minima_da_usare){
            min_spesa++;
        }
    }  
    }

    /*Stampo dei risultati*/
    printf("\nTessere e importi totali: \n");
    for(int i=0; i<num_tessere; i++){
        printf("%d %.2f\n", tessere[i], totale_importo_speso[i]);
    }

    printf("Tessera utilizzata il maggiore numero di volte:");
    for(int i=0; i<num_tessere; i++){
        if(numero_utilizzi == max_utilizzi){
            printf("%d", tessere[i]);
        }
    }
    printf("\n");

    printf("Tessere con spesa inferiore a %.2f: %d\n", somma_minima_da_usare, min_spesa);

    return 0;
}