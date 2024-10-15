/*Esercizio4: Scrivi un programma in c che consente di fare la conversione della temperatura da Celsius a Kelvin.*/

#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Inserisci la temperatura in Celsius: ");
    scanf("%f", &celsius);

    /*Da qui facciamo la conversione mediante la formula...*/

    fahrenheit = (celsius * 9/5)+32;

    printf("La Temperatura in Celsius convertita in Fahrenheit è: %f", fahrenheit);

    return 0;
}