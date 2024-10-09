/*Esercizio11: Esempio11: Scrivere un programma in C che legge una sequenza di n
(con n>2) numeri e verifica se la sequenza è bitonica (cioè composta prima di numeri
dispari ordinati in modo crescente e quindi da numeri pari ordinati in modo decrescente). 

Esempio di sequenze bitoniche: 

-- 3 5 9 13 121 145 66 30 8 2
-- 1 3 7 1025 82 60 48*/

#include <stdio.h>

int main(){
    int n,i;
    printf("Inserisci il numero di elementi della sequenza: ");
    scanf("%d", &n);

    int numeri[n];
    printf("Inserisci gli elementi della sequenza:\n");
    for(i=0; i<n; i++){
        scanf("%d", &numeri[i]);
    }

    int crescente = 1; /*Flag per indicare se siamo posizionati nella parte crescente*/
    int dispari = numeri[0] % 2; /*Memorizziamo la parità del primo numero*/

    for(i=1; i<n; i++){
        if (dispari){
            /*Qui ci si trova nel punto decrescente....*/
            if(numeri[i] %2 ==1 || numeri[i] >= numeri[i-1]){
                crescente=0;
                break;
            }
        } else {

            /*Qui ci si trova nel punto crescente...*/
            if(numeri[i]%2 ==0 || numeri[i] <= numeri[i-1]){
                crescente = 0;

                break;
            }
        }
        dispari = numeri[i]%2;
    }

    if(crescente){
        printf("La sequenza è bitonica.\n");
    } else {
        printf("La sequenza non è bitonica.\n");
    }

    return 0;
}