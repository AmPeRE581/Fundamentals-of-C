/*Esercizio12: Calcolatore di Numeri Primi
Scrivi un programma in C che chieda all'utente di inserire un numero intero positivo 
e determini se quel numero è un numero primo. 
Un numero primo è un numero intero maggiore di 1 che ha solo due divisori: 1 e se stesso.*/

#include<stdio.h>

  // Funzione che determina se un numero è primo
    int verif_primo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
    }

int main(){

    int numero_primo;

    //Iniziallizzo il numero primo...in questo caso, chiedo che sia inserito dall'utente...
    printf("Inserisci il numero di cui voglia verificare che sia un numero primo...--->\n");
    scanf("%d", &numero_primo);


    if(verif_primo(numero_primo)){ //Da notare un particolare...ovvero all'interno del if, ho inserito (is_prime) perchè ciò và a richiamare la funzione all'interno del suo if...ciò consente di poter completare --->
    //--> la funzione, andando ad interfacciarsi principalmente con la funzione descritta sopra.
        printf("Il numero da te inserito è numero primo...\n", verif_primo);
    } else {
        printf("Il numero da te inserito non risulta compatibile con i numeri primi\n", verif_primo); 
    }
    
}