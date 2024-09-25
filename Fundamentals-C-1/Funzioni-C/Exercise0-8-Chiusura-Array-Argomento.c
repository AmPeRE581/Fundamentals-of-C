/*Esercizio0_8: Esempi di funzioni con array bidimensionali come argomenti - CHIUSURA*/

void scrivi(int m[][DIM], int x){
    for(i=0; i<x; i++){
        for(j=0; j<x; j++){
            printf("%d", m[i][j]);
        }
    }
}

void leggi(int m[][DIM], int x){
    for(i=0; i<x; i++){
        for(j=0; j<x; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

int main(){
    int m1[DIM][DIM];
    int m2[DIM][DIM];

    int n,i,j;

    scanf("%d", &n);
    leggi (m1,n); /*Invocazione della funzione leggi con parametro m1*/

    scrivi(m1,n); /*Invoc. Funz. Scrivi con parametro m1*/
    leggi(m2, n); /*Invoc. Funz. Leggi con parametro m2*/

    scrivi(m2,n);
    int diversi=0;
    for(i=0; i<n; && diversi == 0; i++){
        for(j=0; j<n; & diversi == 0; j++){
            if(m1[i][j] != m2[i][j]){
                diversi++;
            }
        }
    }
} /*Chiudo MAIN*/