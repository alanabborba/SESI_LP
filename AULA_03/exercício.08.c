#include <stdio.h>

int main() {
    int numero;
    int i = 1; 

    printf("ESCOLHA UM NÚMERO DE 1 A 10: ");
    scanf("%i", &numero);

    do {
        printf("%i X %i = %i\n", numero, i, numero * i);
        
        i = i + 1; 
    } while (i <= 10); 
}