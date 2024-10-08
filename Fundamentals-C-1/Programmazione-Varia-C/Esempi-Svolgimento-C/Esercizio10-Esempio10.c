/*Esercizio10: Esempio10: Simulazione D'Esame (Si hanno n sequenze di numeri, ciascuna delle quali è composta
come segue: 

1. Il primo elemento indica il codice di una serie tv
2. Il secondo elemento l'anno di messa in onda della serie tv
3. Il terzo elemento il numero di stagioni nelle quali la serie tv è andata in onda
4. I successivi elementi indicano quanti spettatori la serie ha avuto in ognuna delle sue stagioni

Esempio: la sequenza 251 1998 5 100 200 265 213 95 indica che la serie tv con codice 251 è andata in onda a partire dal 1998 per 5 anni,
registrando 100 spettatori il primo anno, 200 il secondo, 265 il terzo, 213 il quarto e 95 il quinto e ultimo anno. La sequenze 334 2010 1 100
indica che la serie tv con codice 304 è andata in onda per 1 sola stagione nel 2010 con 100 spettatori.
Scrivere un programma che legge n, le n sequenze e quindi:
1. crea (i) una vettore serie_cult che riporta i codici delle sole serie tv mandate in onda prima del 2000 oppure per almeno 3 stagioni e (ii)
una matrice share_media nella quale, per ogni serie, viene riportato il codice e il numero medio di spettatori per stagione
2. calcola e stampa qual è la durata (il numero massimo di stagioni) della serie tv più longeva.
3. Dato un intero in input che corrisponde al codice di una serie tv, stampa se la serie è cult, se esiste ma non è cult, o se non esiste
N.B. per il punto 3 utilizzare una funzione trova non void opportunamente definita
Esempio: posto n=6 e le seguenti sei sequenze:
251 1998 5 100 200 265 213 95
334 2010 1 100
105 1995 3 200 180 125
990 2021 2 500 800
631 2015 8 123 222 515 200 100 200 98 70
122 2007 4 100 200 50 50
Il programma creerà, al punto 1, il vettore serie_cult e la matrice share_media come segue:
Mentre al punto 2 stamperà “durata massima 8 stagioni” e al punto 3 stamperà :
“serie cult” se in input riceve, per esempio, 631
“serie non cult” se in input riceve, per esempio, 334;
“serie non esistente” se in input riceve, per esempio, 130.)*/

#define DIM 100
#include <stdio.h>
int main(){
    int serie_cult[DIM];
    float share_medio[DIM][2];
    int k=0; int i,j, somma; 
    float media=0; 
    int max_stagioni=0; 
    int cod_max;

    for(i=0; i<n; i++){
        somma=0; /*Necessario di un input di azzeramento da una serie ad un altra...per evitare problemi*/
        scanf("%d", &cod);
        scanf("%d", &anno);
        scanf("%d", &stagioni);

        if(anno<2000 || stagioni>3){
            serie_cult[k]=cod;
            k++
        }

        for(j=0; j<stagioni; j++){
            scanf("%d", &spettatori);
            somma=somma+spettatori;
        }

        media=(float)somma/stagioni;
        share_media[i][0]=cod;
        share_media[i][1]=media;
        if(max_stagioni<stagioni){
            max_stagioni=stagioni;
            cod_max=cod;
        }
        printf("Serie con maggior numero di stagioni %d", cod_max);
    }
}