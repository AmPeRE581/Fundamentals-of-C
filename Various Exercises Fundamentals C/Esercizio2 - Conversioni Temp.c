/*Esercizio2: L'utente inserisce una temperatura in celsius e la converte in fahrenheit e kelvin, se........................................la
temp inserita è minore dello 0 assoluto (-273,15) il calcolatore segnala un errore, altrimenti esegue le due conversioni*/

#include <stdio.h>
 
int main(){
    /* Dichiarazione Variabili */
    double fahrenheit;
    double kelvin;
    double celsius;
 
    /* Prelevo il parametro temperatura */
    printf("Inserisci la temperatura in celsius: ");
    scanf("%lf", &celsius);
 
    /* Faccio la conversione */
    fahrenheit = (9.0 / 5.0) * celsius + 32.0;
    printf("Temperatura in Fahrenheit: %lf\n", fahrenheit);
 
    kelvin = celsius + 273.15;
    printf("Temperatura in Kelvin: %lf\n", kelvin);
 
    
}