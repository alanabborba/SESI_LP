/* Verificação de Ano de Eleição
Leia um ano e informe se é ano de eleição (múltiplo de 4).*/

#include<stdio.h>

int main(){
     int ano;
  
  printf("DIGITE O ANO: ");
  scanf("%i", &ano);
  
  if (ano < 366) {
    printf("ESTE ANO NÃO É ANO ELEITORAL");
  } else {
      printf("ESSE ANO É ELEITORAL");
  }
}