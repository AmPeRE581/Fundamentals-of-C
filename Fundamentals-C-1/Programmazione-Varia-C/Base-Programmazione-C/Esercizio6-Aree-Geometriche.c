/*Esercizio6: Si scriva un programma in linguaggio C che, dato un numero reale D immesso da tastiera,
calcoli e stampi:
1. l’area del quadrato di lato D
2. l’area del cerchio di diametro D
3. l’area del triangolo equilatero di lato D*/

#include <stdio.h>
#include <math.h>

int main(){
    float D, area_quadrato, area_triangolo, area_cerchio;
    const float pi = 3.14159;

    printf("Inserisci la lunghezza del parametro D: ");
    scanf("%f", &D);

    /*Da qui comincia la logica, per il calcolo delle aree*/

    area_quadrato = D*D;
    area_cerchio = pi * pow(D/2, 2); /*Funzione POW...utile per consentire l'elevazione*/
    area_triangolo = sqrt(3) / 4*D*D;

    /*E infine si stampano i risultati...e sono i seguenti: */

    printf("L'area del quadrato è: %.2f\n", area_quadrato);
    printf("L'area del cerchio è: %.2f\n", area_cerchio);
    printf("L'area del triangolo è: %.2f\n", area_triangolo);
}

