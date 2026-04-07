#include <stdio.h>

int main() {
    int num, i, divisores = 0;

    printf("DIGITE UM NÚMERO INTEIRO: ");
    scanf("%i", &num);

    if (num <= 1) {
        printf("%d NÃO É UM NÚMERO PRIMO.\n", num);
    } else {
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d É UM NÚMERO PRIMO.\n", num);
        } else {
            printf("%d NÃO É UM NÚMERO PRIMO.\n", num);
        } } }