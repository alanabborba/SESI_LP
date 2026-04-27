#include <stdio.h>

int main() {
    float numeros[10];
    int i;

    printf("DIGITE UM NÚMERO\n");

    for(i = 0; i < 10; i++) {
        printf("NÚMERO %d: ", i + 1);
        scanf("%f", &numeros[i]);

        if(numeros[i] < 0) {
            numeros[i] = 0;
        }
    }

    printf("\n NOVA LISTA (NÚMEROS NEGATIVOS, SUBSTITUIDOS):\n");
    for(i = 0; i < 10; i++) {
        printf("%.1f ", numeros[i]); }
    printf("\n");
}