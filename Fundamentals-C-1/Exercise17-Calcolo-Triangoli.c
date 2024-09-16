/*Esercizio4_6: Scrivere un programma che legge tre numeri reali relativi ai lati di un triangolo: se il triangolo
è equilatero, il programma ne scrive il perimetro; se il triangolo è isoscele, ne scrive l'area; se il triangolo è scaleno,
scrive la dimensione del maggiore del maggiore dei tre lati.*/

#include <stdio.h>
#include <math.h>

// Funzione per calcolare il perimetro
double perimetro(double a, double b, double c) {
    return a + b + c;
}

// Funzione per calcolare l'area di un triangolo isoscele
double areaIsoscele(double base, double lato) {
    double altezza = sqrt(lato * lato - (base / 2) * (base / 2));
    return (base * altezza) / 2;
}

// Funzione principale
int main() {
    double a, b, c;
    
    // Lettura dei tre lati
    printf("Inserisci i tre lati del triangolo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Controllo se i lati formano un triangolo valido
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("I lati non formano un triangolo valido.\n");
        return 1;
    }

    // Controllo se è equilatero
    if (a == b && b == c) {
        printf("Il triangolo è equilatero.\n");
        printf("Perimetro: %.2f\n", perimetro(a, b, c));
    }
    // Controllo se è isoscele
    else if (a == b || b == c || a == c) {
        printf("Il triangolo è isoscele.\n");
        double base, lato;
        if (a == b) {
            base = c;
            lato = a;
        } else if (b == c) {
            base = a;
            lato = b;
        } else {
            base = b;
            lato = a;
        }
        printf("Area: %.2f\n", areaIsoscele(base, lato));
    }
    // Caso scaleno
    else {
        printf("Il triangolo è scaleno.\n");
        double max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        printf("Il lato maggiore è: %.2f\n", max);
    }

    return 0;
}


