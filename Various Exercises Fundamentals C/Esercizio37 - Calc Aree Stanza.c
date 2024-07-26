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

    printf("Calcolo dell'area di una stanza\n");
    printf("1. Quadrata\n");
    printf("2. Rettangolare\n");
    printf("3. Circolare\n");
    printf("4. Triangolare\n");
    printf("5. Trapezoidale\n");
    printf("Scegli la forma della stanza (1-5): ");
    scanf("%d", &scelta);

    switch(scelta) {
        case 1:
            printf("Inserisci il lato della stanza quadrata (in metri): ");
            scanf("%lf", &lato);
            printf("L'area della stanza quadrata è: %.2lf metri quadrati\n", area_quadrato(lato));
            break;
        case 2:
            printf("Inserisci la base della stanza rettangolare (in metri): ");
            scanf("%lf", &base);
            printf("Inserisci l'altezza della stanza rettangolare (in metri): ");
            scanf("%lf", &altezza);
            printf("L'area della stanza rettangolare è: %.2lf metri quadrati\n", area_rettangolo(base, altezza));
            break;
        case 3:
            printf("Inserisci il raggio della stanza circolare (in metri): ");
            scanf("%lf", &raggio);
            printf("L'area della stanza circolare è: %.2lf metri quadrati\n", area_cerchio(raggio));
            break;
        case 4:
            printf("Inserisci la base della stanza triangolare (in metri): ");
            scanf("%lf", &base);
            printf("Inserisci l'altezza della stanza triangolare (in metri): ");
            scanf("%lf", &altezza);
            printf("L'area della stanza triangolare è: %.2lf metri quadrati\n", area_triangolo(base, altezza));
            break;
        case 5:
            printf("Inserisci la prima base della stanza trapezoidale (in metri): ");
            scanf("%lf", &base1);
            printf("Inserisci la seconda base della stanza trapezoidale (in metri): ");
            scanf("%lf", &base2);
            printf("Inserisci l'altezza della stanza trapezoidale (in metri): ");
            scanf("%lf", &altezza);
            printf("L'area della stanza trapezoidale è: %.2lf metri quadrati\n", area_trapezio(base1, base2, altezza));
            break;
        default:
            printf("Scelta non valida\n");
    }

    return 0;
}