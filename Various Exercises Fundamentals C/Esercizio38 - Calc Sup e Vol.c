/*Esercizio38: Scrivere un programma che consente di calcolare la superficie e volume di ogni possibile forma geometrica.*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// Funzione per calcolare l'area della superficie del cubo
double area_superficie_cubo(double lato) {
    return 6 * lato * lato;
}

// Funzione per calcolare il volume del cubo
double volume_cubo(double lato) {
    return lato * lato * lato;
}

// Funzione per calcolare l'area della superficie del parallelepipedo
double area_superficie_parallelepipedo(double lunghezza, double larghezza, double altezza) {
    return 2 * (lunghezza * larghezza + lunghezza * altezza + larghezza * altezza);
}

// Funzione per calcolare il volume del parallelepipedo
double volume_parallelepipedo(double lunghezza, double larghezza, double altezza) {
    return lunghezza * larghezza * altezza;
}

// Funzione per calcolare l'area della superficie della sfera
double area_superficie_sfera(double raggio) {
    return 4 * PI * raggio * raggio;
}

// Funzione per calcolare il volume della sfera
double volume_sfera(double raggio) {
    return (4.0 / 3.0) * PI * raggio * raggio * raggio;
}

// Funzione per calcolare l'area della superficie del cilindro
double area_superficie_cilindro(double raggio, double altezza) {
    return 2 * PI * raggio * (raggio + altezza);
}

// Funzione per calcolare il volume del cilindro
double volume_cilindro(double raggio, double altezza) {
    return PI * raggio * raggio * altezza;
}

// Funzione per calcolare l'area della superficie del cono
double area_superficie_cono(double raggio, double altezza) {
    double generatrice = sqrt(raggio * raggio + altezza * altezza);
    return PI * raggio * (raggio + generatrice);
}

// Funzione per calcolare il volume del cono
double volume_cono(double raggio, double altezza) {
    return (1.0 / 3.0) * PI * raggio * raggio * altezza;
}

int main() {
    int scelta;
    double lato, lunghezza, larghezza, altezza, raggio;

    printf("Calcolo dell'area della superficie e del volume di solidi/liquidi\n");
    printf("1. Cubo\n");
    printf("2. Parallelepipedo\n");
    printf("3. Sfera\n");
    printf("4. Cilindro\n");
    printf("5. Cono\n");
    printf("Scegli un solido/liquido (1-5): ");
    scanf("%d", &scelta);

    switch(scelta) {
        case 1:
            printf("Inserisci il lato del cubo (in metri): ");
            scanf("%lf", &lato);
            printf("L'area della superficie del cubo è: %.2lf metri quadrati\n", area_superficie_cubo(lato));
            printf("Il volume del cubo è: %.2lf metri cubi\n", volume_cubo(lato));
            break;
        case 2:
            printf("Inserisci la lunghezza del parallelepipedo (in metri): ");
            scanf("%lf", &lunghezza);
            printf("Inserisci la larghezza del parallelepipedo (in metri): ");
            scanf("%lf", &larghezza);
            printf("Inserisci l'altezza del parallelepipedo (in metri): ");
            scanf("%lf", &altezza);
            printf("L'area della superficie del parallelepipedo è: %.2lf metri quadrati\n", area_superficie_parallelepipedo(lunghezza, larghezza, altezza));
            printf("Il volume del parallelepipedo è: %.2lf metri cubi\n", volume_parallelepipedo(lunghezza, larghezza, altezza));
            break;
        case 3:
            printf("Inserisci il raggio della sfera (in metri): ");
            scanf("%lf", &raggio);
            printf("L'area della superficie della sfera è: %.2lf metri quadrati\n", area_superficie_sfera(raggio));
            printf("Il volume della sfera è: %.2lf metri cubi\n", volume_sfera(raggio));
            break;
        case 4:
            printf("Inserisci il raggio del cilindro (in metri): ");
            scanf("%lf", &raggio);
            printf("Inserisci l'altezza del cilindro (in metri): ");
            scanf("%lf", &altezza);
            printf("L'area della superficie del cilindro è: %.2lf metri quadrati\n", area_superficie_cilindro(raggio, altezza));
            printf("Il volume del cilindro è: %.2lf metri cubi\n", volume_cilindro(raggio, altezza));
            break;
        case 5:
            printf("Inserisci il raggio del cono (in metri): ");
            scanf("%lf", &raggio);
            printf("Inserisci l'altezza del cono (in metri): ");
            scanf("%lf", &altezza);
            printf("L'area della superficie del cono è: %.2lf metri quadrati\n", area_superficie_cono(raggio, altezza));
            printf("Il volume del cono è: %.2lf metri cubi\n", volume_cono(raggio, altezza));
            break;
        default:
            printf("Scelta non valida\n");
    }

    return 0;
}