/*Esercizio49: Scrivere in C++ un programma opportunamente suddiviso in funzioni che:
-- legga da input una sequenza di 10 numeri interi;
-- memorizzi in un array tutti i numeri della sequenza;
-- scandisca l’array e stampi su standard output tutte le sotto-sequenze terminate da 2, nonché tutte le posizioni in cui compare un “2”.
Per semplicità, si può assumere che l’ultimo intero della sequenza sia sempre “2”.

-- Esempio. --
Se la sequenza in input fosse la seguente:
3 6 8 8 2 4 6 2 6 2
si dovrebbero stampare su standard output le 4 sotto-sequenze separate dai “2”:
{3 6 8 8}, {4 6}, {6}
ed infine le posizioni occupate dai “2”, ovvero:
4, 7, 9*/

#include <stdio.h>
#define MAX_NUMERI 10

void leggiNumeri(int numeri[]){
    printf("Inserisci %d numeri interi:\n", MAX_NUMERI);
    for(int i=0; i<MAX_NUMERI; i++){
        scanf("%d", &numeri[i]);
    }
}

void stampaSottosequenzeEPosizioni(int numeri[]){
    printf("Sottosequenze:\n");
    int i;
    for(i=0; i<MAX_NUMERI; i++){
        printf("{");
        while(i<MAX_NUMERI && numeri[i] != 2){
            printf("%d", numeri[i]);
            i++;
        }
        printf("}\n");
    }

    printf("Posizione dei 2: \n");
    for(i=0; i<MAX_NUMERI; i++){
        if(numeri[i] == 2){
            printf("%d", i+1);
        }
    }

    printf("\n");
}

int main(){
    int numeri[MAX_NUMERI];

    leggiNumeri(numeri);
    stampaSottosequenzeEPosizioni(numeri);

    return 0; 
}