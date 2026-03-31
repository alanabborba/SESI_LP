  /* 5) Cálculo de Desconto
Leia o valor de uma compra:
Se for maior que R$100 → desconto de 10%
Caso contrário → desconto de 5%
Exiba o valor final.*/
    
#include<stdio.h>
int main(){
   float valor, desconto, valorFinal;
   
   printf("DIGITE O VALOR DA COMPRA: "); 
   scanf("%f", &valor);
   
   if (valor >= 100) {
        (desconto = 0.10 * valor);
   } else {
        (desconto = 0.5 * valor);
       
   }
        
    valorFinal = valor - desconto;

    printf("VALOR DO DESCONTO: %.2f\n", desconto);
    printf("VALOR FINAL: %.2f\n", valorFinal);

    
}
    