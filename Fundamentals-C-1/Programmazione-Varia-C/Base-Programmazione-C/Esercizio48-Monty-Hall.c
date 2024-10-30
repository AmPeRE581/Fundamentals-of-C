/*Esercizio48: Scrivere ed eseguire un programma C++ opportunamente suddiviso in funzioni che simuli il gioco Monty Hall. Il gioco Monty Hall è così chiamato dal nome del conduttore di un gioco televisivo in cui un concorrente può vincere un’auto indovinando la porta dietro la quale si trova l’auto. Il giocatore sceglie una porta, allora il conduttore ne apre un’altra dietro la quale non si trova l’auto. A questo punto del gioco, il giocatore può scegliere se cambiare la sua scelta con la terza porta. Il programma dovrà infine indicare se l’auto è stata vinta o meno.
Suggerimento. Si potrebbero rappresentare le porte con i numeri da 1 a 3. Per fare in modo che il gioco non sia sempre uguale, scegliere in modo casuale il numero della porta dietro la quale nascondere l’auto.
Più in dettaglio, il programma dovrebbe eseguire le seguenti operazioni:

1. Stampare la spiegazione del gioco.
2. Determinare la porta con dietro l’auto in base ad un numero random.
3. Chiedere al concorrente di scegliere una porta.
4. Aprire una porta differente da quella scelta, dietro la quale non si nasconde l’auto.
5. Proporre al concorrente il cambio.
6. Nel caso in cui il concorrente accetti, aggiornare la sua scelta.
7. Determinare il risultato finale del gioco.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PORTE 3

int sceltaIniziale, portaAuto, portaAperta;

void spiegaGioco(){
    printf("Benvenuto al gioco di Monty Hall!\n");
    printf("Ci sono 3 porte. Dietro una c'è un'auto, dietro le altre due ci sono capre.\n");
    printf("Sceglierai una porta, poi ne aprirò una con una capra.\n");
    printf("Avrai la possibilità di cambiare la tua scelta iniziale.\n");
}

int scegliPorta(){
    int scelta;
    do{
        printf("Scegli una porta (1, 2 o 3):");
        scanf("%d", &scelta);
    } while(scelta <1 || scelta > PORTE);
    return scelta;
}

void nascondiAuto(){
    srand(time(NULL));
    portaAuto = rand() % PORTE+1;
}

void apriPorta(int sceltaIniziale){
    do{
        portaAperta = rand() % PORTE+1;
    } while(portaAperta == sceltaIniziale || portaAperta == portaAuto);
}

void cambiaScelta(){
    printf("Vuoi cambiare la tua scelta? (si/no):");
    char risposta;
    scanf("%c", &risposta);
    if(risposta == 's' || risposta == 'S'){
        for(int i=1; i<= PORTE; i++){
            if(i != sceltaIniziale && i != portaAperta){
                sceltaIniziale = i;
                break;
            }
        }
    }
}

void verificaVincita(){
    if(sceltaIniziale == portaAuto){
        printf("Complimenti! Hai vinto l'auto!\n");
    } else {
        printf("Mi dispiace, hai perso. L'auto era dietro la porta %d.\n", portaAuto);
    }
}

int main(){
    spiegaGioco();
    nascondiAuto();
    sceltaIniziale = scegliPorta();
    apriPorta(sceltaIniziale);
    cambiaScelta();
    verificaVincita();
    return 0;
}
