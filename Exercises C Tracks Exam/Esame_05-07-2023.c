/*Esame del 05/07/2023*/

#include <stdio.h>

#define DIM 100

float tot_tip(float tip[DIM][DIM], int m){
  float sommaMance;
  int h=1;
  for(int contatore=0; contatore<m; contatore++) {
    sommaMance+=tip[contatore][h];
  } 

  return sommaMance;
}

int main () {
    int i,n,m=0,nc,id;
    float sommaTotaleMance = 0;
    float cons;
    float somma,sommatot,max,min=0;

    printf("Quante ordinazioni devo leggere?");
    scanf("%d",&n);

    float tip[DIM][DIM];

// ci servirà per il conteggio della matrice tip:
    
    int k=0;
    while(i<n){
      printf("Quale cameriere e' l'addetto alla ordinazione?\n");
      scanf("%d",&id);
      printf("Leggo la %d consumazione: ",i+1);
      scanf("%d",&nc);
      printf("Consumazione %d: ",i+1);
      scanf("%f",&cons);
      min = cons;
      somma += cons;
      sommatot += cons;

      if(cons<min){
        min = cons;
      }

// Primo punto dell'esercizio
      if(n>3 && cons > 50.00){
        tip[k][0]=id;
        tip[k][1]=(somma*100)/5; // questo è il contenitore delle mance
        tip[k][2]=min;
        k++;
        //devo tenere conto delle iterazioni che ho con la matrice per il punto 3
        m++;
      }
      somma = 0;
      max = 0;
      min = 0;
      i++;

    }
  printf("Il totale dell'incasso del ristorante & %f",sommatot);
  
 sommaTotaleMance=tot_tip(tip, m);

}
