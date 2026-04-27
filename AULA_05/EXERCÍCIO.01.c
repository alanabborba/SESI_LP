#include <stdio.h>

int main () {
    int numero [5];
    
    for(int i=0; i<5; i++){
    printf("DIGITE A NOTA DO ALUNO %i: ", i + 1);
    scanf("%i", &numero[i]); }
    
for (int i=0; i < 5; i++) {  
    printf ("\n NÚMERO %i = %i", i +1, numero[i]);}
    
}