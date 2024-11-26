#include <stdio.h>

#define MAX_SEQ 100 /*Massimo numero di sequenze*/
#define MAX_PAYMENTS 100 /*Massimo numero di pagamenti per sequenza*/

int main(){
    int n; /*Numero di sequenze*/
    printf("Inserisci il numero di sequenze: ");
    scanf("%d", &n);

    int numero_tessere[MAX_SEQ]; /*Vettore dei numeri di tessere*/
    float totale_speso[MAX_SEQ]; /*Vettore dei totali spesi*/
    int no_acquisti = 0; /*Contatore di tessere senza acquisti*/
    int numero_tessere_utilizzate =0; /*Contatore di tessere utilizzate*/

    for(int i=0; i<n; i++){
        int numero_tessera, num_p;
        printf("Inserisci il numero tessera e il numero di pagamenti: ");
        scanf("%d %d", &numero_tessera, &num_p);

        if(num_p == 0){
            no_acquisti++; /*Incrementa il contatore di tessere senza acquisti*/
        } else {
            float somma = 0.0;
            for(int j=0; j<num_p; j++){
                float pagamento;
                printf("Inserisci l'importo del pagamento %d: ",j+1);
                scanf("%f", &pagamento);
                somma +=pagamento;
            }
            numero_tessere[numero_tessere_utilizzate] = numero_tessera;
            totale_speso[numero_tessere_utilizzate] = somma;
            numero_tessere_utilizzate++; /*Questo è un incremento*/
        }
    }

    /*Trova il, massimo importo speso*/
    float max_speso =0.0;
    for(int i=0; i<numero_tessere_utilizzate; i++){
        if(totale_speso[i] > max_speso){
            max_speso = totale_speso[i];
        }
    }

    /*Conta quante tessere hanno speso il massimo importo*/
    int max_speso_count =0;
    for(int i=0; i<numero_tessere_utilizzate; i++){
        if(totale_speso[i] == max_speso){
            max_speso_count++;
        }
    }

    /*Stampa i risultati*/
    printf("Clienti che non hanno mai fatto acquisti: %d\n", no_acquisti);
    printf("Clienti con maggiore importo totale speso: %d\n", max_speso_count);

    /*Stampa i vettori per verifica*/
    printf("Vettori costruiti: \n");
    printf("Numero tessere ---> totale speso\n");
    for(int i=0; i<numero_tessere_utilizzate; i++){
        printf("%d ---> %.2f\n", numero_tessere[i], totale_speso[i]);
    }

    return 0;
}