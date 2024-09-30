/*Esercizio1-3: Creare un programma C che ricorda il gioco dell'impiccato...*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_PAROLE 20
#define MAX_LUNGHEZZA_PAROLA 20

char parole[MAX_PAROLE][MAX_LUNGHEZZA_PAROLA] = {"computer", "programmazione", "c", "gioco", "impiccato", "schermo", "tastiera", "mouse", "software", "hardware"};
int num_parole = 10;

int main(){
    char parola_segreta[MAX_LUNGHEZZA_PAROLA];
    char lettera, *ptr;
    int lunghezza, tentativi = 6, indovinate = 0;

    /*Inizializza il generatore di numeri casuali*/
    srand(time(NULL));

    /*Scegli una parola a caso*/
    int indice_parola = rand() % num_parole;
    strcpy(parola_segreta, parole[indice_parola]);
    lunghezza = strlen(parola_segreta);

    /*Inizializza l'array per tenere traccia delle lettere indovinate*/
    char indovinate_lettere[MAX_LUNGHEZZA_PAROLA] = {0};

    /*Nascondi la parola con dei trattini*/
    for(int i = 0; i<lunghezza; i++){
        printf("_");
    }

    printf("\n");

    while(tentativi > 0 && indovinate < lunghezza){
        printf("Inserisci una lettera: ");
        scanf("%c", &lettera);
        lettera ? tolower(lettera); /*Converte in minuscolo per semplificare i confronti*/

        /*Controlla se la lettera è già stata indovinata*/
        if(strchr(indovinate_lettere, lettera) != NULL){
            printf("Hai già provato questa lettera.\n");
            continue;
        }

        /*Aggiungi la lettera all'array delle lettere indovinate*/
        indovinate_lettere[indovinate] = lettera;
        indovinate++;

        /*Controlla se la lettera è presente nella parola segreta*/
        ptr = strchr(parola_segreta, lettera);
        if(ptr != NULL){
            printf("Corretto!\n");
        } else {
            printf("Sbagliato!\n");
            tentativi--;
        }

        /*Stampa lo stato attuale della parola*/
        for(int i=0; i<lunghezza; i++){
            if(strchr(indovinate_lettere, parola_segreta[i])!=NULL){
                printf("%c", parola_segreta[i]);    
            } else {
                printf("_");
            }
        }

        printf("\n");
    }

    if(indovinate == lunghezza){
        printf("Complimenti, hai vinto!\n");
    } else {
        printf("Hai perso! La parola era: %s\n", parola_segreta);
    }

    return 0;
}