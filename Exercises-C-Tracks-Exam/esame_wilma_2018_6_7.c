/*Esame 2018-06-07*/

#include <stdio.h>

#define DIM 100

int main () {
    int n, numero_tessera,num_p,noAcquisti=0,conteggioMaggiore;
    float num_pp,somma,sommaMaggiore;
    int numeri_tessere[DIM];
    float totale_speso[DIM];
//variabile conteggio per la sequenza
    int i,j;

    printf("Quante sequenze vuoi leggere?\n");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        somma = 0;
        sommaMaggiore = 0;
        conteggioMaggiore = 0;

        printf("Inserire il numero della tessera del cliente %d: ",i+1);
        scanf("%d",&numero_tessera);
        printf("Inserire il numero di pagamenti da inserire: ");
        scanf("%d",&num_p);
        if(num_p==0){
            printf("La tessera non verra'salvata dal sistema, ma sarà salvato per il secondo punto.\n");
            noAcquisti++;
        } else {
            for(j=0; j<num_p; j++){
                scanf("%f",&num_pp);
                somma+=num_pp;
            }

            numeri_tessere[i]=numero_tessera;
            totale_speso[i]=somma;

            if(sommaMaggiore<=somma){
                sommaMaggiore = somma;
                conteggioMaggiore++;
            }
        }
    }
}