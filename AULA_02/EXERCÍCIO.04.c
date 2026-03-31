  /* 3)  Verificação de Aprovação
Leia a nota de um aluno (0 a 10).
Informe:
Aprovado (nota >= 7)
Recuperação (nota entre 5 e 6.9)
Reprovado (nota < 5)*/
    
#include<stdio.h>
int main(){
   float nota;
   
   printf("DIGITE SUA NOTA: ");
   scanf("%f", &nota);
   
   if (nota >=7) {
       printf("APROVADO"); 
   } else if (nota >= 5) {
       printf("RECUPERAÇÃO");
   } else {
       printf("REPROVADO");
   }
}