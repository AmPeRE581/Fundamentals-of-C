/*Va bene, ti propongo un progetto in C per creare una semplice gestione di un inventario di prodotti. Il programma includerà funzionalità per aggiungere, cercare, modificare ed eliminare prodotti, nonché per visualizzare tutti i prodotti presenti.

Struttura del progetto
Struct per i prodotti
Funzioni per aggiungere, cercare, modificare ed eliminare prodotti
Funzione per mostrare tutti i prodotti
Menu interattivo per l'utente*/

/*1.Definizione Struttura*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_PRODUCTS 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int quantity;
    float price;
} Product;

Product inventory[MAX_PRODUCTS];
int product_count = 0;

/*2.Funzioni per gestire i prodotti*/

void addProduct() {
    if (product_count >= MAX_PRODUCTS) {
        printf("Inventario pieno!\n");
        return;
    }

    printf("Inserisci il nome del prodotto: ");
    scanf("%s", inventory[product_count].name);
    printf("Inserisci la quantità: ");
    scanf("%d", &inventory[product_count].quantity);
    printf("Inserisci il prezzo: ");
    scanf("%f", &inventory[product_count].price);

    product_count++;
    printf("Prodotto aggiunto con successo!\n");
}

void searchProduct() {
    char name[MAX_NAME_LENGTH];
    printf("Inserisci il nome del prodotto da cercare: ");
    scanf("%s", name);

    for (int i = 0; i < product_count; i++) {
        if (strcmp(inventory[i].name, name) == 0) {
            printf("Prodotto trovato: %s - Quantità: %d - Prezzo: %.2f\n", inventory[i].name, inventory[i].quantity, inventory[i].price);
            return;
        }
    }

    printf("Prodotto non trovato.\n");
}

void modifyProduct() {
    char name[MAX_NAME_LENGTH];
    printf("Inserisci il nome del prodotto da modificare: ");
    scanf("%s", name);

    for (int i = 0; i < product_count; i++) {
        if (strcmp(inventory[i].name, name) == 0) {
            printf("Inserisci la nuova quantità: ");
            scanf("%d", &inventory[i].quantity);
            printf("Inserisci il nuovo prezzo: ");
            scanf("%f", &inventory[i].price);
            printf("Prodotto modificato con successo!\n");
            return;
        }
    }

    printf("Prodotto non trovato.\n");
}

void deleteProduct() {
    char name[MAX_NAME_LENGTH];
    printf("Inserisci il nome del prodotto da eliminare: ");
    scanf("%s", name);

    for (int i = 0; i < product_count; i++) {
        if (strcmp(inventory[i].name, name) == 0) {
            for (int j = i; j < product_count - 1; j++) {
                inventory[j] = inventory[j + 1];
            }
            product_count--;
            printf("Prodotto eliminato con successo!\n");
            return;
        }
    }

    printf("Prodotto non trovato.\n");
}

void showProducts() {
    if (product_count == 0) {
        printf("Nessun prodotto nell'inventario.\n");
        return;
    }

    for (int i = 0; i < product_count; i++) {
        printf("%s - Quantità: %d - Prezzo: %.2f\n", inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}

/*3. Menù Interattivo*/

void menu() {
    int choice;

    do {
        printf("\n--- Gestione Inventario ---\n");
        printf("1. Aggiungi prodotto\n");
        printf("2. Cerca prodotto\n");
        printf("3. Modifica prodotto\n");
        printf("4. Elimina prodotto\n");
        printf("5. Mostra tutti i prodotti\n");
        printf("6. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct();
                break;
            case 2:
                searchProduct();
                break;
            case 3:
                modifyProduct();
                break;
            case 4:
                deleteProduct();
                break;
            case 5:
                showProducts();
                break;
            case 6:
                printf("Uscita...\n");
                break;
            default:
                printf("Opzione non valida! Riprova.\n");
        }
    } while (choice != 6);
}

int main() {
    menu();
    return 0;
}

/*Questo programma permette di gestire un inventario di prodotti con le operazioni di base. 
Puoi espanderlo aggiungendo ulteriori funzionalità o migliorando l'interfaccia utente 
secondo le tue esigenze.*/
