/*Esercizio5: Esempio5: Scrivi un programma in C che:

1.Chieda all'utente di inserire un numero intero positivo.
2.Calcoli e stampi la somma di tutti i numeri da 1 fino al numero inserito dall'utente.
 - Ad esempio, se l'utente inserisce 5, il programma deve calcolare 1 + 2 + 3 + 4 + 5 = 15.*/

 #include <stdio.h>

 int main(){
    int numero, somma=0; 

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    /*Calcola la somma utilizzando un ciclo for*/

    for(int i=1; i<=numero; i++){
        somma+=i;
    }

    printf("La somma dei numeri da 1 a %d è: %d\n", numero, somma);

    return 0;
}