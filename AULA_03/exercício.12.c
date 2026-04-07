#include <stdio.h>

int main() {
    int i = 2;      
    int pares = 0; 

    do {
        pares = pares + 1; 
        i = i + 2;        
    } while (i <= 50);    

    printf("TOTAL DE PARES: %i", pares);

   
}