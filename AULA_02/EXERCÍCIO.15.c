  /*15) Verificação de Maioridade para Votação
Leia a idade e informe:
Não pode votar (< 16)
Voto opcional (16–17 ou > 70)
Voto obrigatório (18–70)*/
    
#include<stdio.h>
int main(){
   int idade;
   
   printf("DIGITE SUA IDADE: ");
   scanf("%i", &idade);
   
   if (idade <= 16) {
       printf("NÃO PODE VOTAR");
       
   } else if (idade >= 17 && idade > 70) {
       printf("VOTO OPCIONAL");
       
   } else (idade >= 18 && idade < 69); {
       printf("VOTO OBRIGATÓRIO");
   }
}