/*Esercizio0_2: Scrivere un programma che legge n terne di interi e per ogni terna letta restituisce il numero di elementi pari. Si utilizzi una funzione
(conta_pari) che riceve una terna e restituisce il numero di elementi pari della terna.*/

int conta_pari(int a, int b, int c){
    int tot=0;
    if(a%2 == 0){
        tot++;
    }

    if(b%2 == 0){
        tot++;
    }
    
    if(c%2 == 0){
        tot++;
    }

    return tot;
}

int main(){
    int n,x,y,z,i, ris;
    scanf("%d", &n); //Scannerizzazione di quante terne servono...

    for(i=0; i<n; i++){
        scanf("%d", &x);
        scanf("%d", &y);
        scanf("%d", &z);

        ris = conta_pari(x,y,z);
        printf("%d", ris);
    }
}