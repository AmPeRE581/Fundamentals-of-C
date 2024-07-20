/*Esercizio20: Conta le occorrenze delle parole
Scrivi un programma che prenda una stringa di testo inserita dall'utente e conti il numero di occorrenze di ciascuna parola nella stringa. Il programma deve poi stampare ogni parola con il relativo conteggio.

Requisiti:
- Il programma deve chiedere all'utente di inserire una stringa di testo.
- Il programma deve convertire la stringa in una lista di parole.
- Il programma deve contare quante volte ogni parola appare nella stringa.
- Il programma deve stampare ogni parola con il relativo conteggio.

- Ignorare la distinzione tra maiuscole e minuscole (ad esempio, "Cane" e "cane" devono essere contati come la stessa parola).
- Rimuovere la punteggiatura prima di contare le parole.*/

/*By ChatGPT*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_PAROLE 100
#define MAX_LUNGHEZZA_PAROLA 50

// Struttura per memorizzare una parola e il relativo conteggio
typedef struct {
    char parola[MAX_LUNGHEZZA_PAROLA];
    int conteggio;
} OccorrenzaParola;

// Funzione per convertire una stringa in minuscolo
void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Funzione per rimuovere la punteggiatura da una stringa
void rimuovi_punteggiatura(char *str) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) || isspace(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

// Funzione per trovare l'indice di una parola nella lista di occorrenze
int trova_indice(OccorrenzaParola occorrenze[], int size, char *parola) {
    for (int i = 0; i < size; i++) {
        if (strcmp(occorrenze[i].parola, parola) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    char testo[1000];
    OccorrenzaParola occorrenze[MAX_PAROLE];
    int num_parole = 0;

    // Chiedi all'utente di inserire una stringa di testo
    printf("Inserisci una stringa di testo: ");
    fgets(testo, sizeof(testo), stdin);

    // Converti il testo in minuscolo
    to_lowercase(testo);

    // Rimuovi la punteggiatura
    rimuovi_punteggiatura(testo);

    // Dividi il testo in parole
    char *parola = strtok(testo, " ");
    while (parola != NULL) {
        // Trova l'indice della parola nella lista di occorrenze
        int indice = trova_indice(occorrenze, num_parole, parola);
        if (indice == -1) {
            // Se la parola non è già nella lista, aggiungila
            strcpy(occorrenze[num_parole].parola, parola);
            occorrenze[num_parole].conteggio = 1;
            num_parole++;
        } else {
            // Se la parola è già nella lista, incrementa il conteggio
            occorrenze[indice].conteggio++;
        }
        parola = strtok(NULL, " ");
    }

    // Stampa ogni parola con il relativo conteggio
    for (int i = 0; i < num_parole; i++) {
        printf("%s: %d\n", occorrenze[i].parola, occorrenze[i].conteggio);
    }

    return 0;
}
