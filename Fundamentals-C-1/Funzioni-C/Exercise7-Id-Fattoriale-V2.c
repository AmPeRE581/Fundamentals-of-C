/*Scrivere un programma in c che scrive una funzione che calcola e restituisce il fattoriale di un numeri intero n*/ 
/*Versione 2.0*/

/*Spiegazione: L'istruzione "return-espressione", provoca la terminazione della funzione e la restituzione del controllo al chiamante
unitamente al valore dell'espressione. Eventuali istruzioni successive alla "return" non saranno mai eseguite. */

#include <stdio.h>

int fattoriale_v2(int n){
    if(n<0){
        return -1;
    }
    if(n<2){
        return 1;
    }
    
    int nfatt=1;
    int i;

    for(i=2; i<=n; i++){
        nfatt=nfatt*i;
    }

    return nfatt;
}

int main(){
    int m;
    printf("Immettere il numero (>=0): ");
    scanf("%d", &m);
    int fatt=fattoriale_v2(m);

    if(fatt>0){
        printf("Fattoriale: %d\n", fatt);
    } else {
        printf("inserito numero negativo! Errore! Il programma terminerà immediatamente!!!");
    }
}