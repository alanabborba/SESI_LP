  /*12) Cálculo de Salário com Bônus
Leia o salário:
Se maior que 3000 → bônus de 5%
Caso contrário → bônus de 10%
Exiba o salário final.*/
    
#include<stdio.h>
int main(){
    float salario, bonus, valorFinal;
   
   printf("DIGITE O SEU SALÁRIO: "); 
   scanf("%f", &salario);
   
   if (salario > 3000) {
        (bonus = 0.5 * salario);
   } else {
        (bonus = 0.10 * salario);
       
   }
        
    valorFinal = salario + bonus;

    printf("VALOR DO BÔNUS: %.2f\n", bonus);
    printf("VALOR FINAL: %.2f\n", valorFinal);

    
}
    