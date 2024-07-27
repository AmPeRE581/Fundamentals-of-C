/*Esercizio41: Scrivere un programma in c che consente di fare conversioni binario decimale e decimale binario*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Funzione per convertire un numero binario in decimale
int binarioADecimale(const char *binario) {
    int decimale = 0;
    int lunghezza = strlen(binario);
    for (int i = 0; i < lunghezza; ++i) {
        if (binario[lunghezza - i - 1] == '1') {
            decimale += pow(2, i);
        }
    }
    return decimale;
}

// Funzione per convertire un numero decimale in binario
void decimaleABinario(int decimale, char *binario) {
    int indice = 0;
    if (decimale == 0) {
        strcpy(binario, "0");
        return;
    }
    while (decimale > 0) {
        binario[indice++] = (decimale % 2) + '0';
        decimale /= 2;
    }
    binario[indice] = '\0';
    
    // Invertire la stringa
    for (int i = 0; i < indice / 2; ++i) {
        char temp = binario[i];
        binario[i] = binario[indice - i - 1];
        binario[indice - i - 1] = temp;
    }
}

int main() {
    int scelta;
    char binario[65];
    int decimale;

    printf("Scegli l'operazione:\n");
    printf("1. Binario a Decimale\n");
    printf("2. Decimale a Binario\n");
    printf("Scelta: ");
    scanf("%d", &scelta);

    if (scelta == 1) {
        printf("Inserisci un numero binario: ");
        scanf("%s", binario);
        decimale = binarioADecimale(binario);
        printf("Il numero decimale è: %d\n", decimale);
    } else if (scelta == 2) {
        printf("Inserisci un numero decimale: ");
        scanf("%d", &decimale);
        decimaleABinario(decimale, binario);
        printf("Il numero binario è: %s\n", binario);
    } else {
        printf("Scelta non valida.\n");
    }

    return 0;
}