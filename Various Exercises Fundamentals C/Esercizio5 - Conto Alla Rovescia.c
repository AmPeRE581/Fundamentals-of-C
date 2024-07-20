/*Esercizio5: Si vuole realizzare una applicazione che permetta di mostrare a schermo i numeri tipici di un conto alla rovescia partendo da un valore deciso dall'utente.
Tale valore deciso dall'utente deve essere maggiore di 0*/


#include<stdio.h>
int main(){
    /*Iniziallizazione Variabili*/
        int i;
        int n;
    //n=1;
// il conteggio deve essere scelto in base alla richiesta dell'utente. 

        /*Presa del parametro di conteggio*/
         printf("Inserisci il numero da cui deve partire il conteggio:");
         scanf("%d",&i);
        // setto il valore di n come i, in modo da avere un punto di inizio coerente.
        if(i<0 || i=0){
                printf("Non posso partire da un numero uguale a zero.");
                return 1;
        } else {
                n=i;
        }
    /*Ciclo di conteggio*/

        while (i > 0){
                printf("%d", n);
                // è un conto alla rovescia, non un conteggio
                // quindi, al posto di n++, sarebbe meglio usare: 
                n--;
        }

//return 0 in questo caso non serve. 
        return 0 
//qua ha molto più senso :)
}

                  
