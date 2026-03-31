  /*   9) Número Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero*/
    
#include<stdio.h>
int main(){
    float n1;
    
    printf("DIGITE UM NÚMERO: ");
    scanf("%f", &n1);
    
    if(n1 > 0){
        printf("ESSE NÚMERO É POSITIVO");
   } else if (n1 < 0) {
       printf("ESSE NÚMERO É NEGATIVO");
   } else {
       printf("ESSE NÚMERO É CONSIDERAO ZERO");
   }
}
    