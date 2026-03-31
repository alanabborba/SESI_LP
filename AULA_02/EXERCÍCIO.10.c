  /*   10) Cálculo de IMC
Leia peso e altura e calcule o IMC.
Classifique:
Abaixo do peso (< 18.5)
Normal (18.5–24.9)
Sobrepeso (25–29.9)
Obesidade (≥ 30). */
    
#include<stdio.h>
int main(){
    float peso, altura, IMC;
    
    printf("DIGITE SEU PESO");
    scanf("%f", &peso);
    
    printf("DIGITE SUA ALTURA");
    scanf("%f", &altura);
    
    IMC = peso / (altura*2); 
    
    
    if (IMC <= 18.5 ) {
    printf("ABAIXO DO PESO");
    } else if (IMC <=24.9 ) {
    printf("NORMAL");
    } else if (IMC <=29.9 ) {
    printf("SOBREPESO");
    } else {
    printf("OBESIDADE"); 
        
    } 
    
}
    
   
    