/*Esercizio1_2: Funzioni VOID Senza Parametri*/

#include<stdio.h>

void benvenuto(){
    printf("Ciao!\n");
    printf("Avvio Programma");
}

void arrivederci(){
    printf("\nProgramma terminato\n");
    printf("Addio!");
}

int main(){
    benvenuto();
    int n,i;
    printf("Dammi un valore\n");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("*");
    }

    arrivederci();
}