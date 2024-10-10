/*Traccia 1: Gestione di un negozio di libri

-- Problema: Simulare un piccolo negozio di libri.

-- Requisiti:

1.Creare una struttura per rappresentare un libro (titolo, autore, prezzo, quantità in magazzino).
2.Creare un array di strutture per rappresentare il catalogo del negozio.

-- Implementare le seguenti funzioni:

1.Aggiungere un nuovo libro al catalogo.
2.Cercare un libro per titolo o autore.
3.Vendere un libro (aggiornare la quantità in magazzino).
4.Stampare il catalogo completo o parziale.

-- Sviluppo:

1.Utilizza array o puntatori per gestire il catalogo.
2.Implementa funzioni ben definite per ogni operazione.
3.Gestisci eventuali errori (libro non trovato, quantità insufficiente).*/

#include <stdio.h>
#include <string.h>

#define MAX_LIBRI 100

/*Struttura per rappresentare un libro all'interno della libreria*/
struct Libro{
    char titolo[50];
    char autore[500];
    float prezzo;
    int quantità;
}

/*Funzioni Prototipi*/

void aggiungiLibro(struct Libro libri[], int *numLibri);
void cercaLibro(struct Libro libri[], int numLibri);
void vendiLibro(struct Libro libri[], int numLibri);
void stampaCatalogo(struct Libro libri[], int numLibri);

int main(){
    struct Libro libreria[MAX_LIBRI];
    int numLibri=0;
    int scelta;

    do{
        printf("\nMenù:\n");
        printf("1. Aggiungi Libro\n");
        printf("2. Cerca Libro\n");
        printf("3. Vendi Libro\n");
        printf("4.Stampa Catalogo\n");
        printf("5. Esci\n");

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
    }

    while(scelta != 5);

    return 0;
}

void aggiungiLibro(struct Libro libri[], int *numLibri){
    if(*numLibri == MAX_LIBRI){
        printf("Catalogo pieno.\n");
        return;
    }

    printf("Inserisci il titolo: ");
    scanf("%s", libri[*numLibri].titolo);

    printf("Inserisci Autore: ");
    scanf("%s", libri[*numLibri].autore);

    printf("Inserisci il prezzo: ");
    scanf("%f", libri[*numLibri].prezzo);

    printf("Inserisci la quantità: ");
    scanf("%d", &libri[*numLibri].quantità);
    (*numLibri)++;
    
    printf("Libro aggiunto correttamente.\n");
}