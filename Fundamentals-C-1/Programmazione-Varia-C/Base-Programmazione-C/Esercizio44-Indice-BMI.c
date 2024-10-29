/*Esercizio44: Indice BMI

EN: Create a Body Mass Index (BMI) calculator application that reads the user's weight in
kilograms and height in meters, calculate and display the user's body mass index. Also, the application
should display the following information from the Department of Health and Human Services/National
Institutes of Health so the user can evaluate his/her BMI:

BMI Values: 
Underweight: less than 18.5
Normal: between 18.5 and 24.9
Overweight: between 25 and 29.9
Obese: 30 or greater

The formula for calculating BMI is: 
BMI = weightinKilograms/heightInMeters*heightInMeters*/

#include <stdio.h>

int main(){
float weight, height, bmi;

    printf("Immetti il tuo peso in kilogrammi: ");
    scanf("%f", &weight);

    printf("Immetti la tua altezza in metri: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\nIl tuo BMI è: %.1f\n\n", bmi);

    printf("Valori BMI:\n");
    printf("Sottopeso: Minore di 18.5\n");
    printf("Normale: Tra 18.5 e 24.9\n");
    printf("Sopra il peso ottimale: tra 25 e 29.9\n");
    printf("Obeso: 30 oppure superiore\n");

    return 0;
}
