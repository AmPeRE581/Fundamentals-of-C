/*Traccia 2: Simulazione di un parcheggio

-- Problema: Simulare un parcheggio con un numero limitato di posti.

-- Requisiti:

1.Creare una struttura per rappresentare un veicolo (targa, ora di ingresso).
2.Utilizzare un array per rappresentare i posti del parcheggio.

-- Implementare le seguenti funzioni:

1.Parcheggiare un veicolo (se c'è posto).
2.Rimuovere un veicolo (dato la targa).
3.Calcolare il costo di sosta (in base a una tariffa oraria).
4.Stampare la lista dei veicoli parcheggiati.

-- Sviluppo:

1.Utilizza una logica per gestire i posti liberi e occupati.
2.Implementa una funzione per calcolare la durata della sosta.
3.Gestisci eventuali errori (parcheggio pieno, veicolo non trovato).*/

#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_POSTI 10 /*Massimo di posti all'interno del parcheggio in questione*/
#define TARIFFA_ORARIA 2 /*tariffa oraria del parcheggio che sono 2 euro*/

/*Struttura utilizzata, per la rappresentazione del veicolo nel parcheggio*/

struct Veicolo{
    char targa[10]; /*Viene utilizzato, affinchè la targa descritta rientri nelle 10 auto del parcheggio*/
    time_t ora_ingresso;
}

/*Funzioni Prototipi*/

void parcheggiaVeicolo(struct Veicolo parcheggio[], int *numVeicoli);
void rimuoviVeicolo(struct Veicolo parcheggio[], int *numVeicoli);
void calcolaCosto(struct Veicolo parcheggio, int numVeicoli);
void stampaParcheggio(struct Veicolo parcheggio, int numVeicoli);

int main(){
    struct Veicolo parcheggio[MAX_POSTI];
    int numVeicoli=0;
    int scelta;

    do{
        printf("\nMenù:\n");
        printf("1. Aggiungi Macchina\n");
        printf("2. Cerca Macchina\n");
        printf("3. Rimuovi la macchina dal parcheggio\n");
        printf("4. Calcola il costo del parcheggio\n");
        printf("5.Stampa la ricevuta del parcheggio\n");
        printf("6. Esci\n");

        printf("Scelta: ");

        scanf("%d", &scelta);

        switch(scelta){
            case 1:
                aggiungiLibro(libreria, &numLibri);
                break;

            case 2: 
                cercaLibro(libreria, &numLibri);
                break;

            case 3: 
                vendiLibro(libreria, &numLibri);
                break;

            case 4: 
                stampaCatalogo(libreria, &numLibri);
                break;

            case 5: 
                printf("Arrivederci!\n");
                break;

            default: 
                printf("Scelta non valida.\n"); 
    } 

    return 0;
}

/*Funzioni*/

void parcheggiaVeicolo(struct Veicolo parcheggio[], int *numVeicoli){
    if(*numVeicoli == MAX_POSTI){
        printf("Parcheggio Pieno.\n");
        return;
    }

    printf("Inserisci la targa del veicolo: ");
    scanf("%s", parcheggio[*numVeicoli].targa);
    parcheggio[*numVeicoli].ora_ingresso = time(NULL);
}