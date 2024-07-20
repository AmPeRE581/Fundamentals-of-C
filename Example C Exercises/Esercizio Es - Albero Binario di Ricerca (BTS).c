#include <stdio.h>
#include <stdlib.h>

// Struttura per un nodo dell'albero binario
struct Nodo {
    int dato;
    struct Nodo* sinistro;
    struct Nodo* destro;
};

// Funzione per creare un nuovo nodo
struct Nodo* nuovoNodo(int dato) {
    struct Nodo* nodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nodo->dato = dato;
    nodo->sinistro = NULL;
    nodo->destro = NULL;
    return nodo;
}

// Funzione per inserire un nuovo nodo nell'albero binario di ricerca
struct Nodo* inserisci(struct Nodo* nodo, int dato) {
    if (nodo == NULL) {
        return nuovoNodo(dato);
    }
    if (dato < nodo->dato) {
        nodo->sinistro = inserisci(nodo->sinistro, dato);
    } else if (dato > nodo->dato) {
        nodo->destro = inserisci(nodo->destro, dato);
    }
    return nodo;
}

// Funzione per cercare un nodo nell'albero binario di ricerca
struct Nodo* cerca(struct Nodo* nodo, int dato) {
    if (nodo == NULL || nodo->dato == dato) {
        return nodo;
    }
    if (dato < nodo->dato) {
        return cerca(nodo->sinistro, dato);
    } else {
        return cerca(nodo->destro, dato);
    }
}

// Funzione per trovare il nodo con il valore minimo
struct Nodo* minValueNodo(struct Nodo* nodo) {
    struct Nodo* current = nodo;
    while (current && current->sinistro != NULL) {
        current = current->sinistro;
    }
    return current;
}

// Funzione per cancellare un nodo dall'albero binario di ricerca
struct Nodo* cancella(struct Nodo* root, int dato) {
    if (root == NULL) return root;
    if (dato < root->dato) {
        root->sinistro = cancella(root->sinistro, dato);
    } else if (dato > root->dato) {
        root->destro = cancella(root->destro, dato);
    } else {
        if (root->sinistro == NULL) {
            struct Nodo* temp = root->destro;
            free(root);
            return temp;
        } else if (root->destro == NULL) {
            struct Nodo* temp = root->sinistro;
            free(root);
            return temp;
        }
        struct Nodo* temp = minValueNodo(root->destro);
        root->dato = temp->dato;
        root->destro = cancella(root->destro, temp->dato);
    }
    return root;
}

// Funzione per stampare l'albero binario di ricerca in ordine
void stampaInOrdine(struct Nodo* root) {
    if (root != NULL) {
        stampaInOrdine(root->sinistro);
        printf("%d ", root->dato);
        stampaInOrdine(root->destro);
    }
}

int main() {
    struct Nodo* root = NULL;
    int scelta, dato;

    do {
        printf("\nMenu:\n");
        printf("1. Inserisci un nodo\n");
        printf("2. Cerca un nodo\n");
        printf("3. Cancella un nodo\n");
        printf("4. Stampa l'albero (In-Ordine)\n");
        printf("5. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                printf("Inserisci il valore del nodo da inserire: ");
                scanf("%d", &dato);
                root = inserisci(root, dato);
                break;
            case 2:
                printf("Inserisci il valore del nodo da cercare: ");
                scanf("%d", &dato);
                if (cerca(root, dato) != NULL) {
                    printf("Nodo trovato.\n");
                } else {
                    printf("Nodo non trovato.\n");
                }
                break;
            case 3:
                printf("Inserisci il valore del nodo da cancellare: ");
                scanf("%d", &dato);
                root = cancella(root, dato);
                break;
            case 4:
                printf("Albero (In-Ordine): ");
                stampaInOrdine(root);
                printf("\n");
                break;
            case 5:
                printf("Uscita in corso...\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
                break;
        }
    } while (scelta != 5);

    return 0;
}

