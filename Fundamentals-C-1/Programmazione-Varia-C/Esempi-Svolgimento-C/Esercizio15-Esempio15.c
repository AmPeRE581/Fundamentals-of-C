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

void parcheggiaVeicolo(struct Veicolo parcheggio[], int *numVeicoli){ /*----*/
    if(*numVeicoli == MAX_POSTI){
        printf("Parcheggio Pieno.\n");
        return;
    }

    printf("Inserisci la targa del veicolo: ");
    scanf("%s", parcheggio[*numVeicoli].targa);
    parcheggio[*numVeicoli].ora_ingresso = time(NULL);
    (*numVeicoli)++;
    printf("Veicolo parcheggiato correttamente.\n");
}

void rimuoviVeicolo(struct Veicolo parcheggio[], int *numVeicoli){ /*---*/
    char targaDaRimuovere[10];
    int trovato=0;

    printf("Inserisci la targa del veicolo da rimuovere: ");
    scanf("%s", targaDaRimuovere);

    /*Nella funzione seguente, cercheremo il veicolo da rimuovere, e procederemo a rimuoverlo dall'array*/
    for(int i=0; i<*numVeicoli; i++){
        if(strcmp(parcheggio[i].targa, targaDaRimuovere)==0){
            trovato=1;

            /*Spostiamo tutti i veicoli successivi di una posizione indietro...*/
            /*Così abbiamo la possibilità di rimuovere il vuoto che si è lasciato nei posti precedenti*/
            for(int j=i; j<*numVeicoli - 1; j++){
                parcheggio[j] = parcheggio[j+1];
            }

            /*Decrementiamo il numero totale di veicoli all'interno del parcheggio*/
            (*numVeicoli)--;
            break; /*Si esce dal ciclo in corso...perchè abbiamo trovato il veicolo*/
        }
    }

    if(trovato){
        printf("Veicolo rimosso correttamente!\n");
    } else {
        printf("Veicolo non trovato all'interno del parcheggio designato.");
    }
}

void calcolaCosto(struct Veicolo parcheggio[], int numVeicoli, int indiceVeicolo){
    /*Cominciamo con il calcolo dell'ora attuale*/
    time_t ora_uscita = time(NULL);

    /*Calcola la differenza tra l'ora di uscita e l'ora di ingresso in secondi*/
    double durata_sosta_secondi = difftime(ora_uscita, parcheggio[indiceVeicolo].ora_ingresso);

    /*Si convertono le durate della sosta in ore*/
    double durata_sosta_ore = durata_sosta_secondi / 3600.0;

    /*Si calcola il costo totale di tutto ciò...*/
    double costo_totale = durata_sosta_ore * TARIFFA_ORARIA;

    printf("Il costo della sosta è di: %.2f euro\n", costo_totale);
}

/*-----------------------------------------------------------------------------------------------*/
/*---- Piccola porzione della funzione void "calcolaCosto" ----*/

int indiceVeicoloDaRimuovere = trovaIndiceVeicolo(parcheggio, numVeicoli, targaDaRimuovere); /*Funzione per trovare tutto ciò che ci serve, in concomitanza alla funzione...*/
if(indiceVeicoloDaRimuovere != -1){
    calcolaCosto(parcheggio, numVeicoli, indiceVeicoloDaRimuovere);
    rimuoviVeicolo(parcheggio, &numVeicoli, indiceVeicoloDaRimuovere);
}