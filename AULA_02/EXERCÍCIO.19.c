/* Cálculo de Frete
Leia o peso de uma encomenda:
Até 5kg → R$10
5 a 20kg → R$20
Acima de 20kg → R$50. */

#include<stdio.h>
int main(){
    float valor, valorFinal;
   
   printf("DIGITE O PESO DA COMPRA: "); 
   scanf("%f", &valor);
   
   if (valor <= 5) {
        (valorFinal = 10 * valor); }
   else if (valor >= 20) {
        (valorFinal = 20 * valor); }
   else {
       (valorFinal = 50 * valor);
   }
    printf("O VALOR A PAGAR É: %.2f\n", valorFinal);
   }
       
  


