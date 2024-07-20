/*Nel contesto di una gara di tuffi, 
ogni atleta esegue un tuffo per il quale 5 giudici esprimono una votazione attribuendo un punteggio nell'intervallo dei numeri reali tra 0 e 10. 
Il punteggio più alto e più basso sono scartati, mentre gli altri sono sommati ed il risultato contribuisce alla valutazione definitiva dell'atleta. 
Ad esempio, se l'atleta n.300 riceve dai giudici i seguenti punteggi: 8, 7, 9.5, 8, 6 allora la sua valutazione sarà 23 (poichè 6 e 9,5 sono scartati dalla somma).

Scrivere un programma che legge n sequenze. Ciascuna sequenza (sestina) e' costituita dall'identificativo dell'atleta (valore intero) e dai cinque punteggi attribuiti dai giudici al tuffo che ha eseguito. Il programma legge n, le n sestine di numeri e:
1. Costruisce una matrice risultati nella quale sono riportati, per ogni atleta, il suo identificativo, la sua valutazione (cioè la somma dei tre punteggi validi), il punteggio più alto e quello più basso (scartati).*/

#include<stdio.h>
#define DIM 100

int main(){
    int id, risultato;
    float valutazione;
    float punteggio_max;
    float punteggio_min;

    int numero_atleti;

    printf("Inserisci il numero degli atleti:");
    scanf("%d", &numero_atleti);

    //La matrice, noi sappiamo che è la matrice risultati...
    risultati = [MAX_ATLETI];

    for(int i=0; i<numero_atleti; i++){
        int id;
        float punteggi[5];

        printf("Inserisci l'identificativo dell'atleta e i 5 punteggi:");
        scanf("%d %f %f %f %f %f", &id, punteggi[0], punteggi[1], punteggi[2], punteggi[3], punteggi[4]);

        //Si calcola il punteggio di max e di min...
        float max = punteggi[0], min = punteggi[0], somma=0.0;

        for(int j=1; j<5; j++){ //Qui abbiamo un concetto importante...il for è settato in questo modo...si iniziallizza j che deve essere uguale a 1
        //j inoltre deve essere minore di 5, poichè i punti che dobbiamo prendere sono 5, e infine c'è un incremento di ogni punto che abbiamo..
            if(punteggi[j] > max){
                max = punteggi[j];
            }
            if(punteggi[j]<min){
                min=punteggi[j];
            }
        }

        //calcoliamo il max e il min...però escludendo i risultati più alti, e i più bassi...

        if(count<3){
            for(int j=0; j<5 && count <3; j++){
                if(punteggi[j]==max || punteggi[j]==main){
                    somma += punteggi[j];
                    count ++;
                }
            }
        }
        risultati[i].id=id;
        risultati[i].valutazione = somma;
        risultati[i].punteggio_max = max;
        risultati[i].punteggio_min = min;

        //e infine stampiamo i risultati di tutto....

        for(int i=0; i<n; i++){
            printf("Atleta %d: valutazione = %.2f, Punteggio massimo scartato = %.2f, punteggio minimo scartato = %.2f\n", risultati[i].id, risultati[i].valutazione, risultati[i].punteggio_max, risultati[i].punteggio_min);
        }

        return 0;   
    }
}
