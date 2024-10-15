/*Esercizio9: Controlla segno

-- Scrivere un programma che legga da tastiera un numero (N) e che stampi:
• se N è un numero positivo, stampi ****
• se N è un numero negativo, stampi $$$$

-- Nota Poiché il testo non specifica cosa fare se N=0, vi sono 3 possibili soluzioni:
1. se N=0, non stampare nulla
2. se N=0, stampa entrambe le righe
3. se N=0, trattalo come se fosse >0*/

#include <stdio.h>

int main(){
    int N, scelta;

    printf("Scegli cosa fare quando N è 0:\n");
    printf("1. Non stampare nulla\n");
    printf("2. Stampare entrambe le righe\n");
    printf("3. Trattare come se fosse >0\n");

    printf("Quale opzione scegli: (1-2-3)--->:");
    scanf("%d", &scelta);

    if(N>0 || (N == 0 && scelta == 3)){
        printf("****\n");
    } else if (N<0){
        printf("$$$$\n");
    } 

    if(N==0 && scelta == 2){
        printf("****\n$$$$\n");
    }

    return 0;
}