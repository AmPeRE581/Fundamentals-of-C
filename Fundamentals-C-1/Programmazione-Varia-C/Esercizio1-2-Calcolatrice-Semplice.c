/*Esercizio1-2: Scrivere una semplice programmazione per il semplice utilizzo di una calcolatrice.*/

#include <stdio.h>

int main(){
    int num1, num2, risultato; /*Questi sono le iniziallizazioni che riguardano i numeri da inserire e il risultato finale*/
    char operatore; /*Questo invece è un iniziallizazione che consente di ricevere gli input di ASCII dall'operatore...*/

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    printf("Quale operazione vuoi compiere? (+, -, *, /)---->: "); /*Si chiede all'utente quale operazione compiere.*/
    scanf("%c", &operatore); /*L'operazione viene riconosciuta in base al segno, e salvata...così da fare il resto delle operazioni*/

    switch(operatore){
        case '+':
            risultato = num1+num2;
            break;

        case '-':
            risultato = num1-num2;
            break;

        case '*':
            risultato = num1*num2;
            break; 

        case '/':
            if(num2 == 0){
                printf("Errore: Divisione per zero!\n");
            } else {
                risultato = num1 / num2;
            }
            break;
        
        default: 
            printf("Operatore non valido.\n");
    }

    if(operatore == '+' || operatore == '-' || operatore == '*' || operatore == '/'){
        printf("Il risultato è: %d\n", risultato);
    }

    return 0;
}