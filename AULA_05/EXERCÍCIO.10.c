#include <stdio.h>

int main() {
    float numeros[10]; 
    float aux;         
    int i, j;

    printf("DIGITE 10 NÚMEROS:\n");
    for(i = 0; i < 10; i++) {
        printf("NÚMERO %d: ", i + 1);
        scanf("%f", &numeros[i]);  }
    
    for(i = 0; i < 9; i++) {           
        for(j = 0; j < 9 - i; j++) {  
            if(numeros[j] > numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux; } } }

    printf("\nVETOR EM ORDEM CRESCENTE:\n");
    for(i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]); 
    
        
    } printf("\n"); }
    