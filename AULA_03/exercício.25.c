#include <stdio.h>

int main() {
    int valor;

    printf("VALOR DO SAQUE: ");
    scanf("%d", &valor);

    printf("NOTAS DE 100: %d\n", valor / 100);
    valor %= 100; 

    printf("NOTAS DE 50:  %d\n", valor / 50);
    valor %= 50;  

    printf("NOTAS DE 20:  %d\n", valor / 20);
    valor %= 20;

    printf("NOTAS DE 10:  %d\n", valor / 10);
    valor %= 10;

    printf("NNOTAS DE 5:   %d\n", valor / 5);
    valor %= 5;

    printf("NOTAS DE 1:   %d\n", valor / 1);


}