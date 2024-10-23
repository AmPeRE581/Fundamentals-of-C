/*Esercizio36: Numeri Perfetti: */
/*Si scriva un metodo numeriPerfetti che riceve in ingresso un intero x e un vettore v1, e restituisce un vettore v2, che
conterrà tutti i divisori di x che sono multipli di almeno un numero in v1.
Ad esempio, se x = 12 e v1= [9 , 8 , 2 ] , allora il vettore restituito è v2 = [2, 4]. Infatti, i divisori di 12 sono 1, 2, 3, 4, 6,
12; tra questi, 2 e 4 sono multipli di 2, mentre 1, 3,4, 6 non sono multipli di nessun elemento in v1.*/

#include <stdio.h>

int* numeriPerfetti(int x, int v1[], int n1, int *n2){
    /*n1: dimensione del vettore v1*/
    /*n2: punterà alla dimensione del vettore v2*/

    /*Alloca dinamicamente memoria per il vettore v2*/
    int *v2 = (int*)malloc(x/2*sizeof(int)); /*Al massimo ci saranno x/2 divisori*/
    *n2=0; /*Inizializza la dimensione di v2 a 0*/

    for(int i=1; i<=x/2; i++){
        if(x%i==0){
            /*Se i è un divisore di x*/
            for(int j=0; j<n1; j++){
                if(i%v1[j]==0){
                    /*Se i è multiplo di un elemento di v1*/
                    v2[*n2] = i;
                    (*n2)++;
                    break; /*Esce dal ciclo interno*/
                }
            }
        }
    }
    /*Ricalcola la dimensione di v2 per eliminare gli elementi inutilizzati*/
    v2=(int*)realloc(v2, *n2*sizeof(int));

    return v2;
}

int main(){
    int x, n1, n2, *v1, *v2, n2;

    printf("Inserisci il valore di x:");
    scanf("%d", &x);

    printf("Inserisci la dimensione del vettore v1:");
    scanf("%d", &n1);

    v1=(int*)malloc(n1*sizeof(int));
    printf("Inserisci gli elementi di v1:\n");
    for(int i=0; i<n1; i++){
        scanf("%d", &v1[i]);
    }

    v2=numeriPerfetti(x, v1, n1, &n2);

    printf("I divisori di %d che sono multipli di almeno un elemento di v1 sono:\n", x);
    for(int i=0; i<n2; i++){
        printf("%d", v2[i]);
    }
    printf("\n");

    /*Libera la memoria allocata*/
    free(v1);
    free(v2);

    return 0;
}