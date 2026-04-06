/* Cálculo de Conta de Energia
Leia o consumo em kWh:
Até 100 → R$0,50/kWh
101 a 200 → R$0,75/kWh
Acima de 200 → R$1,00/kWh
Calcule o valor total. */

#include<stdio.h>

int main(){
    float valor, valorFinal;
   
   printf("DIGITE O VALOR: "); 
   scanf("%f", &valor);
   
   if (valor <= 100) {
        (valorFinal = 0.50 * valor); }
   else if (valor >= 101) {
        (valorFinal = 0.75 * valor); }
   else {
       (valorFinal = 1,00 * valor);
   }
    printf("O VALOR A PAGAR É: %.2f\n", valorFinal);
   }
       
  
