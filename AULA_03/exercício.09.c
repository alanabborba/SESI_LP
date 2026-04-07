#include <stdio.h>

int main() {
    int numero;
    int i = 1; 

    printf("DIGITE UM NÚMERO: ");
    scanf("%i", &numero);

 
    for (int i=1 ; i <= numero ; i=i+1){
    printf("%i\n", i );
    
    }
}