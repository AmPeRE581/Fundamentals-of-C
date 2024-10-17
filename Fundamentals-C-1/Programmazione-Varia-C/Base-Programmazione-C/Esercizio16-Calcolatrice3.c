/*Esercizio16: Semplice calcolatrice 3

-- Scrivere un programma che legga da tastiera 3 numeri interi. I primi due numeri sono
da intendersi come operandi, mentre il terzo numero specifica l’operazione da fare su di
essi. 

-- In particolare, se l’operazione vale 1, allora occorre calcolare e stampare la somma
dei due operandi. 

-- Se l’operazione vale 2, occorre calcolare e stampare la differenza dei due
operandi. In tutti gli altri casi stampare un messaggio di errore.

-- Esempio:

CAPITOLO 3. SCELTE ED ALTERNATIVE 8
Operando 1: 7
Operando 2: 9
Operazione: 1
La somma vale 16
Operando 1: 7
Operando 2: 9
Operazione: 2
La differenza vale -2
Operando 1: 7
Operando 2: 9
Operazione: 3
Operazione non valida*/

#include <stdio.h>

int main(){
    int operando1, operando2, operazione;

    printf("Inserisci il primo operando:");
    scanf("%d", &operando1);

    printf("Inserisci il secondo operando: ");
    scanf("%d", &operando2);

    printf("Inserisci l'operazione (1 per somma, 2 per differenza): ");
    scanf("%d", &operazione);

    if(operazione == 1){
        printf("La somma vale %d\n", operando1 + operando2);
    } else if (operazione == 2){
        printf("La differenza vale %d\n", operando1 - operando2);
    } else {
        printf("Operazione non valida\n");
    }

    return 0;
}