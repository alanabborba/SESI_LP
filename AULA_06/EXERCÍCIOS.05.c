#include <stdio.h>

int main() {

	int matriz[3][3];
	int soma =0;
	int l=0;
	int c=0;

	for(int l = 0; l < 3; l++) {
		for(int c=0; c < 3; c++) {
			printf("\nDIGITE VALOR DE L-%i E C-%i: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	while( l < 3) {
	    int soma = 0;
		c=0;
		while(c<3) {
			printf("| %i", matriz[l][c]);
			soma = soma + matriz[l][c];
			printf("\n");
			c++;
			
		}
		printf("SOMA DA LINHA %i = %i\n", l+1, soma);
		printf("\n");
        l++;
	}

}
