/*Esercizio6: Creare un applicazione che mostri la tabellina di un numero scelto dall'utente, dallo 0 fino al 10*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero_tabellina;
    int i=0,n;

    printf("Inserisci il numero di cui devo riportare la tabellina: ");
    scanf("%d",&numero_tabellina);

//non hai settato i...
    if(numero_tabellina==0){
        printf("La tabellina richiesta nn è disponibile...sorry!!!!");
	return 1;
    }

    while (i<10){
        printf("Ti mostrerò la tabellina del numero che mi hai fornito...");
	printf("%d",numero_tabellina*i);

	++i;
    }

return 0;
}
