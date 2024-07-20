/*Esame 14 Giugno*/

#include <stdio.h>
#define DIM 100


//funzione per il punto 3:
int benevoli (float punteggio, int n){
    int k;
    int conteggioGiudici=0;
    for(k=0; k<n; k++){
        if(punteggio == 10){
            conteggioGiudici++;
        }
    }
    return conteggioGiudici;
}

int main() {
    int i, j, n, id;
    float risultati[DIM][4]; // Identificativo, somma, punteggio più basso, punteggio più alto
// per il punto 2:
    float qualificati[DIM][2]; // dobbiamo inserire al suo interno solo 2 valori: identificativo e media
// questo è per il settaggio della sequenza:

    float punteggio, somma, puntAlto, puntBasso;
    float mediaPunteggi;

    printf("Quanti atleti vuoi leggere? ");
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        printf("Leggo l'identificativo dell'atleta: ");
        scanf("%d", &id);
        
        mediaPunteggi = 0;
        somma = 0;
        puntAlto = 0;
        puntBasso = 10;

        printf("Leggo le sue valutazioni:\n");
        for (j=0; j<5 ;j++) {
            printf("Valutazione %d: ", j + 1);
            scanf("%f", &punteggio);

            if (punteggio > puntAlto) {
                puntAlto = punteggio;
            }
            if (punteggio < puntBasso) {
                puntBasso = punteggio;
            }
            somma += punteggio;
//controllo per il punto 3:
            puntMax = benevoli(id,punteggio,n);
        }

        somma = somma - puntAlto - puntBasso; // Rimuove il punteggio più alto e più basso
// punto 1: come lo avrei fatto io (brava chatgpt, prossima volta uso i for):
        risultati[i][0] = id;
        risultati[i][1] = somma;
        risultati[i][2] = puntBasso;
        risultati[i][3] = puntAlto;

// variabile da usare per il punto 2:
        if((mediaPunteggi = somma/(n-1)) > 8.0){
            qualificati[i][0]=id;
        }
    }

    // Stampa i risultati, per il punto 1:
    printf("Risultati:\n");
    for (i = 0; i < n; i++) {
        printf("Atleta %d: Valutazione = %.2f, Punteggio più basso = %.2f, Punteggio più alto = %.2f\n",
               (int)risultati[i][0], risultati[i][1], risultati[i][2], risultati[i][3]);
        printf("Vettore qualificati ha letto: Atleta %d, media del suo punteggio = %.2f",(int)qualificati[i][0],qualificati[i][1]);
    }
    
    printf("%d giudici",puntMax);


    return 0;
}
