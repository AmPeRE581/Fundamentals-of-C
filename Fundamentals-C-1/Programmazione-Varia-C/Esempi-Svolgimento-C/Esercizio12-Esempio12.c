/*Esercizio12: Esempio12: Scrivere un programma che , data in input una matrice m di reali di
dimensione N x N, definisce e stampa un vettore v contenente gli
elementi di m che occorrono nella matrice più di 3 volte. 

Nota bene: gli elementi di v sono tutti distinti tra di loro*/

#include <stdio.h>

#define DIM 4 /*Dimensione della matrice...la si può modificare successivamente*/

int main(){
    int i,j, count, MAX_VALUE, v, k, N;
    float m[DIM][DIM]; /*Assumiamo che v possa contenere al massimo tutti gli elementi della matrice*/
    int counts[2 * MAX_VALUE + 1] = {0}; /*Array per cominciare il conteggio delle occorrenze*/
    float v[DIM][DIM];

    int v_index = 0; /*Indice per il vettore v*/

    /*Lettura della matrice in corso qui di seguito...*/

    printf("Inserisci gli elementi della matrice %dx%d: \n",N);
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            scanf("%f", &m[i][j]);
        }
    }

    /*Conteggio delle occorrenze con le stringhe di comando qui di seguito...*/
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            counts[(int)(m[i][j] + MAX_VALUE)]++;
        }
    }

    for(i = -MAX_VALUE; i<= MAX_VALUE; i++){
        if(counts[i + MAX_VALUE] > 3){
            v[v_index++] = i;
        }
    }

    /*Controllo degli elementi ripetuti e inserimento all'interno della matrice DIM*/
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            count = 1; /*Qui il counter parte da 1 dopo due cicli*/
            for(k=i; k<N; k++){
                for(int l=0; l<N; l++){
                    if(k != i || l != j){
                        if(m[i][j] == m[k][l]){
                            count++;
                        }
                    }
                }
            }
        }

        if(count > 3){
            /*Verifica se l'elemento è già presente all'interno del vettore V*/
            int found =0;
            for(k=0; k<v_index; k++){
                if(m[i][j] == v[k]){
                    found = 1;
                    break;
                }
            }

            if(!found){
                v[v_index++] = m[i][j];
            }
        }
    }


    /*Stampa del vettore V*/
    printf("Elementi che compaiono più di 3 volte:\n");
    for(i=0; i < v_index; i++){
        printf("%.2f", v[i]);
}

    printf("\n");

return 0;
}