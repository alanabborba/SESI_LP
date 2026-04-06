/* 17) Classificação de Temperatura
Leia uma temperatura:
Frio (< 15°C)
Agradável (15–25°C)
Quente (> 25°C) */

#include<stdio.h>

int main(){
     float temperatura;
   
   printf("DIGITE A TEMPERATURA: ");
   scanf("%f", &temperatura);
   
   if (temperatura <= 15) {
       printf("ESTE LOCAL ESTÁ FRIO");
       
   } else if (temperatura < 25) {
       printf("ESTE LOCAL ESTÁ COM TEMPERATURA AGRADÁVEL");
       
   } else (temperatura >25); {
       printf("ESTE LOCAL ESTÁ QUENTE");
   }
}