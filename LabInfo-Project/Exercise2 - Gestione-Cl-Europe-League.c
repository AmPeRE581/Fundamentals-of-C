/*Per creare un progetto in C che consenta di vedere in diretta una classifica completa di tutte le partite dell'Europa League, comprese le partite future e i risultati, sarà necessario integrare diverse funzionalità:

Gestione dei dati delle partite e dei risultati
Aggiornamento dei dati in tempo reale
Visualizzazione della classifica e dei risultati
Per realizzare un progetto di questo tipo, possiamo simulare l'aggiornamento dei dati in tempo reale poiché un progetto in C puro non è ottimale per la gestione delle chiamate API e aggiornamenti dinamici. In un contesto reale, sarebbe più comune utilizzare linguaggi come Python per la parte di fetching e aggiornamento dei dati da API di terze parti.

Struttura del progetto
Struct per le squadre e le partite
Funzioni per aggiungere, aggiornare e visualizzare le partite
Funzione per calcolare e visualizzare la classifica
Menu interattivo per l'utente*/

/*1.Definizione delle strutture*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TEAM_NAME_LENGTH 50
#define MAX_MATCHES 100

typedef struct {
    char home_team[MAX_TEAM_NAME_LENGTH];
    char away_team[MAX_TEAM_NAME_LENGTH];
    int home_score;
    int away_score;
    int match_played;
} Match;

typedef struct {
    char name[MAX_TEAM_NAME_LENGTH];
    int points;
    int matches_played;
    int goals_scored;
    int goals_conceded;
} Team;

Match matches[MAX_MATCHES];
Team teams[MAX_MATCHES];
int match_count = 0;
int team_count = 0;

/*2. Funzioni per gestire le partite*/

void addMatch() {
    if (match_count >= MAX_MATCHES) {
        printf("Limite massimo di partite raggiunto!\n");
        return;
    }

    printf("Inserisci il nome della squadra di casa: ");
    scanf("%s", matches[match_count].home_team);
    printf("Inserisci il nome della squadra ospite: ");
    scanf("%s", matches[match_count].away_team);
    printf("Inserisci il punteggio della squadra di casa: ");
    scanf("%d", &matches[match_count].home_score);
    printf("Inserisci il punteggio della squadra ospite: ");
    scanf("%d", &matches[match_count].away_score);

    matches[match_count].match_played = 1;
    match_count++;
    printf("Partita aggiunta con successo!\n");
}

void addTeam(const char* team_name) {
    for (int i = 0; i < team_count; i++) {
        if (strcmp(teams[i].name, team_name) == 0) {
            return;
        }
    }

    strcpy(teams[team_count].name, team_name);
    teams[team_count].points = 0;
    teams[team_count].matches_played = 0;
    teams[team_count].goals_scored = 0;
    teams[team_count].goals_conceded = 0;
    team_count++;
}

void updateTeams() {
    for (int i = 0; i < match_count; i++) {
        if (matches[i].match_played) {
            addTeam(matches[i].home_team);
            addTeam(matches[i].away_team);

            for (int j = 0; j < team_count; j++) {
                if (strcmp(teams[j].name, matches[i].home_team) == 0) {
                    teams[j].matches_played++;
                    teams[j].goals_scored += matches[i].home_score;
                    teams[j].goals_conceded += matches[i].away_score;

                    if (matches[i].home_score > matches[i].away_score) {
                        teams[j].points += 3;
                    } else if (matches[i].home_score == matches[i].away_score) {
                        teams[j].points += 1;
                    }
                } else if (strcmp(teams[j].name, matches[i].away_team) == 0) {
                    teams[j].matches_played++;
                    teams[j].goals_scored += matches[i].away_score;
                    teams[j].goals_conceded += matches[i].home_score;

                    if (matches[i].away_score > matches[i].home_score) {
                        teams[j].points += 3;
                    } else if (matches[i].away_score == matches[i].home_score) {
                        teams[j].points += 1;
                    }
                }
            }
        }
    }
}

void displayMatches() {
    for (int i = 0; i < match_count; i++) {
        printf("%s %d - %d %s\n", matches[i].home_team, matches[i].home_score, matches[i].away_score, matches[i].away_team);
    }
}

void displayStandings() {
    updateTeams();

    printf("\n--- Classifica Europa League ---\n");
    for (int i = 0; i < team_count; i++) {
        printf("%s - Punti: %d, Partite giocate: %d, Gol fatti: %d, Gol subiti: %d\n", teams[i].name, teams[i].points, teams[i].matches_played, teams[i].goals_scored, teams[i].goals_conceded);
    }
}

/*3.Menù Interattivo*/

void menu() {
    int choice;

    do {
        printf("\n--- Gestione Classifica Europa League ---\n");
        printf("1. Aggiungi partita\n");
        printf("2. Visualizza partite\n");
        printf("3. Visualizza classifica\n");
        printf("4. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMatch();
                break;
            case 2:
                displayMatches();
                break;
            case 3:
                displayStandings();
                break;
            case 4:
                printf("Uscita...\n");
                break;
            default:
                printf("Opzione non valida! Riprova.\n");
        }
    } while (choice != 4);
}

int main() {
    menu();
    return 0;
}


/*Note Aggiuntive
- Il programma simula la gestione di partite e la visualizzazione della classifica.
- I dati delle partite devono essere inseriti manualmente.
- In un contesto reale, per ottenere dati in tempo reale, sarebbe necessario utilizzare API web (ad esempio API sportive), cosa che va oltre le capacità di un programma C puro e richiederebbe l'integrazione con linguaggi di scripting come Python o JavaScript per le richieste HTTP e la gestione dei dati in tempo reale.
- Questo progetto può essere espanso ulteriormente aggiungendo funzionalità come il salvataggio e il caricamento dei dati da file, o un'interfaccia grafica.*/

