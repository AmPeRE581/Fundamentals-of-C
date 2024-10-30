/*Esercizio32*/

#include <stdio.h>
#define MAX_PROPOSTE 10

int main(){
    int n_proposte, proposte[MAX_PROPOSTE][5], migliore_proposta=0;
    float migliore_rapporto=0;
    int proposte_natura=0;

    printf("Inserisci il numero di proposte:");
    scanf("%d", &n_proposte);

    /*Lettura delle proposte*/
    for(int i=0; i<n_proposte; i++) {
        printf("Proposta %d: codice, costo, dimensioni, tempo, tema (0=Natura, 1=Altro): ", i+1);
        for(int j=0; j<5; j++){
            scanf("%d", &proposte[i][j]);
        }
    }

    /*Trova la migliore proposta in base al rapporto qualità-prezzo*/
    for(int i=0; i<n_proposte; i++){
        float rapporto = (float)proposte[i][1] / proposte[i][2];
        if(rapporto<migliore_rapporto || migliore_rapporto == 0){
            migliore_rapporto =rapporto;
            migliore_proposta=i;
        }

        /*Conta le proposte sul tema natura*/
        if(proposte[i][4]==0){
            proposte_natura++;
        }
    }

    /*Stampo dei risultati*/
    printf("\nMigliore proposta: artista %d (costo per mq: %.2f)\n", proposte[migliore_proposta][0], migliore_rapporto);
    printf("Proposte sul tema natura: %d\n", proposte_natura);

    return 0;
}