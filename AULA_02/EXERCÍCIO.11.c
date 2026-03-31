  /*11) Verificação de Múltiplos
Leia dois números e verifique se o primeiro é múltiplo do segundo */
    
#include<stdio.h>
int main(){
    int num1, num2;

    printf("DIGITE UM NÚMERO: ");
    scanf("%i", &num1);

    printf("DIGITE OUTRO NÚMERO: ");
    scanf("%i", &num2);

   
    if (num2 % num1 == 0) {
        printf("ESSES NÚMEROS SÃO MÚLTIPLOS.\n");
    } else if (num1 % num2 != 0) {
        printf("ESSES NÚMEROS NÃO SÃO MÚLTIPLOS. \n", num1, num2);
    } 
}