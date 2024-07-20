/*Exercise5: L’utente inserisce una temperatura in Celsius e il calcolatore la
converte in Fahrenheit ed in Kelvin. Se la temperatura inserita è
minore dello zero assoluto (-273.15), il calcolatore segnala un
errore, altrimenti esegue le due conversioni e stampa i due
risultati.
Si ricordi che:
•Fahrenheit = (9/5) * Celsius + 32
•Kelvin = Celsius + 273.15*/

#include<stdio.h>

int main(){
    float Celsius, Fahrenheit, Kelvin;
    
    printf("Inserisci la temperatura in Celsius:");
    scanf("%f", &Celsius);

    if(Celsius < -273.15){
        printf("La temperatura descritta non è valida");
    } else {
        Fahrenheit = (9/5)*Celsius+32;
        Kelvin = Celsius+273.15;

        printf("La temperatura espressa in Fahrenheit è: %f", Fahrenheit);
        printf("la temperatura espressa in Kelvin è: %f", Kelvin);
    }
}