#include <stdio.h>

int main () {
    int numero[6];
    int i;
    int maior;
    
    for(i = 0; i < 6; i++) {
        printf("DIGITE A NOTA DO ALUNO %d: ", i + 1);
        scanf("%d", &numero[i]);

        if(i == 0 || numero[i] > maior) {
            maior = numero[i]; } }

    printf("O MAIOR VALOR É: %d\n", maior);
}