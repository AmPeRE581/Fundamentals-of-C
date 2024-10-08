/*Esercizio9: Esempio9: Scrivi un programma C che generi le password in ordine di grandezza e complessità*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void genera_password(char *password, int lunghezza){
    const char *caratteri = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$^&*()";
    int len=strlen(caratteri);

    for(int i=0; i<lunghezza; i++){
        int indice=rand()%len;
        password[i]=caratteri[indice];
    }

    password[lunghezza]='\0';
}

int main(){
    int lunghezza;

    srand(time(NULL)); /*Iniziallizza il gen di num casuali*/

    printf("Inserisci la lunghezza desiderata per la password: ");
    scanf("%d", &lunghezza);

    char password[lunghezza+1];
    genera_password(password, lunghezza);

    printf("La tua password generata è: %s\n", password);

    return 0;
}