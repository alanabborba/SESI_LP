#include <stdio.h>

int main() {

    int matriz[4][4];
    int l = 0;
    int c = 0;
    int maior = matriz[0][0];
    int menor = matriz[0][0];

    for(int l = 0; l < 4; l++) {
        for(int c = 0; c < 4; c++) {
            printf("\nDIGITE VALOR DE L-%i E C-%i: ", l+1, c+1);
            scanf("%i", &matriz[l][c]); } }
    l = 0;
    while(l < 4) {
        c = 0;
        while(c < 4) {
            printf(" | %i", matriz[l][c]);

            if(matriz[l][c] > maior) {
                maior = matriz[l][c]; }

            if(matriz[l][c] < menor) {
                menor = matriz[l][c];}
            c++; }
        printf("\n"); l++; }
    printf("\nMAIOR VALOR: %i", maior);
    printf("\nMENOR VALOR: %i\n", menor); }
    