/*Exercise13: Scrivere un programma che legge N numeri interi da tastiera e li
memorizza in un vettore. Il numero N viene inserito dall’utente ed è
minore di 20. Il programma deve generare un secondo vettore che
compatta i numeri contenuti nel primo vettore, cioè eliminare tutti
gli elementi pari a 0 e stampare il vettore ottenuto.

Esempio:
Input: 11 0 -9 5 0 3 7 0 2 0 3
Output: 11 -9 5 3 7 2 3*/

#include<stdio.h>
#define DIM 20 // -- La dimensione che abbiamo settato, è chiaramente fissa! -- 

int main(){
    int v1[DIM], v2[DIM];
    int i, j;
    int n; // -- Con questo parametro, ci avvaliamo di riempire la variabile. -- 


    // -- Si riempie il vettore. -- 
    printf("Inserire lunghezza sequenza (max 20 elementi):");
    scanf("%d", &n);

    if(n>0 && n<=20){

        // -- Leggiamo gli elementi che sono dell'array -- 
        for(i=0; i<n; i++){
            printf("\nInserisci elemento in posizione %d del vettore: ",i);
            scanf("%d",&v1[i]);
        }

        // -- Qui cominciamo a ragionare di logica, per consentire di svolgere l'esercizio -- 
        j=0; // -- Indice del vettore N°2 -- 
        for(i=0; i<n; i++){
            if(v1[i] !=0){
                v2[j]=v1[i];
                j++;
            }
        }

        // -- Infine qui stampiamo tutto quello che abbiamo fatto a video... -- 
        printf("Output: ");
    for(i=0; i<j; i++){
        printf("%d", v2[i]);
    }
}

else{
    printf("\nErrore: 0 < N <= 20\n");
}

}