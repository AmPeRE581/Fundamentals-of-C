/*Esercizio19: Si realizzi un programma in linguaggio C per risolvere equazioni di secondo grado. In
particolare, data una generica equazione di secondo grado nella forma
ax2 + bx + c = 0
dove a, b, c sono coefficienti reali noti e x rappresenta l’incognita, il programma determini
le due radici x1 ed x2 dell’equazione data, ove esse esistano.
Si identifichino tutti i casi particolari (a = 0,   0, ...) e si stampino gli opportuni
messaggi informativi.*/

#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    double discriminante, x1, x2;

    /*Lettura dei coefficienti dell'equazione*/
    printf("Inserisci i coefficienti a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    /*Caso particolare: a=0*/
    if(a==0){
        if(b==0){
            if(c==0){
                printf("L'equazione ha infinite soluzioni.\n");
            } else {
                printf("L'equazione non ha soluzioni.\n");
            }
        } else {
            x1= -c/b;
            printf("L'equazione è lineare. Soluzione: x=%.2f\n", x1);
        }
    } else {
        /*Calcolo discriminante*/
        discriminante = b*b -4 *a*c;
    }

    if(discriminante >0){
        /*Si calcolano le due soluzioni, che sono reali e distinte*/
        x1= (-b + sqrt(discriminante)) / (2*a);
        x2= (-b - sqrt(discriminante)) / (2*a);

        printf("L'equazione ha due soluzioni reali: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if(discriminante == 0){
        /*Una soluzione più che reale...*/
        x1 = -b / (2*a);
        printf("L'equazione ha una soluzione reale: x= %.2f\n", x1);
    } else {
        /*Nessuna soluzione reale...*/
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminante) / (2*a);
        printf("L'equazione ha due soluzioni complesse: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

return 0;