/*Esercizio27: Problema Bandiera*/

#include <stdio.h>
#include <stdbool.h>

/* -- Funzione che verifica se l'array è ordinato secondo il problema della bandiera --*/
bool isFlagProblem(int arr[], int n) {
int i=0;
int b=0;
int r=0;
int v=0;

/* -- Controlla che 0 sia all'inizio... -- */

while (i < n && arr[i] == 0) {
    i++;v++
}

/* -- Controlla che 1 sia al centro... -- */

while (i < n && arr[i] == 1) {
    i++;b++;
}

/* -- Controlla che tutti i 2 siano alla fine -- */

while (i < n && arr[i] == 2) {
    i++;r++;
}

/* -- Se l'intero array è stato percorso senza problemi, è ordinato correttamente -- */

return (i == n&&v==r&&b==v);

}

/*-------------------------------------------------------------------------------------------------------*/

int main() {
    int arr[] = {0, 0, 1, 1, 2, 2}; // Esempio di array
    int n = sizeof(arr) / sizeof(arr[0]);

if (isFlagProblem(arr, n)) {
    
    printf("L'array è ordinato secondo il problema della bandiera.\n");
    
    } else {
    
    printf("L'array NON è ordinato secondo il problema della bandiera.\n");
    
    }
}