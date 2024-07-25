#include <stdio.h>
#include <stdbool.h>

#define MAX_N 100  // Definisci una dimensione massima per la matrice

// Funzione per controllare se la somma degli elementi di ogni riga è costante
bool verificaSommaCostante(double matrice[MAX_N][MAX_N], int n) {
    double sommaIniziale = 0.0;
    
    // Calcola la somma degli elementi della prima riga
    for (int j = 0; j < n; j++) {
        sommaIniziale += matrice[0][j];
    }
    
    // Confronta la somma di ogni altra riga con la somma iniziale
    for (int i = 1; i < n; i++) {
        double sommaCorrente = 0.0;
        for (int j = 0; j < n; j++) {
            sommaCorrente += matrice[i][j];
        }
        if (sommaCorrente != sommaIniziale) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int n;
    double matrice[MAX_N][MAX_N];

    printf("Inserisci la dimensione della matrice (nxn): ");
    scanf("%d", &n);

    if (n > MAX_N) {
        printf("La dimensione della matrice supera il massimo consentito di %d\n", MAX_N);
        return 1;
    }

    printf("Inserisci gli elementi della matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matrice[i][j]);
        }
    }

    if (verificaSommaCostante(matrice, n)) {
        printf("La somma degli elementi di ogni riga è costante.\n");
    } else {
        printf("La somma degli elementi di ogni riga non è costante.\n");
    }

    return 0;
}