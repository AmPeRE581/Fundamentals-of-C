/*Esercizio28: Terne Numeri: Simulazione 1
Si hanno a disposizione N terne di numeri interi, ciascuna dei quali contiene: 
–	Come primo elemento il codice identificativo di un veicolo
–	Anno in cui ha percorso
–	Il numero di chilometri.
Scrivere un programma che:
1)	Legge le n terne e le memorizza in una matrice (veicolo_anno_Km) in modo che ogni riga contenga una delle terne lette.
2)	Scrive il codice dei veicoli che hanno percorso più chilometri e l’anno (o gli anni) in cui la condizione si è verificata.
Per il primo punto ed il secondo punto usare definire due funzioni: “Lettura_riga” che riceve la matrice di interi (mat) e due interi (quale_riga e n_col) e “massimo_su_colonna” che riceve la matrice di interi, il suo numero di righe ed un indice di colonna (index_c) e restituisce il massimo presente sulla colonna index_c.
*/

#include <stdio.h>
#define MAX_VEICOLI 100 /*Assumiamo al massimo 100 Veicoli*/

void Lettura_riga(int mat[][3], int quale_riga, int n_col){
    printf("Inserisci i dati per il veicolo %d:\n", quale_riga+1);
    for(int i=0; i<n_col; i++){
        scanf("%d", &mat[quale_riga][i]);
    }
}

int massimo_su_colonna(int mat[][3], int n_righe, int index_c){
    int max =mat[0][index_c];
    for(int i=1; i<n_righe; i++){
        if(mat[i][index_c]>max){
            max= mat[i][index_c];
        }
    }

    return max;
}

int main(){
    int N;
    printf("Quanti veicoli vuoi inserire? -->");
    scanf("%d", &N);

    int veicolo_anno_Km[MAX_VEICOLI][3];

    /*Lettura dei dati*/
    for(int i=0; i<N; i++){
        Lettura_riga(veicolo_anno_Km, i, 3);
    }

    /*Trovare il massimo chilometraggio*/
    int max_km= massimo_su_colonna(veicolo_anno_Km, N, 2);

    /*Stampa dei risultati*/
    printf("\nVeicoli con il massimo chilometraggio (%d km): \n", max_km);
    for(int i=0; i<N; i++){
        if(veicolo_anno_Km[i][2] == max_km){
            printf("Veicolo %d nell'anno %d\n", veicolo_anno_Km[i][0], veicolo_anno_Km[i][1]);
        }
    }

    return 0;

}
