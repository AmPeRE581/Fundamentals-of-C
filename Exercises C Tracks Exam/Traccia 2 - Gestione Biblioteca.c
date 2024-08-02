/*Traccia d'Esame: Gestione di una Biblioteca

Descrizione del Problema
Progettare e implementare un programma in linguaggio C per la gestione di una biblioteca. Il programma deve consentire di:

- Inserire un nuovo libro: Ogni libro è caratterizzato da un titolo, un autore, un codice ISBN e l'anno di pubblicazione.
- Ricercare un libro: La ricerca può essere effettuata per titolo o per autore.
- Eliminare un libro: Permettere di rimuovere un libro dalla collezione utilizzando il codice ISBN.
- Visualizzare l'elenco dei libri: Visualizzare la lista di tutti i libri presenti nella biblioteca, ordinati per anno di pubblicazione.
- Salvare e caricare i dati: Salvare l'elenco dei libri su un file di testo e caricare l'elenco all'avvio del programma.


-- Requisiti
- Struttura Dati: Utilizzare una struttura dati adeguata per rappresentare un libro (ad esempio, una struct). I libri possono essere gestiti tramite un array dinamico o una lista collegata.
- Interazione con l'utente: Implementare un semplice menu per consentire all'utente di scegliere l'operazione da effettuare.
- Gestione degli Errori: Gestire eventuali errori, come la ricerca di un libro non presente o il tentativo di rimuovere un libro inesistente.
- Persistenza dei Dati: Implementare funzionalità di salvataggio su file e caricamento da file, in modo che i dati dei libri siano conservati tra una sessione e l'altra del programma.

Indicazioni Aggiuntive

- Inserimento Libro:

Richiedere all'utente il titolo, l'autore, il codice ISBN e l'anno di pubblicazione.
Verificare che il codice ISBN non sia già presente nella biblioteca.

- Ricerca Libro:

Permettere la ricerca per titolo o autore. La ricerca deve essere case-insensitive.

- Eliminazione Libro:

Richiedere all'utente il codice ISBN del libro da eliminare.

- Visualizzazione Elenco:

I libri devono essere visualizzati con tutte le loro informazioni, ordinati per anno di pubblicazione.

- Salvataggio e Caricamento:

Utilizzare file di testo per salvare i dati, con un formato semplice (ad esempio, un libro per riga con i campi separati da un delimitatore come la virgola).*/

#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100
#define MAX_ISBN_LENGTH 20

// Dichiarazione delle variabili globali
char titles[MAX_BOOKS][MAX_TITLE_LENGTH];
char authors[MAX_BOOKS][MAX_AUTHOR_LENGTH];
char isbns[MAX_BOOKS][MAX_ISBN_LENGTH];
int years[MAX_BOOKS];
int book_count = 0;

// Funzione per inserire un nuovo libro
void insert_book() {
    if (book_count >= MAX_BOOKS) {
        printf("La biblioteca è piena.\n");
        return;
    }
    printf("Inserisci il titolo del libro: ");
    fgets(titles[book_count], MAX_TITLE_LENGTH, stdin);
    titles[book_count][strcspn(titles[book_count], "\n")] = 0;

    printf("Inserisci l'autore del libro: ");
    fgets(authors[book_count], MAX_AUTHOR_LENGTH, stdin);
    authors[book_count][strcspn(authors[book_count], "\n")] = 0;

    printf("Inserisci il codice ISBN: ");
    fgets(isbns[book_count], MAX_ISBN_LENGTH, stdin);
    isbns[book_count][strcspn(isbns[book_count], "\n")] = 0;

    printf("Inserisci l'anno di pubblicazione: ");
    scanf("%d", &years[book_count]);
    getchar(); // Rimuovere il newline lasciato da scanf

    book_count++;
    printf("Libro aggiunto con successo!\n");
}

// Funzione per cercare un libro per titolo o autore
void search_book() {
    char search[MAX_TITLE_LENGTH];
    printf("Inserisci il titolo o l'autore da cercare: ");
    fgets(search, MAX_TITLE_LENGTH, stdin);
    search[strcspn(search, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < book_count; i++) {
        if (strstr(titles[i], search) != NULL || strstr(authors[i], search) != NULL) {
            printf("Libro trovato: %s di %s (ISBN: %s, Anno: %d)\n",
                   titles[i], authors[i], isbns[i], years[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("Nessun libro trovato.\n");
    }
}

// Funzione per eliminare un libro tramite ISBN
void delete_book() {
    char isbn[MAX_ISBN_LENGTH];
    printf("Inserisci il codice ISBN del libro da eliminare: ");
    fgets(isbn, MAX_ISBN_LENGTH, stdin);
    isbn[strcspn(isbn, "\n")] = 0;

    int found = -1;
    for (int i = 0; i < book_count; i++) {
        if (strcmp(isbns[i], isbn) == 0) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        for (int i = found; i < book_count - 1; i++) {
            strcpy(titles[i], titles[i + 1]);
            strcpy(authors[i], authors[i + 1]);
            strcpy(isbns[i], isbns[i + 1]);
            years[i] = years[i + 1];
        }
        book_count--;
        printf("Libro eliminato con successo.\n");
    } else {
        printf("Libro non trovato.\n");
    }
}

// Funzione per visualizzare l'elenco dei libri
void list_books() {
    if (book_count == 0) {
        printf("Nessun libro presente nella biblioteca.\n");
        return;
    }
    for (int i = 0; i < book_count; i++) {
        printf("%d. Titolo: %s, Autore: %s, ISBN: %s, Anno: %d\n",
               i + 1, titles[i], authors[i], isbns[i], years[i]);
    }
}

// Funzione per salvare i dati su file
void save_books() {
    FILE *file = fopen("books.txt", "w");
    if (file == NULL) {
        printf("Errore nell'apertura del file per il salvataggio.\n");
        return;
    }
    for (int i = 0; i < book_count; i++) {
        fprintf(file, "%s,%s,%s,%d\n", titles[i], authors[i], isbns[i], years[i]);
    }
    fclose(file);
    printf("Dati salvati con successo.\n");
}

// Funzione per caricare i dati da file
void load_books() {
    FILE *file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("Nessun file di dati trovato.\n");
        return;
    }

    book_count = 0;
    while (fscanf(file, "%99[^,],%99[^,],%19[^,],%d\n", titles[book_count], authors[book_count], isbns[book_count], &years[book_count]) == 4) {
        book_count++;
    }
    fclose(file);
    printf("Dati caricati con successo.\n");
}

// Funzione principale
int main() {
    int choice;
    load_books();
    do {
        printf("\nBenvenuto nella Biblioteca!\n");
        printf("1. Inserisci un nuovo libro\n");
        printf("2. Ricerca un libro\n");
        printf("3. Elimina un libro\n");
        printf("4. Visualizza l'elenco dei libri\n");
        printf("5. Salva e esci\n");
        printf("Seleziona un'opzione: ");
        scanf("%d", &choice);
        getchar(); // Rimuovere il newline lasciato da scanf

        switch (choice) {
            case 1:
                insert_book();
                break;
            case 2:
                search_book();
                break;
            case 3:
                delete_book();
                break;
            case 4:
                list_books();
                break;
            case 5:
                save_books();
                printf("Arrivederci!\n");
                break;
            default:
                printf("Opzione non valida.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}