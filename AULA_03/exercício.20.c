#include <stdio.h>

int main() {
    int senhaCorreta = 12112010; 
    int tentativa;

    do {
        printf("DIGITE A SENHA(8 caracteres): ");
        scanf("%i", &tentativa);

        if (tentativa != senhaCorreta){
            printf("SENHA INCORRETA! TENTE NOVAMENTE.\n\n");
        }

    } while (tentativa != senhaCorreta);

    printf("\nSENHA CORRETA. ACESSO LIBERADO!.");
}