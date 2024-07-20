/*Esercizio13: Calcolo della media dei voti
Scrivi un programma in C che permette all'utente di inserire un numero di voti scolastici e calcola la media dei voti inseriti. 
Il programma deve svolgere le seguenti operazioni:

- Chiedere all'utente quanti voti desidera inserire.
- Utilizzare un ciclo per leggere i voti uno per uno.
- Calcolare la somma dei voti.
- Calcolare e stampare la media dei voti.
 
-- Requisiti
- Utilizzare un array per memorizzare i voti.
- Gestire correttamente l'input dell'utente, assicurandosi che il numero di voti sia un numero positivo.
- La media deve essere un numero in virgola mobile (float o double).*/

#include<stdio.h>

int main(){
    //------------------------//
    //***Dichiarazione Variabili Intere richieste dalla traccia***//
    int num_voti;
    //------------------------//
    
    printf("Quanti voti vuoi inserire? -->");
    scanf("%d", &num_voti);

    //--------------Ricordiamo che i voti devono essere sempre positivi, per cui ci implementiamo un "se"----------------//

    if(num_voti <= 0){
        printf("Ricorda che i voti sono unicamente positivi...il voto inserito non è valido...");

        return 1;
    }

    //***Da qui comincia il ciclo della media dei voti...***

    float voti[num_voti];
    float somma = 0.0;

    for (int i = 0; i < num_voti; i++) {
        printf("Inserisci il voto %d: ", i + 1);
        scanf("%f", &voti[i]);
        somma += voti[i];
    }

    float media = somma / num_voti;
    printf("La media dei voti e': %.2f\n", media);

    return 0;
}