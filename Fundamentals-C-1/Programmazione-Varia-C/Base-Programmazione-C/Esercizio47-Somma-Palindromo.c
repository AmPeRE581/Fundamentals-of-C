/*Esercizio47: Scrivere ed eseguire un programma C++ opportunamente suddiviso in funzioni che letta in input una sequenza di 10 caratteri, stampi su standard output “SI” se la sequenza è palindroma, “NO” altrimenti.
Una sequenza di caratteri si dice palindroma se, letta al contrario, rimane invariata. Ad esempio, sono palindrome le sequenze: “abcbaabcba”, “aeiouuoiea”.*/

#include <stdio.h>
#include <string.h>

#define MAX_LUNGHEZZA 10

/*Funzione per verificare se una stringa è palindroma*/
int isPalindroma(char stringa[]){
    int lunghezza = strlen(stringa);
    for(int i=0; i<lunghezza / 2; i++){
        if(stringa[i] != stringa[lunghezza - i - 1]){
            return 0; /*Non è palindroma*/
        }
    }

    return 1; /*E' palindromo*/
}

int main(){
    char stringa[MAX_LUNGHEZZA];

    printf("Inserisci una sequenza di %d caratteri: ", MAX_LUNGHEZZA);
    scanf("%s", stringa);

    if(isPalindroma(stringa)){
        printf("SI\n");
    } else {
        printf("NO\n");
    }
}