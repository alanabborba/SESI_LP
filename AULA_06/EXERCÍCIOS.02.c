#include <stdio.h>

int main() {

	int matriz[2][2];
	int soma =0;

	for(int l = 0; l < 2; l++) {
		for(int c=0; c < 2; c++) {
			printf("\nDIGITE VALOR DE L-%i E C-%i: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	int l=0;
	int c=0;

	while( l < 2) {
		c=0;
		while(c<2) {
			printf(" | %i", matriz[l][c]);
			soma = soma + matriz[l][c];
			c++;
		}
		printf("\n");
		l++;
	}
	
    printf("\n O RESULTADO DA SOMA DOS NÚMEROS É: %i\n", soma); 
	    
 
}
