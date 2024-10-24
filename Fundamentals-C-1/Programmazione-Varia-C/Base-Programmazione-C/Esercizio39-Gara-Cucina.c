/*Esercizio39: Gara di Cucina: In una gara di cucina, 
ogni concorrente prepara un piatto per il quale cinque giudici assegnano un voto da 0 a 10. 
Il voto più alto e quello più basso vengono scartati 
e la somma dei tre voti rimanenti costituisce il punteggio finale del piatto.*/

#include <stdio.h>

#define MAX_CONCORRENTI 100
#define NUM_GIUDICI 5

int main(){
    int num_concorrenti;
    float voti[MAX_CONCORRENTI][NUM_GIUDICI];
    float punteggi_finali[MAX_CONCORRENTI];
    int vincitori[MAX_CONCORRENTI], num_vincitori =0;
    int voti_10=0;

    /*Chiedo il numero dei concorrenti*/
    printf("Quanti concorrenti ci sono?");
    scanf("%d", &num_concorrenti);

    /*Leggo i voti per ogni concorrente*/
    for(int i=0; i<num_concorrenti; i++){
        printf("Voti per il concorrente %d\n", i+1);
        for(int j=0; j< NUM_GIUDICI; j++){
            printf("Voto Giudice %d: ", j+1);
            scanf("%f", &voti[i][j]);
            if(voti[i][j] == 10){
                voti_10++;
            }
        }
    }

    /*Calcolo i punteggi finali e identifico il vincitore*/
    for(int i=0; i<num_concorrenti; i++){
        float somma=0, max_voto=voti[i][0], min_voto =voti[i][0];
        for(int j=1; j< NUM_GIUDICI; j++){
            somma += voti[i][j];
            if(voti[i][j] > max_voto){
                max_voto = voti[i][j];
            }
            if(voti[i][j] < min_voto){
                min_voto = voti[i][j];
            }
        }
        punteggi_finali[i] = somma-max_voto - min_voto;
        if(punteggi_finali[i]>8.5){
            vincitori[num_vincitori++] = i+1;
        }
    }

    /*Stampa i risultati*/
    printf("\nRisultati:\n");
    printf("Concorrente\tPunteggio Finale\n");
    for(int i=0; i<num_concorrenti; i++){
        printf("%d\t\t%.2f\n", i+1, punteggi_finali[i]);
    }
    printf("\nVincitori (punteggio medio > 8.5): \n");
    for(int i=0; i<num_vincitori; i++){
        printf("%d", vincitori[i]);
    }

    printf("\n");

    printf("Numero totale di voti 10: %d\n", voti_10);

    return 0;
}
