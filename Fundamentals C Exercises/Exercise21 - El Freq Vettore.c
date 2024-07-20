/*Exercise21: Scrivere un programma che calcola e stampa l'elemento più frequente
all'interno di un vettore di n interi.

 -- Esempio: se n=7 e v=(9,5,9,8.0,5.9) il programma stampa 9 -- */


#include<stdio.h>
#define DIM 10

int main(){
    int v[DIM]; // -- 10 Posizioni -- 
    int i,j,n;
    printf("Inserire n: \n");
    scanf("%d", &n); // -- n è il riempimento effettivo -- 
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    int occorrenze_max=1;
    int occorrenze_corrente;
    int elem_frequente=v[0];

    for(i=0; i<n; i++){
        occorrenze_corrente=0;
        for(j=0; j<n; j++){
            if(v[i] == v[j]){
                occorrenze_corrente++;
            }
        }
        if(occorrenze_corrente > occorrenze_max){
            occorrenze_max = occorrenze_corrente;
            elem_frequente = v[i];
        }
    }

    printf("Occorrenze max vale %d per elemento %d", occorrenze_max, elem_frequente);
}

