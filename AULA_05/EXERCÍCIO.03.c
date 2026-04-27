#include <stdio.h>

int main () {
    int numero [8];
    int i;
    int soma = 0;
    
    
    for(i=0; i<8; i++) {
        printf("DIGITE A NOTA DO ALUNO %i: ", i + 1);
        scanf("%i", &numero[i]);
        
        soma = soma + numero[i];
    }
    printf("A SOMA DE TODAS AS NOTAS É: %i", soma);
}
    
    
