  /*  8) Sistema de Login Simples
Leia usuário e senha:
Usuário correto: admin
Senha correta: 1234
Informe se o login foi bem-sucedido ou não.*/
    
#include<stdio.h>
int main(){
    char usuario, senha, admin;
    
    printf("DIGITE O USUÁRIO: ");
    scanf("%c", &usuario);
    
    printf("\n DIGITE SUA SENHA: ");
    scanf("%c", &senha);
    
    if(usuario == admin) {
    printf("\n USUÁRIO CORRETO");
    } else {
    printf("\n USUÁRIO INCORRETO");
    }
    
    if( senha == 1234) {
        printf("\n SENHA CORRETA");
    } else {
        printf("\n SENHA INCORRRETA");
    }
}
    