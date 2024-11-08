#include <stdio.h>
#define MAX_TERNE 100

/*Funzione per leggere una colonna della matrice.*/
void leggi_colonna(int matrix[][3], int n_colonna, int num_el){
    for(int i=0; i<num_el; i++){
        scanf("%d", &matrix[i][n_colonna]);
    }
}

/*Funzione per trovare il minimo su una riga della matrice*/
int minimo_su_riga(int matrix[][3], int num_c, int nr){
    int min = matrix[nr][0];
    for(int j=1; j<num_c; j++){
        if(matrix[nr][j] < min){
            min=matrix[nr][j];
        }
    }

    return min;
}

int main(){
    int m;
    int famiglia_componenti_consumo[MAX_TERNE][3];

    printf("Inserisci il numero di terne: ");
    scanf("%d", &m);

    /*Leggi le terne e le inserisci nella matrice*/
    for(int i=0; i<3; i++){
        leggi_colonna(famiglia_componenti_consumo, i, m);
    }

    /*Trova il minimo consumo*/
    int minimo_consumo = minimo_su_riga(famiglia_componenti_consumo, 3, 2); /*Cerchiamo il minimo sulla terza colonna (consumi)*/
    
    /*Adesso procediamo a stampare i nuclei familiari con consumo minimo*/
    printf("Nuclei familiari con consumo minimo (%d): \n", minimo_consumo);
    for(int i=0; i<m; i++){
        if(famiglia_componenti_consumo[i][2] == minimo_consumo){
            printf("Codice: %d - Componenti: %d\n", famiglia_componenti_consumo[i][0], famiglia_componenti_consumo[i][1]);
        }
    }

    return 0;
}