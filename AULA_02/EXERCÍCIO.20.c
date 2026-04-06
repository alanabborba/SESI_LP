/* Sistema de Multa de Trânsito
Leia a velocidade de um carro:
Até 60 km/h → sem multa
61–80 → multa leve
81–100 → multa grave
Acima de 100 → multa gravíssima
*/

#include<stdio.h>
int main(){
   float velocidade;
   
   printf("DIGITE A VELOCIDADE: ");
   scanf("%f", &velocidade);
   
   if (velocidade <= 60) {
       printf("SEM MULTA"); 
   } else if (velocidade <=80) {
       printf("MULTA LEVE");
   } else if (velocidade <=100) {
       printf("MULTA GRAVE");
   } else {
       printf("MULTA GRAVÍSSIMA");
   }
}
