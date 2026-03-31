  /* 2) Leia um número inteiro e informe se ele é par ou ímpar.*/
    
#include<stdio.h>
int main(){
    
    int numero, resultado;
   
   //SAÍDA DE DADOS 
    printf("DIGITE UM NÚMERO INTEIRO:");
//ENTRADA DE DADOS
    scanf("%i", &numero);
        resultado = numero % 2;
        
    if(resultado == 0){
        printf("SEU NÚMERO É PAR");
    } else {
        printf("SEU NÚMERO É IMPAR");
    }
    
    }
    