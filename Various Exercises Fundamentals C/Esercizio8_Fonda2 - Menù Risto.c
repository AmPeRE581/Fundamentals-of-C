/*Esercizio8: Scrivere un programma in C che gestisce un semplice menù per un ristorante. Il programma deve:

Stampare un menù con le seguenti voci:
- Antipasti
- Primi piatti
- Secondi piatti
- Contorni
- Dolci
. Bevande
Permettere all'utente di scegliere una voce dal menù inserendo un numero corrispondente a ciascuna voce.
In base alla scelta dell'utente, stampare un sotto-menù con delle opzioni specifiche. Ad esempio, se l'utente sceglie "Antipasti", il sotto-menù potrebbe includere:
Prosciutto e melone
Insalata caprese
Mozzarella di bufala
Permettere all'utente di scegliere un'opzione dal sotto-menù.
Stampare un messaggio di conferma con la scelta dell'utente.
Usare if annidati o concatenati per gestire le diverse scelte del menù e del sotto-menù.
Usare switch-case per gestire la scelta dell'utente nel menù principale.
Usare un ciclo do-while per far ripetere il processo di scelta fino a quando l'utente non decide di uscire.
*/

#include <stdio.h>

int main() {
    int sceltaPrincipale;
    int sceltaSottoMenu;
    int Num_SottoMenu;
    int continua;

    do {
        // Stampa il menù principale
        printf("Menù del Ristorante:\n");
        printf("1. Antipasti\n");
        printf("2. Primi piatti\n");
        printf("3. Secondi piatti\n");
        printf("4. Contorni\n");
        printf("5. Dolci\n");
        printf("6. Bevande\n");
        printf("7. Esci\n");
        printf("Scegli un'opzione (1-7): ");
        scanf("%d", &sceltaPrincipale);
        
        if(sceltaPrincipale <= 1 || sceltaPrincipale >= 7) {
            printf("Errore, riprovare.");
            return 0;
        }
        
        switch(sceltaPrincipale){
            case 1: //Antipasti
                printf("Scegli un antipasto:\n");
                //-----------------------------------
                printf("1. Prosciutto e melone\n");
                printf("2. Insalata caprese\n");
                printf("3. Mozzarella di bufala\n");
                printf("Scegli un'opzione (1-3): ");
                scanf("%d", &sceltaSottoMenu);

                if(sceltaSottoMenu == 1){
                    printf("Hai scelto Prosciutto e melone.\n");
                } else if (sceltaSottoMenu == 2){
                    printf("Hai scelto Insalata Caprese.\n");
                } else if (sceltaSottoMenu == 3){
                    printf("Hai scelto Mozzarella di Bufala.\n");
                } else {
                    printf("Scelta non valida, riprovare...\n");
                }
                break;
                //----------------------------------------------------------------
            case 2: //Primi Piatti
                printf("Scegli tra i primi piatti:\n");
                //------------------------------------
                printf("1. Lasagne\n");
                printf("2. Spaghetti alla Carbonara\n");
                printf("3. Gricia\n");
                printf("4. Amatriciana\n");
                printf("5. Spaghetti Cacio e Pepe\n");
                //---------------------------------------
                printf("Scegli un'opzione (1-5): ");
                scanf("%d", &sceltaSottoMenu);
                //----------------------------------------
                if(sceltaSottoMenu == 1){
                    printf("Hai scelto Lasagne.\n");
                } else if (sceltaSottoMenu == 2){
                    printf("Hai scelto Spaghetti alla Carbonara.\n");
                } else if (sceltaSottoMenu == 3){
                    printf("Hai scelto Gricia.\n");
                } else if (sceltaSottoMenu == 4) {
                    printf("Hai scelto Amatriciana.\n");
                } else if (sceltaSottoMenu == 5){
                    printf("Hai scelto Spaghetti Cacio e Pepe");
                } else {
                    printf("Scelta non valida, riprovare...\n");
                }
                break;
                //-----------------------------------------------------
            case 3: //Secondi Piatti
                printf("Scegli tra i secondi piatti:\n");
                //------------------------------------
                printf("1. Parmigiana di Melanzane\n");
                printf("2. Polpette al sugo\n");
                printf("3. Polpettine di Tonno e Ricotta\n");
                printf("4. Pollo al Curry\n");
                printf("5. Saltimbocca alla Romana\n");
                printf("5. Zucchine Gratinate\n");
                printf("5. Polpette di Spinaci e Ricotta\n");
                //---------------------------------------
                printf("Scegli un'opzione (1-5): ");
                scanf("%d", &sceltaSottoMenu);
                //---------------------------------------------
                if(sceltaSottoMenu == 1){
                    printf("Hai scelto Parmigiana di Melanzane.\n");
                } else if (sceltaSottoMenu == 2){
                    printf("Hai scelto Polpette al sugo.\n");
                } else if (sceltaSottoMenu == 3){
                    printf("Hai scelto Polpettine di Tonno e Ricotta.\n");
                } else if (sceltaSottoMenu == 4) {
                    printf("Hai scelto Pollo al Curry.\n");
                } else if (sceltaSottoMenu == 5){
                    printf("Hai scelto Saltimbocca alla Romana.\n");
                } else if (sceltaSottoMenu == 6){
                    printf("Hai scelto Zucchine Gratinate.\n");
                } else if (sceltaSottoMenu == 7){
                    printf("Hai scelto Polpette di Spinaci e Ricotta.\n");
                } else {
                    printf("Scelta non valida, riprovare...\n");
                }
                break;
                /*--------------------------------------------------------*/
            case 4: //Contorni
                printf("Scegli tra i Contorni:\n");
                //------------------------------------
                printf("1. Cavolfiori Gratinati\n");
                printf("2. Insalata di Cavolfiore\n");
                printf("3. Peperonata\n");
                printf("4. Insalata di Patate\n");
                printf("5. Caponata\n");
                printf("6. Gateau di Patate\n");
                printf("7. Patate al forno\n");
                //---------------------------------------
                printf("Scegli un'opzione (1-5): ");
                scanf("%d", &sceltaSottoMenu);
                //---------------------------------------------
                if(sceltaSottoMenu == 1){
                    printf("Hai scelto Cavolfiori Gratinati.\n");
                } else if (sceltaSottoMenu == 2){
                    printf("Hai scelto Insalata di Cavolfiore.\n");
                } else if (sceltaSottoMenu == 3){
                    printf("Hai scelto Peperonata.\n");
                } else if (sceltaSottoMenu == 4) {
                    printf("Hai scelto Insalata di Patate.\n");
                } else if (sceltaSottoMenu == 5){
                    printf("Hai scelto Caponata.\n");
                } else if (sceltaSottoMenu == 6){
                    printf("Hai scelto Gateau di Patate.\n");
                } else if (sceltaSottoMenu == 7){
                    printf("Hai scelto Patate al forno.\n");
                } else{
                    printf("Scelta non valida, riprovare...\n");
                }
                break;
                /*--------------------------------------------------------*/
            case 5: //Dolci
                printf("Scegli tra i dolci:\n");
                //------------------------------------
                printf("1. Tiramisu\n");
                printf("2. Torta Sacher\n");
                printf("3. Torta di Mele\n");
                printf("4. Crema Pasticceria\n");
                printf("5. Cheesecake al limone\n");
                printf("6. Brownies\n");
                printf("7. Cookies\n");
                //---------------------------------------
                printf("Scegli un'opzione (1-5): ");
                scanf("%d", &sceltaSottoMenu);
                //---------------------------------------------
                if(sceltaSottoMenu == 1){
                    printf("Hai scelto Tiramisu.\n");
                } else if (sceltaSottoMenu == 2){
                    printf("Hai scelto Torta Sacher.\n");
                } else if (sceltaSottoMenu == 3){
                    printf("Hai scelto Torta di Mele.\n");
                } else if (sceltaSottoMenu == 4) {
                    printf("Hai scelto Crema Pasticceria.\n");
                } else if (sceltaSottoMenu == 5){
                    printf("Hai scelto Cheesecake al limone.\n");
                } else if (sceltaSottoMenu == 6){
                    printf("Hai scelto Brownies.\n");
                } else if (sceltaSottoMenu == 7){
                    printf("Hai scelto Cookies.\n");
                } else{
                    printf("Scelta non valida, riprovare...\n");
                }
                break;
                /*--------------------------------------------------------*/

            case 6: //Bevande
                printf("Scegli tra le bevande:\n");
                //------------------------------------
                printf("1. Coca-Cola \n");
                printf("2. Coca-Cola ZERO\n");
                printf("3. Acqua Naturale\n");
                printf("4. Acqua Frizzante\n");
                //---------------------------------------
                printf("Scegli un'opzione (1-4): ");
                scanf("%d", &sceltaSottoMenu);
                //---------------------------------------------
                if(sceltaSottoMenu == 1){
                    printf("Hai scelto Coca-Cola.\n");
                } else if (sceltaSottoMenu == 2){
                    printf("Hai scelto Coca-Cola ZERO.\n");
                } else if (sceltaSottoMenu == 3){
                    printf("Hai scelto Acqua Naturale.\n");
                } else if (sceltaSottoMenu == 4) {
                    printf("Hai scelto Acqua Frizzante.\n");
                } else{
                    printf("Scelta non valida, riprovare...\n");
                }
                break;
                /*--------------------------------------------------------*/

            case 7: // Esci
                printf("Uscita in corso...\n");
                continua = 0;
                break;
                /*--------------------------------------------------------*/
            }   
        } while(sceltaPrincipale!=0);  
    } 
