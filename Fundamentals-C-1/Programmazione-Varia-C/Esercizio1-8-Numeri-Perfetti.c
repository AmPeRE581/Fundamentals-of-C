/*Esercizio1-8: Scrivi un programma in C che:

1.Chieda all'utente di inserire un numero intero positivo.
2.Verifichi se il numero inserito è perfetto.
3.Visualizzi un messaggio che indichi se il numero è perfetto o meno.*/

#include <stdio.h>

int main(){
    int numero, i, somma=0;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    /*Calcolo somma divisori propri*/

    for(i=1; i<numero; i++){
        if(numero%i == 0){
            somma_divisori +=i;
        }
    }

    /*Verifica se il numero è perfetto*/
    if(somma_divisori == numero){
        printf("%d è un numero perfetto.\n", numero);
    } else {
        printf("%d non è un numero perfetto.\n", numero);
    }

    return 0;
}