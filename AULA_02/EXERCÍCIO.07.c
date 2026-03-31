  /*  7) Verificação de Triângulo
Leia três valores e verifique se podem formar um triângulo.
Caso formem, classifique como:
Equilátero
Isósceles
Escaleno*/
    
#include<stdio.h>
int main(){
    float a,b,c;
    
    printf("DIGITE UM DOS LADOS DO TRIÂNGULO");
    scanf("%f", &a);
    
    printf("DIGITE OUTRO LADO DO TRIÂNGULO");
    scanf("%f", &b);
    
    printf("DIGITE O TERCEIRO LADO DO TRIÂNGULO");
    scanf("%f", &c);

    if(a==b && a==c){
        printf("ESSE TRIÂNGULO É EQUILÁTERO");
    } else if(a==b || a==c || b==c){
        printf("ESSE TRIÂNGULO É ISÓCELES");
    } else {
        printf("ESSE TRIÂNGULO É ESCALENO");
    }
}