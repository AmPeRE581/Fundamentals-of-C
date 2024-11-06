#include <stdio.h>

#define MAX_CANDIDATI 100 /*Assumiamo un massimo di 100 candidati*/

int main(){
    int m, i;
    int id[MAX_CANDIDATI], titoli[MAX_CANDIDATI], tema[MAX_CANDIDATI];
    int orale[MAX_CANDIDATI], numOrali =0;
    float media, maxMedia = -1, minMedia = 101;
    int maxIndex = -1, minIndex = -1;

    /*Leggi il numero di candidati*/
    printf("Inserisci il numero di candidati: ");
    scanf("%d", &m);

    /*Leggi i dati di ogni candidato*/
    for(i=0; i<m; i++){
        printf("Candidato %d: ", i+1);
        scanf("%d %d %d", &id[i], &titoli[i], &tema[i]);

        /*Verifica se è ammesso all'orale*/
        if(titoli[i] > 16 && tema[i] > 16){
            orale[numOrali++] = id[i];
        }

        /*Calcola la media e trova il massimo e il minimo*/
        media = (float)(titoli[i] + tema[i]) /2;
        if(media > maxMedia){
            maxMedia = media;
            maxIndex = i;
        }

        if(media < minMedia){
            minMedia = media;
            minIndex = i;
        }
    }

    /*Stampa i risultati*/
    printf("\nCandidati ammessi all'orale:\n");
    for(i=0; i< numOrali; i++){
        printf("%d", orale[i]);
    }

    printf("\nIl candidato con matricola %d ha la media punteggi massima\n", id[maxIndex]);
    printf("Il candidato con matricola %d ha la media punteggi minima\n", id[minIndex]);
}