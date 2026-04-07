#include <stdio.h>

int main() {
    int n;

    do {
        printf("DIGITE UM NÚMERO QUE SEJA POSITIVO: ");
        scanf("%i", &n);

        if (n <= 0) {
            printf("ERRO! ESSE NÚMERO É INVÁLIDO!\n");
        }

    } while (n <= 0); // Repete enquanto o numero for "ruim" (0 ou negativo)

    printf("OBRIGADA! VOCÊ DIGITOU: %i", n);

}