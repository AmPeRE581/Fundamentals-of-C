/*Esercizio4_3: Scrivere un programma per trasformare le lettere maiuscole in minuscole.*/

#include <stdio.h>
#include <ctype.h> // Per le funzioni tolower() e toupper()
#include <string.h> // Per la funzione strlen()

// Funzione per rimuovere il carattere di nuova linea
void rimuoviNuovaLinea(char* str) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

// Funzione per trasformare le maiuscole in minuscole e viceversa
void trasformaStringa(char* str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        // Non c'è bisogno di gestire caratteri speciali o spazi: rimangono invariati
    }
}

// Funzione per gestire errori in input
int inputValido(const char* str) {
    if (str == NULL || strlen(str) == 0) {
        return 0; // Input non valido
    }
    return 1; // Input valido
}

int main() {
    char str[100]; // Array per memorizzare la stringa di input

    printf("Inserisci una stringa: ");
    fgets(str, sizeof(str), stdin); // Legge una riga di testo

    // Rimuove il carattere di nuova linea dall'input
    rimuoviNuovaLinea(str);

    // Verifica se l'input è valido
    if (!inputValido(str)) {
        printf("Errore: Input non valido.\n");
        return 1; // Termina il programma con un errore
    }

    // Trasforma maiuscole in minuscole e viceversa
    trasformaStringa(str);

    printf("Stringa trasformata: %s\n", str);

    return 0;
}

/*-------------------------------------------------------------------------------------------------------------------------------*/

int main(){
    char c;
    printf("Inserire un carattere maiuscolo: ");
    scanf("%c", &c);
    printf("Il carattere minuscolo: %c\n", c+32);
}