/*Esercizio1_8: ----> Esempio: Il calcolo del coefficiente binomiale*/

/*NAMESPACE_1*/

#include <stdio.h>

int fattoriale(int x){
    int nfatt=1;
    int i;
    for(i=2; i<=x; i++){
        nfatt=nfatt*i;
        return nfatt;
    }

    /*NAMESPACE_2*/

    int coefficiente_binomiale(int n, int k){
        return fattoriale(n)/(fattoriale(k)*fattoriale(n-k));
    }

    /*NAMESPACE_3*/

    int main(){
        int n1,n2;
        printf("Immettere i due numeri (>=0)");
        scanf("%d%d", &n1, &n2);
        int ris=coefficiente_binomiale(n1,n2);
        printf("Coefficiente binomial: %d", ris);
    }

    /*********************************************************************/
}