#include<stdio.h>

int main(){
     
    /* 1) Classificação de Idade
Leia a idade de uma pessoa e informe:
Criança (0–12)
Adolescente (13–17)
Adulto (18–59)
Idoso (60+) */ 
    
    // DECLARAÇÃO
    int idade;
    
    //SAÍDA DE DADOS
    printf("DIGITE SUA IDADE");
    //ENTRADA DE DADOS
    scanf("%i", &idade );
    
    //VERIFICAÇÃO
    if (idade <=12) {
    printf("CRIANÇA");
    } else if (idade <=17) {
    printf("ADOLESCENTE");
    } else if (idade <=59) {
    printf("ADULTO");
    } else {
    printf("IDOSO"); } }
    
   