#include <stdio.h>

int main() {

    int matriz[4][4];
    int l = 0;
    int c = 0;
    int contador = 0;

    for(int l = 0; l < 4; l++) {
        for(int c = 0; c < 4; c++) {
            printf("\nDIGITE VALOR DE L-%i E C-%i: ", l+1, c+1);
            scanf("%i", &matriz[l][c]); } }

    l = 0;
    while(l < 4) {
        c = 0;
        while(c < 4) {
            printf(" | %i", matriz[l][c]);

            if(matriz[l][c] > 10) {
                contador++; }
            c++; }
        printf("\n");
        l++; }
    printf("\nA QUANTIDADE DE NUMEROS MAIORES QUE 10: %i\n", contador);
}