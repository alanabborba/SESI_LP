#include <stdio.h>

int main() {
    int n;

    printf("DIGITE UM NÚMERO, PARA REALIZARMOS A CONTAGEM: ");
    scanf("%i", &n);

    do {
        printf("%i \n", n); 
        n = n - 1;        
    } while (n >= 0);     
}