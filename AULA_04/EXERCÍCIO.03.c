#include <stdio.h>

int main() {
    int valor[12];
    int i;
    int crescente = 1; 
    int decrecente = 1;

for(i=0; i<12; i++){
    printf("VALOR %d: ", i+1);
    scanf("%i", &valor[i]);}

    for(i = 0; i<11; i++) {
        if (valor[i] < valor[i+1]) decrecente = 0; 
        if (valor[i] > valor[i+1]) crescente = 0;
    
    if (crescente == 1 && decrecente == 0) {
        printf("CRESCENTE\n");
    } else if (decrecente == 1 && crescente == 0) {
        printf("DECRESCENTE\n");
    } else if (crescente == 1 && decrecente == 1) {
        printf("IGUAIS\n");
    } else {
        printf("DESORDENADA\n");}}}
