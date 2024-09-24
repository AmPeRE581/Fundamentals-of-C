/*Esempi di funzioni con Array...*/

/*Esempio di funzioni con array come argomenti...

La funzione leggi riceve un array di interi (x) ed un intero (n) e legge n elementi dell'array x*/

void leggi (int x[], int n){
    int i;
    printf("Lettura di %d elementi di un vettore \n", n);

    for(i=0; i<n; i++){
        printf("Elemento n.ro %d (Occuperà la posizione %d): ",i+1,i);

        scanf("%d", &x[i]);
    }
}

/*La funzione scrivi invece, riceve un array di interi (x) ed il suo riempimento (n) e scrive
gli elementi presenti in x*/

void scrivi(int x[], int n){
    int i;
    printf("Scrittura di %d elementi del vettore\n",n);

    for(i=0; i<n; i++){
        printf("%d",x[i]);
        printf("\n");
    }
}

/*Il programma usa le funzioni LEGGi e SCRIVI per leggere una sequenza di numeri interi,
memorizzarli in un array e scrivere l'array così ottenuto.*/

int main(){
    int vet[DIM];
    printf("Quale e' il riempimento del vettore (deve essere <= di %d): ", DIM);
    scanf("%d", &riempimento);

    leggi(vet, riempimento);
    scrivi(vet, riempimento);

    printf("Fatto!\n");
}