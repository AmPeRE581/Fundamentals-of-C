/*Trasformare il codice Lua in C richiede una serie di adattamenti, 
poiché Lua è un linguaggio di scripting di alto livello mentre C 
è un linguaggio di programmazione di basso livello. Tuttavia, 
possiamo mantenere la logica e la struttura del gioco.

Questo codice in C mantiene la stessa logica del codice Lua, 
adattato per essere eseguibile in un ambiente C. 
Utilizza le strutture per rappresentare il personaggio e il nemico, 
e funzioni per creare i personaggi, gestire i combattimenti e l'avanzamento del gioco.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struttura per il personaggio
typedef struct {
    char nome[50];
    int salute;
    int attacco;
    int difesa;
    int esperienza;
    int livello;
} Personaggio;

// Struttura per il nemico
typedef struct {
    char nome[50];
    int salute;
    int attacco;
    int difesa;
    int livello;
} Nemico;

// Funzione per creare un nuovo personaggio
Personaggio crea_personaggio(const char* nome) {
    Personaggio p;
    strncpy(p.nome, nome, sizeof(p.nome));
    p.salute = 100;
    p.attacco = 10;
    p.difesa = 5;
    p.esperienza = 0;
    p.livello = 1;
    return p;
}

// Funzione per creare un nuovo nemico
Nemico crea_nemico(int livello) {
    Nemico n;
    snprintf(n.nome, sizeof(n.nome), "Nemico di livello %d", livello);
    n.salute = livello * 20;
    n.attacco = livello * 5;
    n.difesa = livello * 2;
    n.livello = livello;
    return n;
}

// Funzione per il combattimento
void combattimento(Personaggio* giocatore, Nemico* nemico) {
    printf("Inizia il combattimento tra %s e %s!\n", giocatore->nome, nemico->nome);
    while (giocatore->salute > 0 && nemico->salute > 0) {
        // Turno del giocatore
        printf("%s Attacca!\n", giocatore->nome);
        int danno = giocatore->attacco - nemico->difesa;
        if (danno < 0) danno = 0;
        nemico->salute -= danno;
        printf("%s subisce %d danni. Salute rimanente: %d\n", nemico->nome, danno, nemico->salute);

        if (nemico->salute <= 0) {
            printf("%s è stato sconfitto!\n", nemico->nome);
            giocatore->esperienza += nemico->livello * 10;
            printf("%s guadagna %d esperienza.\n", giocatore->nome, nemico->livello * 10);
            if (giocatore->esperienza >= giocatore->livello * 100) {
                giocatore->livello += 1;
                giocatore->salute += 20;
                giocatore->attacco += 5;
                giocatore->difesa += 2;
                printf("%s sale di livello! Livello attuale: %d\n", giocatore->nome, giocatore->livello);
            }
            break;
        }

        // Turno del nemico
        printf("%s Attacca!\n", nemico->nome);
        danno = nemico->attacco - giocatore->difesa;
        if (danno < 0) danno = 0;
        giocatore->salute -= danno;
        printf("%s subisce %d danni. Salute rimanente: %d\n", giocatore->nome, danno, giocatore->salute);

        if (giocatore->salute <= 0) {
            printf("%s è stato sconfitto!\n", giocatore->nome);
            break;
        }
    }
}

// Funzione principale del gioco
void gioco() {
    char nome[50];
    printf("Inserisci il nome del tuo personaggio: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Rimuove il newline
    Personaggio giocatore = crea_personaggio(nome);

    while (giocatore.salute > 0) {
        printf("Un nuovo nemico appare!\n");
        Nemico nemico = crea_nemico(giocatore.livello);
        combattimento(&giocatore, &nemico);

        if (giocatore.salute > 0) {
            printf("Vuoi continuare a combattere? (si/no): ");
            char scelta[3];
            fgets(scelta, sizeof(scelta), stdin);
            scelta[strcspn(scelta, "\n")] = '\0'; // Rimuove il newline
            if (strcmp(scelta, "si") != 0) {
                break;
            }
        }
    }

    printf("Gioco terminato. Grazie per aver giocato!\n");
}

// Avvia il gioco
int main() {
    gioco();
    return 0;
}
