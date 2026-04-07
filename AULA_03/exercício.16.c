#include <stdio.h>

int main() {
    int numero;
    int soma = 0; 

    do {
        printf("DIGITE UM NÚMERO (quando finalizar, adicione 0): ");
        scanf("%i", &numero);

        soma = soma + numero; 

    } while (numero != 0); 

    printf("\n O RESULTADO DA SOMA TOTAL É:  %i", soma);
}