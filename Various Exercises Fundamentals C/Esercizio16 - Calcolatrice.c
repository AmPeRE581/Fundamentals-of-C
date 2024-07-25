/*Esercizio16: Scrivi un programma in C che implementi una calcolatrice semplice 
in grado di eseguire le quattro operazioni aritmetiche di base: addizione, sottrazione, moltiplicazione e divisione. 
Il programma dovrebbe:
 
- Chiedere all'utente di inserire due numeri.
- Chiedere all'utente di scegliere un'operazione tra le seguenti:

1 per addizione
2 per sottrazione
3 per moltiplicazione
4 per divisione

- Eseguire l'operazione scelta e mostrare il risultato.
- Gestire il caso di divisione per zero con un messaggio di errore appropriato.*/

#include<stdio.h>

int main(){
    //------------------------//
    //***Dichiarazione Variabili Intere***//
    int numero_inserito_calculator_1;
    int numero_inserito_calculator_2;
    int scelta_menu_principale;
    int scelta_menu_secondario;

    int somma, sottrazione, divisione, moltiplicazione;
    //------------------------//

    printf("Dimmi il 1 numero che vuoi che inserisca nella calcolatrice");
    scanf("%d", &numero_inserito_calculator_1);

    printf("Dimmi il 2 numero che vuoi che inserisca nella calcolatrice");
    scanf("%d", &numero_inserito_calculator_2);

    do {
        //Stampa menu operazioni principali
        printf("Menù Operazioni Principali:\n");
        printf("1. Addizione\n");
        printf("2. Sottrazione\n");
        printf("3. Moltiplicazione\n");
        printf("4. Divisione\n");
        scanf("%d", &scelta_menu_principale);

        if(scelta_menu_principale <1 || scelta_menu_principale >4){
            printf("Errore! Riprovare! Si è premuti il numero sbagliato o non funzionante!");
            return 0;
        }

        switch(scelta_menu_principale){
            case 1: //Menù Principale
            printf("Scegli un opzione fra quelle elencate:\n");
            /*-----------------------------------*/
            printf("1. Addizione\n");
            printf("2. Sottrazione\n");
            printf("3. Moltiplicazione\n");
            printf("4. Divisione\n");
            printf("Scegli un'opzione (1-4): ");
            scanf("%d", &scelta_menu_principale);

            if(scelta_menu_secondario == 1){
                    printf("Hai scelto Addizione.\n");
                } else if (scelta_menu_secondario == 2){
                    printf("Hai scelto Sottrazione.\n");
                } else if (scelta_menu_secondario == 3){
                    printf("Hai scelto Moltiplicazione.\n");
                } else if (scelta_menu_secondario == 4){
                    printf("Hai scelto Divisione.\n");
                }
                break;
        }
            //Svolgimento Operazioni Richieste nella traccia
            somma = numero_inserito_calculator_1 + numero_inserito_calculator_2;
            sottrazione = numero_inserito_calculator_1 - numero_inserito_calculator_2;
            moltiplicazione = numero_inserito_calculator_1 * numero_inserito_calculator_2;
            divisione = numero_inserito_calculator_1 / numero_inserito_calculator_2;
        }
        while (scelta_menu_principale != 0);
        
        }
