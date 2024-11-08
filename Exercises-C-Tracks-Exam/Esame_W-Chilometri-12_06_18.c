#include <stdio.h>
#define MAX_TERNE 100

/*Funzione utile per la lettura di una riga della matrice*/
void leggi_riga(int matrix[][3], int i_riga, int num_col){
    for(int j=0; j<num_col; j++){
        scanf("%d", &matrix[i_riga][j]);
    }
}

/*Funzione per trovare il minimo su una colonna della matrice*/
int minimo_su_colonna(int matrix[][3], int n_righe, int j_col){
    int min=matrix[0][j_col];
    for(int i=1; i<n_righe; i++){
        if(matrix[i][j_col]<min){
            min = matrix[i][j_col];
        }
    }

    return min;
}

int main(){
    int m;
    int anno_km_veicolo[MAX_TERNE][3];

    printf("Inserisci il numero di terne: ");
    scanf("%d", &m);

    /*Si leggono le terne e le si inseriscono all'interno della matrice.*/
    for(int i=0; i<m; i++){
        leggi_riga(anno_km_veicolo, i, 3);
    }

    /*Trova il minimo consumo*/
    int min_km = minimo_su_colonna(anno_km_veicolo, m, 1); /*Si cerca il minimo sulla seconda colonna (Chilometri)*/

    /*Stampa i veicoli con il minimo consumo e gli anni corrispondendi*/
    printf("Veicoli con il minimo chilometraggio (%d km): \n", min_km);
    for(int i=0; i<m; i++){
        if(anno_km_veicolo[1][1] == min_km){
            printf("Veicolo: %d / Anno: %d\n", anno_km_veicolo[i][2], anno_km_veicolo[i][0]);
        }
    }
    return 0;
}