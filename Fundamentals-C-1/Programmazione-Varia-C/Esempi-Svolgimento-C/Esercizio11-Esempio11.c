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

    for(i=1; i<n; i++){
        if(numeri[i] < numeri[i-1]){
            /*Se il numero attualmente in corso, risulta essere minore rispetto al predecessore, allora la sequenza decresce*/
            if(crescente){
                crescente=0; 
            } else {
                /*Se era già decrescente allora in questo caso, la sequenza sta crescendo*/
                crescente = -1;
                break;
            }
        }
    }

    if(crescente == 1 || crescente == 0){
        printf("La sequenza è bitonica.\n");
    } else {
        printf("La sequenza non è bitonica.\n");
    }

    return 0;
}