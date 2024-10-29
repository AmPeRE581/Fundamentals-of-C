/*Esercizio43: Simulazione Gestione Negozio Giochi*/

#include <stdio.h>
#include <string.h>

#define MAX_GIOCHI 100

struct Videogioco{
    char titolo[50];
    char genere[30];
    char piattaforma[20];
    float prezzo;
    int quantita;
}

struct Videogioco catalogo[MAX_GIOCHI];
int num_giochi=0;

/*Funzione per aggiungere un nuovo gioco*/
void aggiungi_gioco(){
    int num_giochi=0;
}

/*Funzione per visualizzare il catalogo*/
void visualizza_catalogo(){
    printf("Catalogo dei giochi: \n");
    for(int i=0; i<num_giochi; i++){
        printf("Titolo: %s\n", catalogo[i].titolo);
        printf("Genere: %s\n", catalogo[i].Genere);
        printf("Piattaforma: %s\n", catalogo[i].piattaforma);
        printf("Prezzo: %.2f€\n", catalogo[i].prezzo);
        printf("Quantità: %d\n\n", catalogo[i].quantita);
    }
}

void cerca_gioco(){
    char titolo_ricerca[50];
    printf("Inserisci il titolo del gioco da cercare: ");
    scanf("%s", titolo_ricerca);

    int trovato =0;
    for(int i=0; i< num_giochi; i++){
        if(strcmp(catalogo[i].titolo, titolo_ricerca) == 0){
            printf("Gioco trovato:\n");
            /*Stampa le informazioni del gioco*/
            trovato=1;
            break;
        }
    }
    if(!trovato){
        printf("Gioco non trovato.\n");
    }
}

/*Funzione per vendere il gioco in questione*/

void vendi_gioco(){
    char titolo_ricerca[50];
    printf("Inserisci il titolo del gioco da vendere: ");
    scanf("%s", titolo_ricerca);

    int trovato =0;
    for(int i=0; i< num_giochi; i++){
        if(strcmp(catalogo[i].titolo, titolo_ricerca) == 0){
            if(catalogo[i].quantita > 0){
                catalogo[i].quantita--;
                printf("Gioco venduto con successo!\n");
            } else {
                printf("Spiacente, il gioco è esaurito.\n");
            }
            trovato =1;
            break;
        }
    }
    if(!trovato){
        printf("Gioco non trovato.\n");
    }
}

int main(){
    int scelta;

    do{
        printf("\n --- Benvenuto nel negozio di videogiochi! ---\n");
        printf("1. Aggiungi un nuovo gioco\n");
        printf("2. Visualizza il catalogo\n");
        printf("3. Cerca un gioco\n");
        printf("4. Vendi un gioco\n");
        printf("0. Esci\n");

        printf("Scegli un opzione: ");
        scanf("%d", &scelta);
    }
}