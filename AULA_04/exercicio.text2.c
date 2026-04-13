#include <stdio.h>

int main(){
  
float salario[3];
float soma = 0;
 
 
 printf("DIGITE SEU PRIMEIRO SALÁRIO: ");
   scanf("%f", &salario[0]);
 
 printf("DIGITE SEU SEGUNDO SALÁRIO: ");
   scanf("%f", &salario[1]);
 
 printf("DIGITE SEU TERCEIRO SALÁRIO: ");
   scanf("%f", &salario[2]);
 
 soma = salario[0] + salario[1] + salario[2];
 
 printf("\n A SOMA DE TODOS OS SALÁRIOS: %.2f", soma);
}