/*Esercizio10: Ricerca di un elemento in un array
Scrivere un programma C che:
1- Dichiara un array di interi di dimensione N (definita dall'utente).
2- Permette all'utente di inserire i valori per gli elementi dell'array.
3- Richiede all'utente di inserire un valore da cercare nell'array.
4- Utilizza un ciclo for per cercare il valore desiderato all'interno dell'array.
5- Stampa un messaggio se il valore viene trovato, indicando la sua posizione nell'array.
6- Stampa un messaggio se il valore non viene trovato.*/

#include<stdio.h>


//Punto 1
int main(){
    int x, i, N;

    //Con ciò, permetti di inserire di come vuoi l'array...
    printf("Come vuoi l'array? --->");
    scanf("%d", &N);

    int array[N];

    //Permetti di inserire gli elementi dentro l'array...
    for(int i=0; i<N; i++){
        printf("Inserisci %d valori da cercare... -->\n",N);
        printf("Valore %d: ",i+1);
        scanf("%d", &array[i]);
    }

    //Questo consente di cercare un valore definito dall'user...
    int val_search;

    printf("Inserire un valore che l'user vuole che cerchi--->");
    scanf("%d", &val_search);

    int val_founded=0; //Questo consentirebbe di iniziallizzare il valore a zero...e ciò consente di far continuare il seguito del programma in questo modo...
    //Affinchè sia settato a zero...così è iniziallizzato, se trova il valore..questo cambia, in modo che così si possa stampare il risultato trovato...

    for(i=0; i<N; i++){
        if(array[i]==val_search){
            printf("Valore %d trovato...\n", val_search,i);

            val_founded=1;
            break;
        }
    }

    //Ciò di seguito, consente di ricercare l'array...e in caso non sia stato trovato...di segnalarlo all'user...
    if(!val_founded){
        printf("Il valore %d non è stato rinvenuto nell'array.\n", val_search);
    }

    return 0;
}
    

