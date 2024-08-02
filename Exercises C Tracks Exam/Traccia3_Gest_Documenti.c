#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void add_document() {
    if (document_count >= MAX_DOCUMENTS) {
        printf("Limite massimo di documenti raggiunto!\n");
        return;
    }

    Document new_document;

    printf("Inserisci il titolo del documento: ");
    fgets(new_document.title, MAX_TITLE_LENGTH, stdin);
    new_document.title[strcspn(new_document.title, "\n")] = '\0'; // Rimuove il newline

    printf("Inserisci l'autore del documento: ");
    fgets(new_document.author, MAX_AUTHOR_LENGTH, stdin);
    new_document.author[strcspn(new_document.author, "\n")] = '\0'; // Rimuove il newline

    printf("Inserisci l'anno di pubblicazione: ");
    scanf("%d", &new_document.year);
    getchar(); // Per consumare il newline rimasto da scanf

    documents[document_count++] = new_document;
    printf("Documento aggiunto con successo!\n");
}

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
        scanf("%d", &choice);
        getchar(); // Consuma il newline dopo scanf

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