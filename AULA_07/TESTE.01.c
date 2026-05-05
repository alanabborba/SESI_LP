#include<stdio.h>

int somadedoisvalores(int a, int b) {
	return a + b;
}

	int main() {
		int n1, n2;
		int soma=0;

		printf("DIGITE O 1° VALOR: ");
		scanf("%i", &n1);

		printf("DIGITE O 2° VALOR: ");
		scanf("%i", &n2);


		//soma = n1 + n2;
		soma = somadedoisvalores(n1, n2);

		printf("RESULTADO DA SOMA DOS DOIS VALORES: %i", soma);
		printf("\n 5 + 5 = %i", somadedoisvalores(5, 5));
		printf("\n 3 + 15 = %i", somadedoisvalores(3, 15));


	}
