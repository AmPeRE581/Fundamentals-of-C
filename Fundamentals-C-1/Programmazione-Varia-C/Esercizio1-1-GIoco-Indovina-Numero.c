/*Esercizio1_1: Scrivi un programma che crea il gioco (Indovina il Numero).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    int numero_segreto, tentativo, punteggio = 100, errori = 0, suggerimenti_usati = 0;
    char risposta[10]; /*Per leggere la risposta da parte utente...DA RICORDARE: che MAX le risposte che si possono dare sono "10"*/

    /*Inizializza il generatore di numeri casusali*/

    srand(time(NULL));

    /*Genera un numero casuale tra 1 e 100*/
    numero_segreto = rand() % 100+1;

    printf("Benvenuto nel gioco dell'Indovina il Numero\n");
    printf("Ho pensato a un numero tra 1 e 100. Prova a indovinarlo!\n");

    do{
        printf("Inserisci il tuo tentativo: ");
        scanf("%d", &tentativo);

        if(tentativo < numero_segreto){
            printf("Il numero è più grande!...\n");
            punteggio--;
        } else if(tentativo > numero_segreto){
            printf("Il numero è più piccolo!...\n");
            punteggio--;
        } else {
            printf("Complimenti! Hai indovinato in %d tentativi!\n", 100 - punteggio);
        }

        errori++;
        punteggio--;

        /*Suggerimento dopo 5 errori*/
        if(errori % 5 == 0 && suggerimenti_usati < 2){
            printf("Vuoi un suggerimento (SI/NO): ");
            scanf("%s", risposta);
        }

            if(strcmp(risposta, "SI") == 0){
                printf("Il numero è pari/dispari? ");
                printf("%s\n", numero_segreto % 2 == 0? "Pari" : "Dispari");
                suggerimenti_usati++;
            }
    }

    /*Hai perso dopo 10 errori senza indovinare...*/

    if(errori == 10){
        printf("Mi dispiace, hai perso!\n");
        printf("Il numero era: %d\n", numero_segreto);
        break;
    } while(1);

    return 0;
}