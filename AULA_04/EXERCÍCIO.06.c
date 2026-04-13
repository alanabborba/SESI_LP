#include <stdio.h>

int main() {
    int numeros[10];
    int pares[10], impares[10];
    int par = 0, impar = 0;

    printf("DIGITE 10 NÚMEROS INTEIROS:\n");
    for (int i = 0; i < 10; i++) {
        printf("%dº NÚMERO: ", i + 1);
        scanf("%d", &numeros[i]); }

for (int i = 0; i < 10; i++) {
    if (numeros[i] % 2 == 0) {
        pares[par] = numeros[i];
            par++;
 } else {
    impares[impar] = numeros[i];
            impar++; } }

printf("\nRESULTADO:\n");
    
    printf("\nNÚMEROS PARES (%d encontrados): ", par);
    for (int i = 0; i < par; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nNÚMEROS IMPARES (%d encontrados): ", impar);
    for (int i = 0; i < impar; i++) {
        printf("%d ", impares[i]); }
    
    printf("\n\n"); }