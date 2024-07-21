#include<stdio.h>

void funzione(int x){
    int i, j, num=1;

    for(i=1; i<=x; i++){
        for(j=1; j<=i; j++){
            printf("%d", num);
            num++;
        }

        printf("\n");
    }
}

int main(){
    int n;
    //richiede input utente...

    printf("Inserisci il numero di righe del triangolo di Floyd:");
    scanf("%d", &n);
    funzione(n);
}