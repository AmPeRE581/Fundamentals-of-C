/*Esercizio1_8: ----> Esempio: Il calcolo del coefficiente binomiale*/

int fattriale(int n){
    int nfatt=1; 
    int i;

    for(i=2; i<=n; i++){
        nfatt=nfatt*i;
    }

    return nfatt;
}

int coefficiente_binomiale(int n, int k){
    return fattoriale(n)/(fattoriale(k)*fattoriale(n-k));
}

int main(){
    int n1,n2;

    printf("Immettere due numeri (>=0): ");
    scanf("%d%d", &n1, &n2);

    int ris=coefficiente_binomiale(n1, n2);
    printf("Coefficiente binomiale: %d", ris);
    
}