  /* 6) Ano Bissexto
Leia um ano e informe se ele é bissexto ou não.*/
    
#include<stdio.h>
int main(){
  int dias;
  
  printf("QUANTOS DIAS TEM O ANO: ");
  scanf("%i", &dias);
  
  if (dias < 366) {
    printf("ESSE ANO NÃO É BISSEXTO");
  } else {
      printf("ESSE ANO É BISSEXTO");
  }
}