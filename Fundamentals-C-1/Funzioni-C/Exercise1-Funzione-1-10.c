/*Esercizio1_1: Definire una funzione che stampa i numeri da 0 a 10.*/

void scrivi_10(){
    int i;
    for(i=0; i<=10; i++){ //Da aggiungere x qui for(i=0; i<=x; i++){} solo nel caso di una funzione void con parametri
        printf("%d",i);
    }

    printf("\n");
}

int main(){
    scrivi_10(); /*Questa è la ri/chiamata della funzione!*/
    printf("Fatto!!\n");
    scrivi_10(); /*Questa è la ri/chiamata della funzione!*/
    printf("Fatto!!\n");
}

/*Alternativa a int main, qualora siamo in funzioni void con parametri.*/

/*int main(){
    int n;
    printf("Immettere un numero >0: ");
    scanf("%d",&n);
    scrivi(n);
    printf("Fatto!!\n");
    scrivi(n*4);
    printf("Fatto!!\n");
}*/