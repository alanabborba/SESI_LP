#include <stdio.h>

int main() {
    float saques[10];
    float total_sacado = 0;
    float maior_saque = 0;
    int saques_acima_500 = 0;

printf("REGISTRO DE SAQUES\n");

for (int i = 0; i < 10; i++) {
    printf("DIGITE O VALOR DO SAQUE %iº SAQUE: R$ ", i + 1);
    scanf("%f", &saques[i]);

    total_sacado += saques[i];

    if (i == 0 || saques[i] > maior_saque) {
        maior_saque = saques[i]; }

    if (saques[i] > 500) {
        saques_acima_500++; } }

    printf("\nRELATÓRIO FINAL\n");
    printf("TOTAL SACADO NO DIA: R$ %.2f\n", total_sacado);
    printf("MAIOR SAQUE REALIZADO: R$ %.2f\n", maior_saque);
    printf("QUANTIDADE DE SAQUES ACIMA R$ 500: %d\n", saques_acima_500);}