#include <stdio.h>

int main() {

    int matriz[3][3];

    for(int l = 0; l < 3; l++) {
        for(int c = 0; c < 3; c++) {
            printf("\nDIGITE VALOR DE L-%i E C-%i: ", l+1, c+1);
            scanf("%i", &matriz[l][c]);
        }
    }
    printf("\nDIAGONAL PRINCIPAL:\n");

    for(int l = 0; l < 3; l++) {
        for(int c = 0; c < 3; c++) {
            if (l == c) {
                printf(" | %i", matriz[l][c]);
            }
        }
        printf("\n");
    } }