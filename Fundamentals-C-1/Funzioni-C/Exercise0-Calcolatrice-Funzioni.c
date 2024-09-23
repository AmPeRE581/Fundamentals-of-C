/*Exercise0_0: Utilizzo delle funzioni, per costruire una calcolatrice semplice delle 4 operazioni
fondamentali.*/

#include <stdio.h>
#include <math.h>

int somma(int a, int b){
    return a + b;
}

int sottrazione(int a, int b){
    return a - b;
}

int moltiplicazione(int a, int b){
    return a * b;
}

float divisione(int a, int b){
    if(b == 0){
        printf("Errore: E' stata fatta una divisione per un numero zero!\n");

        return 0;
    } else {
        return (float)a / b; 
    }
}

int main(){
    int num1, num2, scelta;
    float risultato; 

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    printf("Scegli l'operazione da eseguire: 1-2-3-4");

    printf("1. Somma\n");
    printf("2. Sottrazione\n");
    printf("3. Moltiplicazione\n");
    printf("4. Divisione\n");
    scanf("%d", &scelta);

    switch(scelta){
        case 1:
            risultato = somma(num1, num2);
            break;

        case 2:
            risultato = sottrazione(num1, num2);
            break;

        case 3: 
            risultato = moltiplicazione(num1, num2);
            break;

        case 4:
            risultato = divisione(num1, num2);
            break;

        default: 
            printf("Scelta non valida!\n");
    }

    printf("Il risultato è: %.2f\n", risultato);

    return 0;
}