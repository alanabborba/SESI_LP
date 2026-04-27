#include <stdio.h>

int main() {
    int i;
    float numero;
    int positivo = 0;

    for(i = 0; i < 10; i++) {
        printf("DIGITE O %dº NÚMERO: ", i + 1);
        scanf("%f", &numero);

        if(numero > 0) {
            positivo++;
        }
    }

    printf("QUANTIDADE DE NÚMEROS POSITIVOS:%d\n", positivo); }