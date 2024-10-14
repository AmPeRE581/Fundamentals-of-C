#include <stdio.h>

void determinazione_binaria(int n){
    int numero_binario[32];
    int i=0; 
    while(n>0){
        numero_binario[i] = n%2;
        n=n/2;
        i++
    }

    for(int j=i-1; j >= 0; j--){
        printf("%d", numero_binario[j]);
    }

    printf("\n");
}

int main(){
    int n;
    printf("Inserisci un numero decimale: ");
    scanf("%d", &n);
    printf("Il numero binario è:");
    determinazione_binaria(n);
    return 0;
}