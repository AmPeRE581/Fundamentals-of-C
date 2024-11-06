#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX_DOCUMENTS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100

typedef struct {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int year;
} Document;

Document documents[MAX_DOCUMENTS];
int document_count = 0;

// Funzione per controllare se una stringa è vuota o contiene solo spazi
int is_empty(const char *str) {
    while (*str != '\0') {
        if (!isspace(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}

// Funzione per aggiungere un documento
void add_document() {
    if (document_count >= MAX_DOCUMENTS) {
        printf("Limite massimo di documenti raggiunto!\n");
        return;
    }

    Document new_document;

    // Inserimento e validazione del titolo
    do {
        printf("Inserisci il titolo del documento: ");
        fgets(new_document.title, MAX_TITLE_LENGTH, stdin);
        new_document.title[strcspn(new_document.title, "\n")] = '\0'; // Rimuove il newline
        if (is_empty(new_document.title)) {
            printf("Il titolo non può essere vuoto. Riprova.\n");
        }
    } while (is_empty(new_document.title));

    // Inserimento e validazione dell'autore
    do {
        printf("Inserisci l'autore del documento: ");
        fgets(new_document.author, MAX_AUTHOR_LENGTH, stdin);
        new_document.author[strcspn(new_document.author, "\n")] = '\0'; // Rimuove il newline
        if (is_empty(new_document.author)) {
            printf("L'autore non può essere vuoto. Riprova.\n");
        }
    } while (is_empty(new_document.author));

    // Inserimento e validazione dell'anno
    do {
        printf("Inserisci l'anno di pubblicazione: ");
        int res = scanf("%d", &new_document.year);
        getchar(); // Consuma il newline rimasto da scanf

        if (res != 1 || new_document.year <= 0 || new_document.year > 2024) {
            printf("Anno non valido. Inserisci un anno positivo e plausibile.\n");
            // Consuma eventuali input residui
            while (getchar() != '\n');
        } else {
            break;
        }
    } while (1);

    documents[document_count++] = new_document;
    printf("Documento aggiunto con successo!\n");
}

// Funzione per elencare tutti i documenti
void list_documents() {
    if (document_count == 0) {
        printf("Nessun documento disponibile.\n");
        return;
    }

    for (int i = 0; i < document_count; i++) {
        printf("Documento %d:\n", i + 1);
        printf("  Titolo: %s\n", documents[i].title);
        printf("  Autore: %s\n", documents[i].author);
        printf("  Anno: %d\n", documents[i].year);
    }
}

// Funzione per cercare un documento
void search_document() {
    char search_title[MAX_TITLE_LENGTH];
    printf("Inserisci il titolo del documento da cercare: ");
    fgets(search_title, MAX_TITLE_LENGTH, stdin);
    search_title[strcspn(search_title, "\n")] = '\0'; // Rimuove il newline

    for (int i = 0; i < document_count; i++) {
        if (strcmp(documents[i].title, search_title) == 0) {
            printf("Documento trovato:\n");
            printf("  Titolo: %s\n", documents[i].title);
            printf("  Autore: %s\n", documents[i].author);
            printf("  Anno: %d\n", documents[i].year);
            return;
        }
    }

    printf("Documento non trovato.\n");
}

// Funzione per eliminare un documento
void delete_document() {
    char delete_title[MAX_TITLE_LENGTH];
    printf("Inserisci il titolo del documento da eliminare: ");
    fgets(delete_title, MAX_TITLE_LENGTH, stdin);
    delete_title[strcspn(delete_title, "\n")] = '\0'; // Rimuove il newline

    for (int i = 0; i < document_count; i++) {
        if (strcmp(documents[i].title, delete_title) == 0) {
            for (int j = i; j < document_count - 1; j++) {
                documents[j] = documents[j + 1];
            }
            document_count--;
            printf("Documento eliminato con successo.\n");
            return;
        }
    }

    printf("Documento non trovato.\n");
}

// Funzione per stampare il menu
void print_menu() {
    printf("\nGestione Documenti\n");
    printf("1. Aggiungi documento\n");
    printf("2. Visualizza documenti\n");
    printf("3. Cerca documento\n");
    printf("4. Elimina documento\n");
    printf("5. Esci\n");
    printf("Scelta: ");
}

int main() {
    int choice;

    do {
        print_menu();
        int res = scanf("%d", &choice);
        getchar(); // Consuma il newline dopo scanf

        if (res != 1) {
            printf("Inserisci un numero valido.\n");
            // Consuma eventuali input residui
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                add_document();
                break;
            case 2:
                list_documents();
                break;
            case 3:
                search_document();
                break;
            case 4:
                delete_document();
                break;
            case 5:
                printf("Uscita dal programma...\n");
                break;
            default:
                printf("Scelta non valida!\n");
        }
    } while (choice != 5);

    return 0;
}

//Funzione per il controllo degli errori

void log_error(const char *message){
    FILE *log_file = fopen("error_log.txt", "a");
    if(log_file == NULL){
        printf("Errore nell'apertura del file di log.\n");
        return;
    }
    time_t current_time = time(NULL);
    fprintf(log_file, "[%s] %s\n", ctime(&current_time), message);
    fclose(log_file);
}

//Funzione per eliminare i documenti

void delete_document(){
    char delete_title[MAX_TITLE_LENGTH];
    printf("Inserisci il titolo del documento da eliminare: ");
    fgets(delete_title, MAX_TITLE_LENGTH, stdin);
    delete_title[strcspn(delete_title, "\n")] = '\0';

    for(int i=0; i<document_count; i++){
        if(strcmp(documents[i].title, delete_title) == 0){
            printf("Sei sicuro di voler eliminare il documento '%s'? (s/n):", delete_title);
            char confirmation;
            scanf("%c", &confirmation);
            getchar(); //Consuma il newline

            if(confirmation == 's' || confirmation == 'S'){
                for(int j=i; j<document_count -1; j++){
                    documents[j] = documents[j+1];
                }
                
            }
        }
    }
}