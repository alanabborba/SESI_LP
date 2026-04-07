#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n1: OLÁ! | 2: TUDO CERTO CONTIGO? | 3: SAIR.\n");
        printf("ESCOLHA UMA OPÇÃO: ");
        scanf("%d", &opcao);

        if (opcao == 1) printf("OLÁ! \n");
        if (opcao == 2) printf("TUDO CERTO CONTIGO?\n");

    } while (opcao != 3); // So para se digitar 3

    printf("TCHAU! ATÉ LOGO!");
    return 0;
}