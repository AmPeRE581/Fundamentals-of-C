#include <stdio.h>
#include <stdlib.h>

#define MAX_TOUR_OPERATORS 100
#define MAX_VIAGGI 100

int main(){
    int n, m, i,j;
    int viaggi_organizzati[MAX_TOUR_OPERATORS][MAX_VIAGGI][2];
    int tour_operator_code[MAX_TOUR_OPERATORS];
    int max_partecipanti[MAX_TOUR_OPERATORS];
    int count_viaggi[MAX_TOUR_OPERATORS];

    /*1. Legge le n terne e le memorizza nella matrice*/
    printf("Inserisci il numero di terne: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Inserisci la terna %d (codice tour operator, codice viaggio, partecipanti): ", i+1);
        scanf("%d %d %d", &viaggi_organizzati[i][0][0], &viaggi_organizzati[i][0][1], &viaggi_organizzati[i][0][2]);
    }

    /*2. Scrive la trasposta (in realtà, stampa le terne in ordine diverso)*/
    printf("\nMatrice trasposta (in realtà, terne stampate in ordine diverso): \n");
    for(i=0; i<n; i++){
        printf("%d - %d - %d\n", viaggi_organizzati[i][0][0], viaggi_organizzati[i][0][1], viaggi_organizzati[i][0][2]);
    }

    /*3. Legge m codici di tour operator e conta i viaggi, trova i viaggi con più partecipanti*/

    printf("\nInserisci il numero di codici tour operator da cercare: ");
    scanf("%d", &m);

    for(i=0; i<m; i++){
        printf("Inserisci il codice del tour operator %d: ", i+1);
        scanf("%d", &tour_operator_code[i]);

        count_viaggi[i] = 0;
        max_partecipanti[i] = 0;

        for(j=0; j<n; j++){
            if(viaggi_organizzati[j][0][0] == tour_operator_code[i]){
                count_viaggi[i]++;
                if(viaggi_organizzati[j][0][2] > max_partecipanti[i]){
                    max_partecipanti[i] = viaggi_organizzati[j][0][2];
                }
            }
        }

        printf("\nNumero viaggi organizzati dal tour operator %d: %d\n", tour_operator_code[i], count_viaggi[i]);
        printf("Viaggi organizzati dal tour operator %d con maggior numero di partecipanti: ", tour_operator_code[i]);
        for(j=0; j<n; j++){
            if(viaggi_organizzati[j][0][0] == tour_operator_code[i] && viaggi_organizzati[j][0][2] == max_partecipanti[i]){
                printf("%d", viaggi_organizzati[j][0][1]);
            }
        }
        printf("\n");
    }

    return 0;
}