#include <stdio.h>

int main() {
    int numero;
    int numero2;
    int i = 1; 

    printf("DIGITE UM NÚMERO: ");
    scanf("%i", &numero);
    
    printf("DIGITE UM NÚMERO: ");
    scanf("%i", &numero2);

 
    for (int i=numero; i <= numero2 ; i=i+1){
    printf("%i\n", i );
    
    }
}