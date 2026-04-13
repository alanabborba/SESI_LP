#include <stdio.h>

int main() {
    int idades[15];
    int jovem = 0;
    int adulto = 0;
    int idoso = 0;
    int i;

for(i=0; i<15; i++) {
    printf("DIGITE A IDADE DA PESSOA %d: ", i + 1);
    scanf("%i", &idades[i]);

 if(idades[i]<=17) {
    jovem++;
} else if(idades[i] <= 59) {
    adulto++;
} else {
    idoso++; } }

    printf("\nRESULTADO DA CLASSIFICAÇÃO\n");
    printf("JOVENS: %d\n ADULTOS: %d\n IDOSOS: %d\n", jovem, adulto, idoso);

if(jovem > adulto && jovem > idoso) {
    printf("O GRUPO COM MAIOR QUANTIDADE É OS JOVENS.\n");
} else if(adulto > jovem && adulto > idoso) {
    printf("O GRUPO COM MAIOR QUANTIDADE É OS ADULTOS.\n");
} else if(idoso > jovem && idoso > adulto) {
    printf("O GRUPO COM MAIOR QUANTIDADE É OS IDOSOS.\n");
} else {
    printf("OCORREU UM EMPATE!\n");
} }