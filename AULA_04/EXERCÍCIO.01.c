#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0;
    float media;
    int i, acima = 0;

for(i=0; i<10; i++) {
    printf("DIGITE A NOTA DO ALUNO %i: ", i + 1);
    scanf("%f", &notas[i]);
        soma += notas[i]; }

media = soma / 10;

printf("\nA MÉDIA DA TURMA FOI: %.2f\n", media);

for(i=0; i<10; i++) {
        if(notas[i] > media) {
            acima++; } }

printf("QUANTIDADES DE NOTAS ACIMA DA MÉDIA: %i\n", acima);

    printf("NOTAS ACIMA DA MÉDIA:\n");
    for(i=0; i<10; i++) {
        if(notas[i] > media) {
            printf("%.2f\n", notas[i]); } } }