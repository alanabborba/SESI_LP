#include <stdio.h>

int main() {
    int numero;
    int contador = 0; 

    do {
        printf("DIGITE UM NÚMERO (quando finalizar, adicione um número negativo): ");
        scanf("%i", &numero);

        if (numero >= 0)
        contador = contador + 1;
    } while (numero >= 0); {

    printf("\n O RESULTADO DA SOMA TOTAL É:  %i", contador); }
}