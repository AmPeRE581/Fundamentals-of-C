/*Exercise0_1: Leggere n coppie di numeri interi, e per le coppie nelle quali il primo elemento 
è non maggiore del secondo, scrivere tutti gli interi che cadono nell'intervallo descritto dagli elementi della coppia.*/

/*Definire ed utilizzare una funzione (scrivi_da_a) che scrive i numeri interi da inf ad sup
(con inf e sup parametri formali)

Esempio: Se n è 4 e le coppie lette sono (16, 9) (-4,1) (34, 12) (2,5)

Il programma scriverà:
-4 -3 -2 -1 0 1
2 3 4 5*/

#include <stdio.h>

void scrivi_da_a(int inf, int sup){
    int i;
    for(i=inf; i<=sup; i++){
        printf("%d",i);
        printf("\n");
    }
}

int main(){
    int n,n1,n2;
    int i;

    printf("Quante coppie leggere: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        printf("Immettere due numeri interi relativi alla coppia numero %d: ",i);
        scanf("%d %d",&n1, &n2);
    }
    if(n1<=n2){
        scrivi_da_a(n1,n2);
        printf("Si sono scritti i numeri dell'intervallo %d %d\n" ,n1,n2);
    } else {
        printf("La coppia n. %d non descrive un intervallo\n",i);
        printf("\n");
    }
}