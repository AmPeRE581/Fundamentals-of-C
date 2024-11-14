#include <stdio.h>

void leggi_terna(int mat[][3], int terna){
    printf("Inserisci codice agenzia, codice cliente e numero viaggi per la terna %d: ", terna + 1);
    scanf("%d %d %d", &mat[0][terna], &mat[1][terna], &mat[2][terna]);
}

int minimo_su_riga(int mat[][3], int n_c, int n_riga){
    int min = mat[n_riga][0];
    for(int i=1; i<n_c; i++){
        if(mat[n_riga][i] < min){
            min = mat[n_riga][i];
        }
    }
    return min;
}

int main(){
    int m;
    printf("Inserisci il numero di terne: ");
    scanf("%d", &m);

    int agenzia_cliente_viaggi[3][m];

    /*Lettura delle terne*/
    for(int i=0; i<m; i++){
        leggi_terna(agenzia_cliente_viaggi, i);
    }

    /*Calcolo del minimo numero di viaggi e stampa dei clienti*/
    int minimo_viaggi= minimo_su_riga(agenzia_cliente_viaggi, m, 2);
    printf("Il minimo numero di viaggi è: &d\n", minimo_viaggi);
    printf("Clienti che hanno fatto il minimo numero di viaggi:\n");
    for(int i=0; i<m; i++){
        if(agenzia_cliente_viaggi[2][i] == minimo_viaggi){
            printf("Agenzia: %d\t Cliente:  %d\n", agenzia_cliente_viaggi[0][i], agenzia_cliente_viaggi[1][i]);
        }
    }

    /*Lettura del codice agenzia e calcolo del totale viaggi*/
    int codice_agenzia_da_usare;
    printf("Inserisci il codice dell'agenzia: ");
    scanf("%d", &codice_agenzia_da_usare);

    int totale_viaggi=0; 
    for(int i=0; i<m; i++){
        if(agenzia_cliente_viaggi[0][i] == codice_agenzia_da_usare){
            totale_viaggi += agenzia_cliente_viaggi[2][i];
        }
    }

    printf("Totale viaggi agenzia %d: %d\n", codice_agenzia_da_usare, totale_viaggi);

    return 0;
}