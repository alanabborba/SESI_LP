#include <stdio.h>

int main() {
    float numeros[10]; 
    int i, j;
    int temp;

    printf("DIGITE 10 NÚMEROS:\n");
    for(i = 0; i < 10; i++) {
        printf("NÚMERO %d: ", i + 1);
        scanf("%f", &numeros[i]);  }
    
    for(i = 0; i < 9; i++) {           
        for(j = i + 1; j < 10 - i; j++) {  
            if(numeros[i] > numeros[j]) {
                temp = numeros [i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            } } }

    printf("\nVETOR EM ORDEM CRESCENTE:\n");
    for(i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]); 
    
        
    } printf("\n"); }
    