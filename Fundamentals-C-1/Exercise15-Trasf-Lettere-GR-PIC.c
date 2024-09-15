/*Esercizio4_3: Scrivere un programma per trasformare le lettere maiuscole in minuscole.*/

#include <stdio.h>

int main(){
    char c;
    printf("Inserire un carattere maiuscolo: ");
    scanf("%c", &c);
    printf("Il carattere minuscolo: %c\n", c+32);
}