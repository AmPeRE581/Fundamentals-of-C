/*Esercizio11: Scrivere un programma in c che definisca una serie di numeri interi, tra cui
- somma
- massimo
- minima
- media
- media ponderata
il programma deve raccogliere un array di numeri interi e la logica deve essere implementata per fare eseguire ciascuno dei calcoli visti sopra...*/

#include<stdio.h>

int main(){
    //------------------------//
    //***Dichiarazione Variabili Intere richieste dalla traccia***//
    int somma;
    int massimo;
    int minima;
    int media;
    int media ponderata;

    //------------------------//
    //***Dichiarazione Variabili Intere per il menù***//
    int main_menu_choice;
    int under_menu_choice;
    //------------------------//

    //Con ciò, permetti di inserire di come vuoi l'array...

    printf("Come vuoi l'array? --->");
    scanf("%d", &N);

    int array[N];

    //Permetti di inserire gli elementi dentro l'array...
    for(int i=0; i<N; i++){
        printf("Inserisci %d valori da cercare... -->\n",N);
        printf("Valore %d: ",i+1);
        scanf("%d", &array[i]);

    do {
        // Stampa il menù principale
        printf("Menù Consegna:\n");
        printf("1. Somma\n");
        printf("2. Massimo\n");
        printf("3. Minimo\n");
        printf("4. Media\n");
        printf("5. Media Ponderata\n");
        printf("Scegli un'opzione (1-5): ");
        scanf("%d", &main_menu_choice);

        if(main_menu_choice <= 1 || main_menu_choice >= 5) {
            printf("Errore, riprovare.");
            return 0;
        }

        switch(main_menu_choice){
            case 1: //Menù Principale
                printf("Scegli un Opzione:\n");
                //-----------------------------------
                printf("1. Somma\n");
                printf("2. Massimo\n");
                printf("3. Minimo\n");
                printf("4. Media\n");
                printf("5. Media Ponderata\n");
                printf("Scegli un'opzione (1-5): ");
                scanf("%d", &under_menu_choice);

                if(under_menu_choice == 1){
                    printf("Hai scelto Somma.\n");
                } else if (under_menu_choice == 2){
                    printf("Hai scelto Massimo.\n");
                } else if (under_menu_choice == 3){
                    printf("Hai scelto Minimo.\n");
                } else if (under_menu_choice == 4){
                    printf("Hai scelto Media.\n");
                } else if (under_menu_choice == 5){
                    printf("Hai scelto Media Ponderata");
                }
                break;
            }
        } while(main_menu_choice != 0);
    }
}