#include <stdio.h>

int main(){
    float N1, N2, soma;
    
    printf("Digite um número:");
    scanf("%f", &N1);
    
    printf("Digite outro número:");
    scanf("%f", &N2);
    
    soma = N1 + N2;
    
    printf("%.2f + %.2f = %.2f", N1, N2, soma);
}