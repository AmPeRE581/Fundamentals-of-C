/*Exercise9: Leggere 10 numeri interi e scrivere quelli che 
risultano maggiori della media aritmetica*/

#include<stdio.h>

/*Inizializzare ciascun elemento di un array val
atto a contenere 10 valori interi con un valore letto da standard input*/

int val[10];
int i;
for(i=0; i<10; i++){
    printf("Inserire numero: ");
    scanf("%d", &val[i]);
}

/*Calcolare media degli elementi dell'array val*/

int somma=0; 
float media;

for(i=0; i<10; i++){
    somma=somma+val[i];
    media=(float)somma/10;
}


/*Scrivere gli elementi di val maggiori della media*/
for(i=0; i<10; i++){
    if(val[i] > media){
        printf("%d"), val[i];
    }
}