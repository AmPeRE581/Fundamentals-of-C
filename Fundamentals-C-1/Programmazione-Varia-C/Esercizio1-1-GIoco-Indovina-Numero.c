/*Esercizio1_1: Scrivi un programma che crea il gioco (Indovina il Numero).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h> /*Per verificare se un numero è primo...*/

int main(){
    int numero_segreto, tentativo, punteggio = 100, errori = 0, suggerimenti_usati = 0, livello, giocatori;
    char risposta[10]; /*Per leggere la risposta da parte utente...DA RICORDARE: che MAX le risposte che si possono dare sono "10"*/
    int min, max;

    /*Scegli il livello di difficoltà e il numero di giocatori*/
    printf("Scegli il livello di difficoltà (1-5):\n");
    printf("Livello-1: Facile\n");
    printf("Livello-2: Medio\n");
    printf("Livello-3: Difficile\n");
    printf("Livello-4: Estremo\n");
    printf("Livello-5: IMPOSSIBILE\n");
    scanf("%d", &livello);

    printf("Quanti giocatori? (1-2):");
    scanf("%d", &giocatori);

    /*Impostiamo l'intervallo dei numeri in base al livello di selezione*/
    switch(livello){
    
    case 1:
        min = 1;
        max = 20;
        break

    case 2:
        min = 1;
        max = 100;
        break;

    case 3: 
        min = 1;
        max = 1000;
        break;

    case 4: 
        min = 1;
        max = 10000;
        break;

    case 5: 
        min = 1;
        max = 100000;
        break; 

    default: 
        printf("Livello non valido. Devi selezionare da 1 a 5!!...");
        return 1;    
    }

    /*Inizializza il generatore di numeri casusali*/

    numero_segreto = rand() % (max-min+1) + min;

    printf("Benvenuto nel gioco dell'Indovina il Numero\n");
    printf("Ho pensato a un numero tra %d e %d. Prova a indovinarlo!\n", min, max);

    /*Ciclo principale del VideoGame...*/
    do{
        printf("Giocatore %d, inserisci il tuo tentativo: ", giocatori == 1 ? 1 : errori % 2+1);
        scanf("%d", &tentativo);

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