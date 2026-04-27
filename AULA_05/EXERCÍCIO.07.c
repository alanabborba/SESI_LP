#include <stdio.h>

int main () {
    int numero[10];
    int i;
    int soma = 0;
    float media;
    
    for(i = 0; i < 10; i++) {
        printf("DIGITE UM NÚMERO %d: ", i + 1);
        scanf("%d", &numero[i]);
        
        soma = soma + numero[i];
    }
    media = soma / 10.0;
    printf("A MÉDIA DE TODOS OS NÚMEROS É: %.2f\n", media);
}
