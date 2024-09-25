/*Esercizio0_6: Funzione media riceve un array di interi (x) ed il suo riempimento (n) e restituisce la media calcolata su gli elementi di x*/

#include <stdio.h>

double media(int x[], int n){
    int somma=0, i;
    for(i=0; i<n; i++){
        somma=somma+x[i];

        return (double) somma\n;
    }
}

/*La funzione scriviSe riceve un array di interi (x) ed il suo riempimento (n) e scrive
gli elementi dell'array maggiori della media degli elementi di x (usa la funzione media per il calcolo della media degli elementi dell'array)*/

void scriviSe(int x[], int n){
    double media_vett=media(x,n);
    int i;

    printf("Scrittura degli elementi del vettore maggiori della media(%g)\n", media_vett);

    for(i=0; i<n; i++){
        if(x[i]> media_vett){
            printf("%d\t", x[i]);
        }
    }

    printf("\n");
}