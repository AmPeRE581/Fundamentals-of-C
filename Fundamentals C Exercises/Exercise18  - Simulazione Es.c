/*Exercise18: Simulazione D'esame

- 1.crea (i) una vettore serie_cult che riporta i codici
delle sole serie tv mandate in onda prima del 2000
oppure per almeno 3 stagioni e (ii) una matrice
share_media nella quale, per ogni serie, viene
riportato il codice e il numero medio di spettatori
per stagione.


- 2. calcola e stampa qual è la durata (il numero
massimo di stagioni) della serie tv più longeva.*/

#define DIM 100
#include<stdio.h>

int main(){
    int serie_cult[DIM];
    float share_media[DIM][2];
    int cod, anno, stagioni, spettatori;
    int k=0,i,n,j,somma;

    float media=0;
    int max_stagioni=0, cod_max;

    for(i=0; i<n; i++){
        somma=0;
        scanf("%d", &cod);
        scanf("%d", &anno);
        scanf("%d", &stagioni);

        // -- Punto 1 --
        if(anno<2000 || stagioni >3){
            serie_cult[k]=cod;
            k++;
        }
        for(j=0; j<stagioni; j++){
            scanf("%d", &spettatori);
            somma=somma+spettatori;
        }
        media=(float)somma/stagioni;
        share_media[i][0]=cod;
        share_media[i][1]=media;

        // -- Punto2 --
        if(max_stagioni<stagioni){
            max_stagioni=stagioni;
            cod_max=cod;
        }
    }

    printf("Serie con maggiore numero di stagioni %d", cod_max);

    /* -- Dato un intero in input che corrisponde al codice di una serie tv
    stampa se la serie è cult, se esiste ma non è cult, o se non esiste -- */

    // -- Punto 3 --

    int codice_serie, esiste=0, cult=0;
    scanf("%d", &codice_serie);

    for(i=0; i<k; i++){
        if(serie_cult[i] == codice_serie){
            printf("La serie (codice %d) è cult", codice_serie);
            cult=1;
        }
    }

    if(cult == 0){
        for(i=0; i<n; i++){
            if(share_media[i][0] == codice_serie){
                esiste = 1;
            }
            if(esiste == 1){
                printf("La serie esiste ma non è cult", codice_serie);
            } else {
                printf("La serie non esiste");
            }
        }
    }
}
