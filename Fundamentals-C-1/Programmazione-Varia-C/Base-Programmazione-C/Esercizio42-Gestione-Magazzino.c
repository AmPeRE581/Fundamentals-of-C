/*Esercizio42: Gestione Magazzino*/

#include <stdio.h>
#include <string.h>

#define MAX_PRODOTTI 100

struct Prodotto{
    int codice;
    char descrizione[100];
    int quantità;
}

struct Prodotto magazzino[MAX_PRODOTTI];
int num_prodotti =0;

/*Funzionr per aggiungere un prodotto*/
void aggiungi_prodotto(){
    if(num_prodotti == MAX_PRODOTTI){
        printf("Magazzino pieno!\n");
        return;
    }

    printf("Inserisci il codice del prodotto: ");
    scanf("%d", &magazzino[num_prodotti].codice);
    printf("Inserisci la descrizione: ");
    scanf("%s", magazzino[num_prodotti].descrizione);
    printf("Inserisci la quantità: ");
    scanf("%d", &magazzino[num_prodotti].quantità);

    num_prodotti++;
}

void cerca_prodotto(){
    int codice_ricerca;
    printf("Inserisci il codice del prodotto da cercare: ");
    scanf("%d", &codice_ricerca);

    int trovato =0;
    for(int i=0; i< num_prodotti; i++){
        if(magazzino[i].codice == codice_ricerca){
            printf("Prodotto trovato:\n");
            printf("Codice: %d\n", magazzino[i].codice);
            printf("Descrizione: %s\n", magazzino[i].descrizione);
            printf("Quantità: %d\n", magazzino[i].quantità);
            
            trovato =1;
            break;
        }
    }

    if(!trovato){
        printf("Prodotto non trovato.\n");
    }
}

void visualizza_stock(){
    printf("Elenco dei prodotti:\n");
    for(int i=0; i< num_prodotti; i++){
        printf("Codice: %d\tDescrizione: %s\tQuantità: %d\n", magazzino[i].codice, magazzino[i].descrizione, magazzino[i].quantità);
    }
}

void preleva_prodotto(){
    int codice_ricerca, quantità_da_prelevare;

    printf("Inserisci il codice del prodotto da prelevare: ");
    scanf("%d", &codice_ricerca);
    printf("Inserisci la quantità da prelevare: ");
    scanf("%d", &quantità_da_prelevare);

    int trovato =0;
    for(int i=0; i< num_prodotti; i++){
        if(magazzino[i].codice == codice_ricerca){
            if(magazzino[i].quantità >= quantità_da_prelevare){
                magazzino[i].quantità -= quantità_da_prelevare;
                printf("Prodotto prelevato con successo.\n");
            } else {
                printf("Quantità insufficiente in magazzino.\n");
            }
            trovato=1;
            break;
        }
    }

    if(!trovato){
        printf("Prodotto non trovato.\n");
    }
}

void restituisci_prodotto(){
    int codice_ricerca, quantità_da_restituire;

    printf("Inserisci il codice del prodotto da restituire: ");
    scanf("%d", &codice_ricerca);

    printf("Inserisci la quantità da restituire: ");
    scanf("%d", &quantità_da_restituire);

    int trovato =0;
    for(int i=0; i<num_prodotti; i++){
        if(magazzino[i].codice == codice_ricerca){
            /*Aumento la quantità del prodotto*/
            magazzino[i].quantità += quantità_da_restituire;
            printf("Prodotto restituito con successo.\n");
            trovato =1;
            break;
        }
    }

    if(!trovato){
        printf("Prodotto non trovato.\n");
    }
}

int main(){
    int scelta;

    do{
        printf("\nMenu:\n");
        printf("1. Aggiungi prodotto\n");
        printf("2. Cerca Prodotto\n");
        printf("3. Visualizza stock\n");
        printf("4. Preleva Prodotto\n");
        printf("5. Restituisci Prodotto\n");
        printf("0. Esci\n");
        printf("Scegli un opzione: ");
        scanf("%d", &scelta);

        switch (scelta){
            case 1:
                aggiungi_prodotto();
                break;

            case 2:
                cerca_prodotto();
                break;
            case 3:
                visualizza_stock();
                break;
            case 4:
                preleva_prodotto();
                break;
            case 5:
                restituisci_prodotto();
                break;
            case 0:
                Esci();
                break;
        }
    }
    while(scelta != 0);

    return 0;
}

