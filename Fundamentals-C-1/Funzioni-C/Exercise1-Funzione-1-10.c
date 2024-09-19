/*Esercizio1_1: Definire una funzione che stampa i numeri da 0 a 10.*/

void scrivi_10(){
    int i;
    for(i=0; i<=10; i++){ //Da aggiungere x qui for(i=0; i<=x; i++){} solo nel caso di una funzione void con parametri
        printf("%d",i);
    }

    printf("\n");
}

int main(){
    scrivi_10();
    printf("Fatto!!\n");
    scrivi_10();
    printf("Fatto!!\n");
}