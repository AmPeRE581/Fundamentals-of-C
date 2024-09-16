/*Esercizio4_5: Leggere un carattere e scrivere il carattere letto e il numero intero con cui è codificato il carattere letto.*/

#include <stdio.h>

int main(){
    char ch;
    
    printf("Immettere un carattere: ");
    scanf("%c", &ch);

    printf("Il carattere immesso risulta: %c\n", ch);
    printf("La sua codifica (Codice ASCII): %d\n", ch);
}
/***********************************************************************************************************************************/

#include <stdio.h>

int main(){
    char c;

    printf("Inserire la codifica numerica: ");
    scanf("%d", &c);

    printf("Il carattere corrispondente risulta: %c\n",c);
}