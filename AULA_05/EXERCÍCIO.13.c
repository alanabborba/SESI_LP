#include <stdio.h>

int main() {
    int numero[10];
    int i;
    int n;
    int conta;
    int maiorCont = 0;
    int repetição;

    for(i = 0; i < 10; i++) {
        printf("DIGITE O %dº NUMERO: ", i + 1);
        scanf("%d", &numero[i]); }

    for(i = 0; i < 10; i++) {
        conta = 0;

        for(n = 0; n < 10; n++) {
            if(numero[i] == numero[n]) {
                conta++; } }

        if(conta > maiorCont) {
            maiorCont = conta;
            repetição = numero[i]; } }

    printf("\nNUMERO QUE MAIS SE REPETEM: %d\n", repetição);
    printf("QUANTIDADE DE REPETIÇÕES: %d\n", maiorCont); }