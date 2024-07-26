/*Esercizio36: Scrivere un programma che consente di calcolare l'area di tutte le forme geometriche possibili.*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// Funzione per calcolare l'area del quadrato
double area_quadrato(double lato) {
    return lato * lato;
}

// Funzione per calcolare l'area del rettangolo
double area_rettangolo(double base, double altezza) {
    return base * altezza;
}

// Funzione per calcolare l'area del cerchio
double area_cerchio(double raggio) {
    return PI * raggio * raggio;
}

// Funzione per calcolare l'area del triangolo
double area_triangolo(double base, double altezza) {
    return 0.5 * base * altezza;
}

// Funzione per calcolare l'area del trapezio
double area_trapezio(double base1, double base2, double altezza) {
    return 0.5 * (base1 + base2) * altezza;
}

int main() {
    int scelta;
    double lato, base, altezza, raggio, base1, base2;

    printf("Calcolo dell'area delle forme geometriche\n");
    printf("1. Quadrato\n");
    printf("2. Rettangolo\n");
    printf("3. Cerchio\n");
    printf("4. Triangolo\n");
    printf("5. Trapezio\n");
    printf("Scegli una forma (1-5): ");
    scanf("%d", &scelta);

    switch(scelta) {
        case 1:
            printf("Inserisci il lato del quadrato: ");
            scanf("%lf", &lato);
            printf("L'area del quadrato è: %.2lf\n", area_quadrato(lato));
            break;
        case 2:
            printf("Inserisci la base del rettangolo: ");
            scanf("%lf", &base);
            printf("Inserisci l'altezza del rettangolo: ");
            scanf("%lf", &altezza);
            printf("L'area del rettangolo è: %.2lf\n", area_rettangolo(base, altezza));
            break;
        case 3:
            printf("Inserisci il raggio del cerchio: ");
            scanf("%lf", &raggio);
            printf("L'area del cerchio è: %.2lf\n", area_cerchio(raggio));
            break;
        case 4:
            printf("Inserisci la base del triangolo: ");
            scanf("%lf", &base);
            printf("Inserisci l'altezza del triangolo: ");
            scanf("%lf", &altezza);
            printf("L'area del triangolo è: %.2lf\n", area_triangolo(base, altezza));
            break;
        case 5:
            printf("Inserisci la prima base del trapezio: ");
            scanf("%lf", &base1);
            printf("Inserisci la seconda base del trapezio: ");
            scanf("%lf", &base2);
            printf("Inserisci l'altezza del trapezio: ");
            scanf("%lf", &altezza);
            printf("L'area del trapezio è: %.2lf\n", area_trapezio(base1, base2, altezza));
            break;
        default:
            printf("Scelta non valida\n");
    }

    return 0;
}