/*Exercise14: Siano dati due vettori di interi inseriti da
tastiera. La lunghezza dei due vettori è inserita
dall’utente da tastiera. I due vettori possono
avere lunghezze diverse, ma possono
contenere al massimo 30 numeri. Si scriva un
programma per generare un terzo vettore che
contiene l’intersezione tra due vettori. Tale
vettore deve contenere i numeri presenti in
entrambi i vettori dati.*/

#include<stdio.h>
#define DIM 30

int main(){
    int n1, n2, i, j,k;
    int v1[DIM], v2[DIM], v3[DIM];

    // -- Lettura riempimento primo vet -- 
    printf("Inserisci la lunghezza del primo vettore (max 30): ");
    scanf("%d", &n1);

    // -- Lettura elementi primo vet --
    for(i=0; i<n1; i++){
        printf("\nInserisci elemento in posizione %d del vettore: ", i);
        scanf("%d", &v1[i]);
    }

    
    printf("Inserisci la lunghezza del secondo vettore (max 30): ");
    scanf("%d", &n2);

    for(i=0; i<n2; i++){
        printf("\nInserisci elemento in posizione %d del vettore: ",i);
        scanf("%d", &v2[i]);
    }

    // -- Logica -- 
    k=0; // -- Indice terzo valore --  

    for(i=0; i<n1; i++){
        for(j=0; j<n2; j++){
            if(v1[i]==v2[j]){
                v3[k] = v1[i]; // -- memorizza terzo valore -- 
                k++;
            }
        }
    }

    // -- Stampa video -- 
    printf("L'intersezione tra i due vettori è: ");
    for(i=0; i<k; i++){
        printf("%d", v3[i]);
    }
}