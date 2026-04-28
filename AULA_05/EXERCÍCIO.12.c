#include <stdio.h>

int main() {
    int n[6];
    int i;
    int maior;
 
    for(i = 0; i < 6; i++) {
        printf("DIGITE O VALOR %d: ", i + 1);
        scanf("%d", &n[i]); }

    int segundoMaior = n[0];

    for(i = 1; i < 6; i++) {
        if(n[i] > maior) {
            segundoMaior = maior;
            maior = n[i];
        } else if(n[i] > segundoMaior && n[i] != maior) {
            segundoMaior = n[i]; } }

    printf("SEGUNDO MAIOR VALOR: %d\n", segundoMaior); }