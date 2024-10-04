/*Esercizio1-8: Scrivi un programma in C che:

1.Chieda all'utente di inserire un numero intero positivo.
2.Verifichi se il numero inserito è perfetto.
3.Visualizzi un messaggio che indichi se il numero è perfetto o meno.*/

/*Da notare, che questa è una versione con l'aggiunta però del ciclo while...quindi su condizione, affinchè consente di non terminare
il programma nonostante non si sia inserito il numero perfetto.*/

#include <stdio.h>

int main(){
    int numero, i, somma_divisori;

    do{
        printf("Inserisci un numero intero positivo: ");
        scanf("%d", &numero);

        somma_divisori = 0;
        for(i = 1; i < numero; i++){
            if (numero % i == 0){
                somma_divisori += i;
            }
        }

        if(somma_divisori == numero){
            printf("%d è un numero perfetto! Complimenti hai indovinato!\n", numero);
            break; //Usciamo dal ciclo while...
        } else {
            printf("%d non è un numero perfetto. Riprova.\n", numero);
        }
    } while(1); //Il ciclo è in loop, finchè non viene trovata la risposta corretta...e poi si stoppa

    return 0;
}