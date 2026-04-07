#include <stdio.h>

int main() {
    int n, linha = 0, coluna;

    printf("DIGITE O TAMANHO DO QUADRADO: ");
    scanf("%d", &n);

    do {
        coluna = 0; 

        do {
            printf("* "); 
            coluna++;
        } while (coluna < n);

        printf("\n"); 
        linha++;

    } while (linha < n);
}