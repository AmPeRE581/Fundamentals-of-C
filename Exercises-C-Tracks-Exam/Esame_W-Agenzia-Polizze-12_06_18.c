#include <stdio.h>
#define MAX_AGENZIE 100 /*Si assumono a lavoro un tot di 100 agenzie*/

/*Funzione per lettura terna e inserirla nella matrice*/
void lettura_terna(int matrix[][3], int numero_terna){
    printf("Inserisci codice agenzia, numero polizze e anno per la terna %d: ", numero_terna+1);
    scanf("%d %d %d", &matrix[0][numero_terna], &matrix[1][numero_terna], &matrix[2][numero_terna]);
}

/*Funzione per calcolare il massimo numero di polizze in una riga*/
int massimo(int matrix[][3], int num_cm, int nr){
    int max=matrix[1][0]; /*Inizializziamo il massimo al primo elemento della riga*/
    for(int i=1; i<num_cm; i++){
        if(matrix[1][i] > max){
            max = matrix[1][i];
        }
    }

    return max;
}

int main(){
    int m;
    int agenzia_polizze_anno[2][MAX_AGENZIE]; /*Matrice per le agenzie, polizze e anni*/
    int massimo_polizze;
    int anno_da_usare;
    int totale_polizze=0; /*Inizializzazione di (totale_polizze) a 0*/

    /*Punto 1: Lettura della terna*/
    printf("Inserisci il numero di agenzie: ");
    scanf("%d", &m);

    for(int i=0; i<m; i++){
        lettura_terna(agenzia_polizze_anno, i);
    }

    /*Punto 2: Calcolo max numero di polizze e stampa dei risultati*/
    massimo_polizze = massimo(agenzia_polizze_anno, m, 1); /*Calcoliamo il massimo sulle polizze (1 Riga)*/

    printf("Massimo numero di polizze stipulate: %d\n", massimo_polizze);
    printf("Agenzie che hanno raggiunto il massimo:\n");
    for(int i=0; i<m; i++){
        if(agenzia_polizze_anno[1][i] == massimo_polizze){
            printf("Agenzia: %d\t Anno: %d\n", agenzia_polizze_anno[0][i], agenzia_polizze_anno[2][i]);
        }
    }

    /*Punto 3: Calcolo del totale delle polizze in un anno specifico*/
    printf("Inserisci l'anno da analizzare: ");
    scanf("%d", &anno_da_usare);

    for(int i=0; i<m; i++){
        if(agenzia_polizze_anno[2][i] == anno_da_usare){
            totale_polizze += agenzia_polizze_anno[1][i];
        }
    }
    printf("Totale polizze stipulate nel %d: %d\n", anno_da_usare, totale_polizze);

    return 0;
}
