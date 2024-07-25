/*Esercizio32: Verificare se una matrice 8x8 di interi è una "scacchiera" ovvero se vi sono presenti solo 0 (equivale al colore bianco)
e 1 (equivale al colore nero) alternati tra loro....*/

#include <stdio.h>
#include <stdbool.h>

// Funzione che verifica se una matrice 8x8 è una scacchiera
bool isChessboard(int matrix[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            // Determina il valore corretto per la posizione (i, j)
            int expectedValue = (i + j) % 2;
            if (matrix[i][j] != expectedValue) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    // Esempio di matrice 8x8 che rappresenta una scacchiera
    int matrix[8][8] = {
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0}
    };

    if (isChessboard(matrix)) {
        printf("La matrice è una scacchiera.\n");
    } else {
        printf("La matrice non è una scacchiera.\n");
    }

    return 0;
}

