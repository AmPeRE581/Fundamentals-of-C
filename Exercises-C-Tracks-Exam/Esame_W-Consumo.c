#include <stdio.h>
#define MAX_SEQUENZE 100

int individua_posizione_massimo(int vett[], int n){
    int max = vett[0];
    int pos = 0;
    for(int i = 1; i<n; i++){
        if(vett[i] > max){
            max = vett[i];
            pos = i;
        }
    }

    return pos;
}

int main(){
    int n, numLetture;
    int numeroContatore[MAX_SEQUENZE], consumi[MAX_SEQUENZE], importo[MAX_SEQUENZE];

    printf("Inserisci il numero di sequenze: ");
    scanf("%d", &n);

    /*Leggi le sequenze e calcola i consumi*/
    for(int i = 0; i<n; i++){
        scanf("%d %d", &numeroContatore[i], &numLetture);
        consumi[i] = (numLetture >=2) ? (numeroContatore[i] - numeroContatore[i-numLetture]+1) : 10;
    }

    /*Trovo il massimo consumo e la sua posizione*/
    int pos_max = individua_posizione_massimo(consumi, n);

    /*Stampa i contatori con il consumo più alto*/
    printf("Contatori con il consumo più alto: \n");
    for(int i =0;  i<n; i++){
        if(consumi[i] == consumi[pos_max]){
            printf("%d\n", numeroContatore[i]);
        }
    }

    /*Calcola gli importi (semplifichiamo assumendo un prezzo fisso per unità di consumo)*/
    const float PREZZO_PER_UNITA = 0.5; /*Esempio: 0.5 per unità di consumo*/
    for(int i=0; i<n; i++){
        importo[i] = consumi[i] * PREZZO_PER_UNITA;
    }

    /*Stampa gli importi (Procedimento OPZIONALE...QUINDI NON NECESSARIO)*/

    printf("\nImporti da pagare: \n");
    for(int i=0; i<n; i++){
        printf("Contatore %d: %.2f euro\n", numeroContatore[i], importo[i]);
    }

    return 0;
}