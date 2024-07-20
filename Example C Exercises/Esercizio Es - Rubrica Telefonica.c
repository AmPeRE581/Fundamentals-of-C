/*Traccia d'esame
Titolo: Gestione di una Rubrica Telefonica

Obiettivo: Implementare un programma in C che consenta di gestire una rubrica telefonica.

Descrizione:

Si vuole realizzare un programma che permetta di gestire una rubrica telefonica. La rubrica deve consentire di memorizzare, visualizzare, cercare, aggiornare e cancellare i contatti. Ogni contatto è composto dai seguenti campi:

Nome (stringa di massimo 50 caratteri)
Cognome (stringa di massimo 50 caratteri)
Numero di telefono (stringa di massimo 15 caratteri)
Email (stringa di massimo 50 caratteri)
Funzionalità richieste:

Aggiunta di un nuovo contatto
Visualizzazione di tutti i contatti
Ricerca di un contatto per nome e cognome
Aggiornamento di un contatto
Cancellazione di un contatto
Uscita dal programma
Requisiti Tecnici:

Utilizzare strutture dati per rappresentare i contatti.
Utilizzare un array dinamico per gestire i contatti.
Implementare le funzioni richieste in modo modulare (ogni funzionalità deve essere implementata in una funzione separata).
Il programma deve essere robusto e gestire correttamente gli errori (ad esempio, gestione dell'input non valido).
Interfaccia Utente:

Il programma deve presentare un menu di scelta all'utente con le opzioni elencate sopra. L'utente deve poter selezionare l'opzione desiderata inserendo il numero corrispondente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 50
#define MAX_PHONE 15
#define MAX_EMAIL 50

typedef struct {
    char nome[MAX_NAME];
    char cognome[MAX_NAME];
    char telefono[MAX_PHONE];
    char email[MAX_EMAIL];
} Contatto;

typedef struct {
    Contatto *contatti;
    int numeroContatti;
    int capacita;
} Rubrica;

void inizializzaRubrica(Rubrica *rubrica) {
    rubrica->numeroContatti = 0;
    rubrica->capacita = 2;
    rubrica->contatti = malloc(rubrica->capacita * sizeof(Contatto));
    if (!rubrica->contatti) {
        printf("Errore di allocazione memoria\n");
        exit(1);
    }
}

void ridimensionaRubrica(Rubrica *rubrica) {
    rubrica->capacita *= 2;
    rubrica->contatti = realloc(rubrica->contatti, rubrica->capacita * sizeof(Contatto));
    if (!rubrica->contatti) {
        printf("Errore di allocazione memoria\n");
        exit(1);
    }
}

void aggiungiContatto(Rubrica *rubrica) {
    if (rubrica->numeroContatti == rubrica->capacita) {
        ridimensionaRubrica(rubrica);
    }

    Contatto nuovoContatto;
    printf("Inserisci nome: ");
    scanf("%s", nuovoContatto.nome);
    printf("Inserisci cognome: ");
    scanf("%s", nuovoContatto.cognome);
    printf("Inserisci telefono: ");
    scanf("%s", nuovoContatto.telefono);
    printf("Inserisci email: ");
    scanf("%s", nuovoContatto.email);

    rubrica->contatti[rubrica->numeroContatti] = nuovoContatto;
    rubrica->numeroContatti++;
}

void visualizzaContatti(const Rubrica *rubrica) {
    for (int i = 0; i < rubrica->numeroContatti; i++) {
        printf("Contatto %d:\n", i + 1);
        printf("Nome: %s\n", rubrica->contatti[i].nome);
        printf("Cognome: %s\n", rubrica->contatti[i].cognome);
        printf("Telefono: %s\n", rubrica->contatti[i].telefono);
        printf("Email: %s\n", rubrica->contatti[i].email);
        printf("\n");
    }
}

int trovaContatto(const Rubrica *rubrica, const char *nome, const char *cognome) {
    for (int i = 0; i < rubrica->numeroContatti; i++) {
        if (strcmp(rubrica->contatti[i].nome, nome) == 0 && strcmp(rubrica->contatti[i].cognome, cognome) == 0) {
            return i;
        }
    }
    return -1;
}

void aggiornaContatto(Rubrica *rubrica) {
    char nome[MAX_NAME], cognome[MAX_NAME];
    printf("Inserisci il nome del contatto da aggiornare: ");
    scanf("%s", nome);
    printf("Inserisci il cognome del contatto da aggiornare: ");
    scanf("%s", cognome);

    int indice = trovaContatto(rubrica, nome, cognome);
    if (indice == -1) {
        printf("Contatto non trovato\n");
        return;
    }

    printf("Inserisci nuovo telefono: ");
    scanf("%s", rubrica->contatti[indice].telefono);
    printf("Inserisci nuova email: ");
    scanf("%s", rubrica->contatti[indice].email);
}

void cancellaContatto(Rubrica *rubrica) {
    char nome[MAX_NAME], cognome[MAX_NAME];
    printf("Inserisci il nome del contatto da cancellare: ");
    scanf("%s", nome);
    printf("Inserisci il cognome del contatto da cancellare: ");
    scanf("%s", cognome);

    int indice = trovaContatto(rubrica, nome, cognome);
    if (indice == -1) {
        printf("Contatto non trovato\n");
        return;
    }

    for (int i = indice; i < rubrica->numeroContatti - 1; i++) {
        rubrica->contatti[i] = rubrica->contatti[i + 1];
    }
    rubrica->numeroContatti--;
}

void liberaRubrica(Rubrica *rubrica) {
    free(rubrica->contatti);
}

int main() {
    Rubrica rubrica;
    inizializzaRubrica(&rubrica);

    int scelta;
    do {
        printf("1. Aggiungi contatto\n");
        printf("2. Visualizza contatti\n");
        printf("3. Cerca contatto\n");
        printf("4. Aggiorna contatto\n");
        printf("5. Cancella contatto\n");
        printf("6. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                aggiungiContatto(&rubrica);
                break;
            case 2:
                visualizzaContatti(&rubrica);
                break;
            case 3: {
                char nome[MAX_NAME], cognome[MAX_NAME];
                printf("Inserisci nome: ");
                scanf("%s", nome);
                printf("Inserisci cognome: ");
                scanf("%s", cognome);
                int indice = trovaContatto(&rubrica, nome, cognome);
                if (indice != -1) {
                    printf("Contatto trovato:\n");
                    printf("Nome: %s\n", rubrica.contatti[indice].nome);
                    printf("Cognome: %s\n", rubrica.contatti[indice].cognome);
                    printf("Telefono: %s\n", rubrica.contatti[indice].telefono);
                    printf("Email: %s\n", rubrica.contatti[indice].email);
                } else {
                    printf("Contatto non trovato\n");
                }
                break;
            }
            case 4:
                aggiornaContatto(&rubrica);
                break;
            case 5:
                cancellaContatto(&rubrica);
                break;
            case 6:
                liberaRubrica(&rubrica);
                printf("Arrivederci!\n");
                break;
            default:
                printf("Opzione non valida\n");
        }
    } while (scelta != 6);

    return 0;
}
