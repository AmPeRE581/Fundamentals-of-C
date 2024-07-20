/*Esercizio23: Programma che memorizza 30 numeri in una matrice e in un array, e li distingue in base a quante operazioni 
(come somma, sottrazione, moltiplicazione e divisione) si possono eseguire con loro*/

#include <stdio.h>

// Definiamo il numero di elementi e le dimensioni della matrice
#define NUM_ELEMENTS 30
#define ROWS 5
#define COLS 6

// Funzione per distinguere i numeri in base alle operazioni
void analyze_numbers(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Numero: %d\n", numbers[i]);
        printf("Somma: %d + 1 = %d\n", numbers[i], numbers[i] + 1);
        printf("Sottrazione: %d - 1 = %d\n", numbers[i], numbers[i] - 1);
        printf("Moltiplicazione: %d * 2 = %d\n", numbers[i], numbers[i] * 2);
        if (numbers[i] != 0) {
            printf("Divisione: %d / 2 = %.2f\n", numbers[i], numbers[i] / 2.0);
        } else {
            printf("Divisione: Non è possibile dividere per 0\n");
        }
        printf("\n");
    }
}

// Funzione per calcolare le statistiche
void calculate_statistics(int numbers[], int size) {
    int sum = 0, max = numbers[0], min = numbers[0];
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
        if (numbers[i] > max) max = numbers[i];
        if (numbers[i] < min) min = numbers[i];
    }
    double average = (double)sum / size;
    printf("Somma: %d\n", sum);
    printf("Media: %.2f\n", average);
    printf("Massimo: %d\n", max);
    printf("Minimo: %d\n", min);
}

// Funzione per separare e visualizzare i numeri pari e dispari
void separate_even_odd(int numbers[], int size) {
    printf("Numeri Pari: ");
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) printf("%d ", numbers[i]);
    }
    printf("\nNumeri Dispari: ");
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 != 0) printf("%d ", numbers[i]);
    }
    printf("\n");
}

// Funzione per cercare un numero specifico
void search_number(int numbers[], int size, int target) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            printf("Numero %d trovato in posizione %d.\n", target, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Numero %d non trovato.\n", target);
    }
}

int main() {
    int array[NUM_ELEMENTS];
    int matrix[ROWS][COLS];

    // Inserimento dei numeri da parte dell'utente
    printf("Inserisci 30 numeri:\n");
    for (int i = 0; i < NUM_ELEMENTS; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Popoliamo la matrice con i numeri dell'array
    int k = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = array[k];
            k++;
        }
    }

    // Stampiamo l'array
    printf("Array:\n");
    for (int i = 0; i < NUM_ELEMENTS; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    // Stampiamo la matrice
    printf("Matrice:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Analizziamo i numeri nell'array
    printf("Analisi dei numeri:\n");
    analyze_numbers(array, NUM_ELEMENTS);

    // Calcoliamo le statistiche
    printf("Statistiche:\n");
    calculate_statistics(array, NUM_ELEMENTS);

    // Separiamo e visualizziamo i numeri pari e dispari
    printf("Numeri Pari e Dispari:\n");
    separate_even_odd(array, NUM_ELEMENTS);

    // Ricerca di un numero specifico
    int target;
    printf("Inserisci un numero da cercare: ");
    scanf("%d", &target);
    search_number(array, NUM_ELEMENTS, target);

    return 0;
}

/*Spiegazione delle nuove funzionalità:
Inserimento dei numeri da parte dell'utente:

L'utente inserisce 30 numeri uno alla volta. Questi numeri vengono salvati nell'array e successivamente copiati nella matrice.
Calcolo delle statistiche:

La funzione calculate_statistics calcola la somma, la media, il massimo e il minimo dei numeri nell'array.
Visualizzazione dei numeri pari e dispari:

La funzione separate_even_odd separa i numeri pari e dispari e li stampa.
Ricerca di un numero specifico:

La funzione search_number permette all'utente di cercare un numero specifico nell'array e stampa la sua posizione.*/