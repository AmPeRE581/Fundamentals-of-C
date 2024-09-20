/*Esercizio1_2: Funzioni VOID Senza Parametri*/ /*In base al valore scritto nella riga 18 ci consente di scrivere gli asterischi --->
---> in base al valore immesso...*/

#include <stdio.h>

void benvenuto(){
    printf("Ciao!\n");
    printf("Avvio Programma\n");
}

void arrivederci(){
    printf("\nProgramma terminato\n");
    printf("Addio!\n");
}

int main(){
    benvenuto();
    int n,i;
    printf("Dammi un valore:\n");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("*");
    }

    arrivederci();
}