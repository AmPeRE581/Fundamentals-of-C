#include <stdio.h>

void studentiAmmessi(int matricola, int ammessi[], int m){
    ammessi[m] = matricola;
}

int main(){
    int n;
    printf("Inserisci il numero di studenti: ");
    scanf("%d", &n);
    
    int voti[n][3];
    int esiti[n];
    int ammessi[n];
    int m=0; /*Conteggio studenti ammessi*/
    for(int i=0; i<n; i++){
        printf("Inserisci la matricola: ");
        scanf("%d", &voti[i][0]);

        printf("inserisci la scritto: ");
        scanf("%d", &voti[i][1]);

        printf("Inserisci il progetto intermedio: ");
        scanf("%d", &voti[i][2]);

        if(voti[i][1] > 15 && voti[i][2] > 15){
            esiti[i] = 1;
            studentiAmmessi(voti[i][0], ammessi, m);
            m++;
        }
        else {
            esiti[i]=0;
        }
    }
}