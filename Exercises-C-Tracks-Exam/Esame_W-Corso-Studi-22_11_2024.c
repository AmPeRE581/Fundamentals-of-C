#include <stdio.h>
#include <stdlib.h>

#define MAX_TERNE 100
#define MAX_CDS 3

typedef struct{
    int cds; /*Codice del Corso di Studio*/
    int insegn; /*Codice dell'insegnamento*/
    int studenti; /*Numero di studenti*/
} Terna;

/*Funzione per trovare il numero di CdS con un dato insegnamento*/
int countCdSWithInsegnamento(Terna dati[], int n, int codiceDiInteresse){
    int count =0;
    for(int i=0; i<n; i++){
        if(dati[i].insegn == codiceDiInteresse){
            /*Controlla se è un CdS già contato*/
            int trovato =0; 
            for(int j=0; j<i; j++){
                if(dati[j].cds == dati[i].cds && dati[j].insegn == codiceDiInteresse){
                    trovato =1;
                    break;
                }
            }
            if(!trovato){
                count++;
            }
        }
        return count;
    }
}

/*Funzione utile per trovare i codici degli insegnamenti più presenti in un CdS*/
void findMostPresentInsegn(Terna dati[], int n, int cdsCodice){
    int maxStudenti =0;
    for(int i=0; i<n; i++){
        if(dati[i].cds == cdsCodice && dati[i].studenti > maxStudenti){
            maxStudenti = dati[i].studenti;
        }
    }

    printf("Codici insegnamenti più presenti nel CdS %d: ", cdsCodice);
    for(int i=0; i<n; i++){
        if(dati[i].cds == cdsCodice && dati[i].studenti == maxStudenti){
            printf("%d", dati[i].insegn);
        }
    }
    printf("\n");
}

int main(){
    int n; /*Numero di terne...*/
    printf("Inserisci il numero di terne: ");
    scanf("%d", &n);

    if(n <= 0 || n> MAX_TERNE){
        printf("Numero di terne non valido.\n");
        return 1;
    }

    Terna dati_didattica[MAX_TERNE];

    /*Lettura delle terne da qui in poi*/

    printf("Inserisci le terne (CdS Insegnamento Studenti): \n");
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &dati_didattica[i].cds, &dati_didattica[i].insegn, &dati_didattica[i].studenti);
    }

    /*Punto 2: Leggi il codice di un insegnamento e conta i CdS*/
    int codiceDiInteresse;
    printf("Inserisci il codice dell'insegnamento di interesse: ");
    scanf("%d", &codiceDiInteresse);

    int count = countCdSWithInsegnamento(dati_didattica, n, codiceDiInteresse);
    printf("Numero CdS in cui risulta presente insegnamento con codice %d: %d\n", codiceDiInteresse, count);

    /*Punto 3: Leggi i codici dei corsi di studio e trova gli insegnamenti più presenti*/
    int cdsCodici[MAX_CDS];
    printf("Inserisci i codici di 3 Corsi di Studio:\n");
    for(int i=0; i<MAX_CDS; i++){
        scanf("%d", &cdsCodici[i]);
    }
    for(int i=0; i<MAX_CDS; i++){
        findMostPresentInsegn(dati_didattica, n, cdsCodici[i]);
    }

    return 0;
}