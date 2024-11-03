/*Esercizio40: Acquisizioni Ristorante*/

#include <stdio.h>
#include <limits.h> /*Per usare INT_MAX*/

int main(){
    int n; /*Numero di Ordinazioni*/
    int id, nc; /*ID Cameriere e numero consumazioni*/
    float importo, totale_incasso=0, min_importo; /*Usiamo float perchè sono cifre in virgola mobile...e quindi ci serve per i decimali*/ 
    int tip[100][3]; /*Matrice per le mance (id, mancia, min_importo)*/
    int num_tip=0; /*Numero di righe utilizzate in tip*/ /*- Si parte sempre inizializzando a partire da zero*/

    /*Leggo il numero delle ordinazioni*/
    printf("Inserisci il numero di ordinazioni:");
    scanf("%d", &n);

    /*Leggo le ordinazioni e calcolo dell'incasso totale*/
    for(int i=0; i<n; i++){
        printf("Ordinazione %d: \n", i+1);
        scanf("%d %d", &id, &nc);
        importo=0;
        min_importo = INT_MAX;
        for(int j=0; j<nc; j++){
            scanf("%f", &importo);

            totale_incasso +=importo;
            if(importo <min_importo){
                min_importo =importo;
            }
        }
        /*Se l'ordinazione è valida, aggiunge il parametro alla matrice tip*/
        if(nc >=3 && importo >50){
            tip[num_tip][0] = id;
            tip[num_tip][1] = importo *0.05; /*Mancia del 5%*/
            tip[num_tip][2] = min_importo;
            num_tip++;
        }
    }

    /*In questo caso, stampo il totale dell'incasso*/
    printf("Totale incasso ristorante: %.2f euro\n", totale_incasso);

    /*Infine calcolo e stampo delle mance di ogni cameriere*/
    int cameriere, trovato;
    for(int i=0; i<num_tip; i++){
        cameriere =tip[i][0];
        trovato=0;
        for(int j=0; j<i; j++){
            if(tip[j][0] == cameriere){
                tip[j][1] += tip[i][1];
                trovato=1;
                break;
            }
        }
        if(!trovato){
            printf("Cameriere id %d ha incassato complessivamente %.2f euro di mancia\n", cameriere, tip[i][1]);
        }
    }
    return 0;
}