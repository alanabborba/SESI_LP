#include <stdio.h>

int main() {
    float temp[7], soma = 0, media, maior, menor;
    int i, acima = 0;

for(i = 0; i < 7; i++) {
        printf("TEMPERATURA DO DIA %i: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i]; }

media = soma / 7;
    maior = temp[0];
    menor = temp[0];

for(i=0; i < 7; i++) {
    if(temp[i] > maior) maior = temp[i];
    if(temp[i] < menor) menor = temp[i];
    if(temp[i] > media) acima++; }

    printf("\nMEDIA DA SEMANA: %.2f", media);
    printf("\nMAIS QUENTE: %.2f", maior);
    printf("\nMAIS FRIO: %.2f", menor);
    printf("\nDIAS DA SEMANA: %i\n", acima);

}