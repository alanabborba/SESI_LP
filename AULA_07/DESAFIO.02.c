#include <stdio.h>

int adicao(int a, int b) {
	return a + b;
}
int subtracao(int a, int b) {
	return a - b;
}
int multiplicacao(int a, int b) {
	return a * b;
}

int divisao(int a, int b) {
	return a / b;
}

void imprimirvalores(char *descricao, int valor){
    printf("\n%s: %i", descricao, valor);
}

int main() {
	int n1, n2;
	int calcular = 0;
	int opcao;


	printf("\nDIGITE O 1° NÚMERO: ");
	scanf("%i", &n1);

	printf("\nDIGITE O 2° NÚMERO: ");
	scanf("%i", &n2);
	
	printf("\n**************************************************************************\n");
    

    do {
        printf("\n 1: SOMA | 2: DIVISÃO | 3: MULTIPLICAÇÃO | 4: SUBTRAÇÃO | 0: SAIR.\n");
        printf("ESCOLHA UMA OPÇÃO: ");
        scanf("%d", &opcao);

    if (opcao == 1) {
            printf("\nSOMA");
            imprimirvalores("\n SOMA DOS NÚMEROS", adicao(n1, n2));
        } 
        else if (opcao == 2) {
            printf("DIVISÃO\n");
            imprimirvalores("DIVISÃO DOS NÚMEROS", divisao(n1, n2));
        } 
        else if (opcao == 3) {
            printf("MULTIPLICAÇÃO\n");
            imprimirvalores("MULTIPLICAÇÃO DOS NÚMEROS", multiplicacao(n1, n2));
        } 
        else if (opcao == 4) {
            printf("SUBTRAÇÃO\n");
            imprimirvalores("SUBTRAÇÃO DOS NÚMEROS", subtracao(n1, n2));
        }
    printf("\n**************************************************************************\n");

    } while (opcao != 0);
} 


    
    
      
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

