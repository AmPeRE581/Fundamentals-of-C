/*Esercizio38: In una gara di pattinaggio artistico, ogni atleta esegue un programma per il quale cinque giudici esprimono un voto da 0 a 10. Come nella gara di tutti, il voto più alto e quello più basso vengono scartati e la somma dei tre voti rimanenti costituisce il punteggio finale dell’atleta.
Obiettivi del programma: 
1.	Creazione di una matrice: Costruire una matrice contenente, per ogni atleta, il suo numero di gara, il punteggio finale, il punteggio più alto e il più basso.
2.	Creazione di un vettore: Creare un vettore contenente i numeri di gara degli atleti che hanno ottenuto una media dei punteggi superiori a 8.5.
3.	Calcolo del numero di voti 10: Calcolare quanti giudici hanno assegnato almeno una volta il voto 10 durante la gara.


Il programma dovrebbe creare una matrice con i risultati dettagliati per ogni atleta, un vettore con gli atleti qualificati (media superiore a 8.5) e infine indicare quanti giudici hanno dato almeno un 10.*/

#include <stdio.h>
#define MAX_ATLETI 100
#define NUM_GIUDICI 5

int benevoli(int punteggi[NUM_GIUDICI*MAX_ATLETI], int n_atleti){
    int i, j, cont=0; 
    for(i=0; i<n_atleti*NUM_GIUDICI; i++){
        if(punteggi[i] == 10){
            cont++;
        }
    }
    return cont;
}

int main(){
    int n,i,j;
    int id_atleta[MAX_ATLETI], punteggi[NUM_GIUDICI*MAX_ATLETI];
    float valutazioni[MAX_ATLETI], max_punteggi[MAX_ATLETI], min_punteggio[MAX_ATLETI];
    int qualificati[MAX_ATLETI], num_qualificati=0;

    printf("Inserisci il numero di atleti:");
    scanf("%d", &n);

    /*Leggi i dati per ogni atleta*/
    for(i=0; i<n; i++){
        printf("Atleta %d: ", i+1);
        scanf("%d", &id_atleta[i]);
        for(j=0; j<NUM_GIUDICI; j++){
            scanf("%f", &punteggi[i*NUM_GIUDICI+j]);
        }
    }

    /*Calcola valutazioni, max e min*/
    for(i=0; i<n; i++){
        float somma=0;
        float max= punteggi[i*NUM_GIUDICI], min =punteggi[i*NUM_GIUDICI];
        for(j=1; j< NUM_GIUDICI; j++){
            somma += punteggi[i*NUM_GIUDICI+j];
            if(punteggi[i*NUM_GIUDICI+j]>max){
                max=punteggi[i*NUM_GIUDICI+j];
            }
            if(punteggi[i*NUM_GIUDICI+j]<min){
                min=punteggi[i*NUM_GIUDICI+j];
            }
        }
        valutazioni[i]=somma-max-min;
        max_punteggi[i]=max;
        min_punteggio[i]=min;
    }

    /*Identifica i qualificati*/
    for(i=0; i<n; i++){
        if(valutazioni[i] >8.0){
            qualificati[num_qualificati++]=id_atleta[i];
        }
    }

    /*Stampa dei risultati*/
    printf("\nRisultati:\n");
    printf("Id\tValutazione\tMax\tMin\n");
    for(i=0; i<n; i++){
        printf("%d\t%.1f\t%.1f\t%.1f\n", id_atleta[i], valutazioni[i], max_punteggi[i], min_punteggio[i]);
    }
    printf("\nQualificati:\n");
    for(i=0; i<num_qualificati; i++){
        printf("%d", qualificati[i]);
    }
    /*Conta i guidici benevoli*/
    int num_benevoli = benevoli(punteggi, n);
    printf("\n%d guidici hanno attribuito almeno una volta 10.\n", num_benevoli);

    return 0;
}
