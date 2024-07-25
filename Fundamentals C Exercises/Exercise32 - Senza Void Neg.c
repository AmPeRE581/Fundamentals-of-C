#include <stdio.h>

#define NUOVA_COLLEZIONE 'n'
#define VECCHIA_COLLEZIONE 'v'

// Funzione che calcola il prezzo scontato
float sconto(float prezzo, char collezione) {
    float prezzo_scontato;
    if (collezione == NUOVA_COLLEZIONE) {
        prezzo_scontato = prezzo * 0.95;  // Sconto del 5%
    } else if (collezione == VECCHIA_COLLEZIONE) {
        prezzo_scontato = prezzo * 0.80;  // Sconto del 20%
    } else {
        // In caso di carattere non valido, ritorna il prezzo originale
        printf("Collezione non valida\n");
        prezzo_scontato = prezzo;
    }
    return prezzo_scontato;
}

int main() {
    int x;
    printf("Inserisci il numero di coppie: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("Il numero di coppie deve essere maggiore di zero.\n");
        return 1;
    }

    for (int i = 0; i < x; i++) {
        float prezzo;
        char collezione;
        
        printf("Inserisci il prezzo originale dell'articolo %d: ", i + 1);
        scanf("%f", &prezzo);
        
        printf("Inserisci la collezione dell'articolo %d (n per nuova, v per vecchia): ", i + 1);
        scanf(" %c", &collezione);  // Nota: spazio prima di %c per consumare caratteri bianchi residui

        float prezzo_finale = sconto(prezzo, collezione);
        printf("Prezzo finale dell'articolo %d: %.2f\n", i + 1, prezzo_finale);
    }

    return 0;
}