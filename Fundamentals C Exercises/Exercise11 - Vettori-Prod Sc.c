/*Exercise11: Si dichiarino due vettori VET1 e VET2 di numeri interi, di
dimensione 7. Gli elementi di tali vettori siano inseriti da tastiera
dall’utente. Scrivere un programma che calcola il prodotto scalare
tra i due vettori.*/

#include<stdio.h>

int main(){

    //***Iniziallizazione e lettura parametri***
    int prodotto=0; 
    int i=0;
    int vet1[7];
    int vet2[7];

    //***Primo array in fase di lettura***
    for(i=0;i<7;i++){
        printf("\nFornire elemento in posizione %d del primo vettore: ",i);
        scanf("%d", &vet1[i]);
    }

    //***Secondo array in fase di lettura***
    for(i=0;i<7;i++){
        printf("\nFornire elemento in posizione %d del secondo vettore: ",i);
        scanf("%d", &vett2[i]);
    }

    //***Prodotto scalare in corso***
    for(i=0;i<7;i++){
        prodotto=prodotto+(vett1[i]*vett2[i]);
    }

    //***Stampa finale e verifica***
    printf("Prodotto scalare: %d\n", prodotto);
}