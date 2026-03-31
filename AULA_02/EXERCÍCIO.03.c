  /* 3) Leia dois números inteiros e informe qual é o maior ou se são iguais.*/
    
#include<stdio.h>
int main(){
    int n1, n2;
    
    printf("DIGITE UM NÚMERO");
    scanf("%i", &n1);
    
    printf("DIGITE OUTRO NÚMERO");
    scanf("%i", &n2);
    
    if (n1 > n2) {
        printf("O N1 É O MAIOR NÚMERO");
    } else {
        printf("O N2 É O MAIOR NÚMERO");
    }
}