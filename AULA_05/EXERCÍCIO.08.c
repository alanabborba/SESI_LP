#include <stdio.h>

int main() {
    int numero[10];
    int i;
    int soma = 0;
    float media;

    for(i = 0; i < 10; i++) {
        printf("DIGITE UM %dº NÚMERO: ", i + 1);
        scanf("%d", &numero[i]);
        soma += numero[i];
    }
    media = soma / 10.0;

    printf("\nMÉDIA: %.2f\n", media);

    printf("OS NÚMEROS QUE SÃO MAIORES DO QUE A MÉDIA:\n");
    for(i = 0; i < 10; i++) {
        if(numero[i] > media) {
            printf("%d\n", numero[i]);
} } }