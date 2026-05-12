#include <stdio.h>

struct Livro {
    int codigo;
    char titulo[50];
    int disponivel;
};

struct Livro livros[100];

int totalLivros = 0;

void cadastrarLivro() {

    printf("\n=== CADASTRAR LIVRO ===\n");

    printf("Codigo: ");
    scanf("%d", &livros[totalLivros].codigo);

    printf("Titulo: ");
    scanf(" %[^\n]", livros[totalLivros].titulo);

    livros[totalLivros].disponivel = 1;

    totalLivros++;

    printf("\nLivro cadastrado com sucesso!\n");
}

void listarLivros() {

    int i;

    if(totalLivros == 0) {
        printf("\nNenhum livro cadastrado!\n");
        return;
    }

    printf("\n=== LISTA DE LIVROS ===\n");

    for(i = 0; i < totalLivros; i++) {

        printf("\nCodigo: %d\n", livros[i].codigo);
        printf("Titulo: %s\n", livros[i].titulo);

        if(livros[i].disponivel == 1) {
            printf("Status: Disponivel\n");
        } else {
            printf("Status: Emprestado\n");
        }
    }
}

void emprestarLivro() {

    int codigo;
    int i;
    int encontrado = 0;

    printf("\nDigite o codigo do livro: ");
    scanf("%d", &codigo);

    for(i = 0; i < totalLivros; i++) {

        if(livros[i].codigo == codigo) {

            encontrado = 1;

            if(livros[i].disponivel == 1) {

                livros[i].disponivel = 0;

                printf("\nLivro emprestado!\n");

            } else {

                printf("\nLivro ja emprestado!\n");
            }
        }
    }

    if(encontrado == 0) {
        printf("\nLivro nao encontrado!\n");
    }
}

void devolverLivro() {

    int codigo;
    int i;
    int encontrado = 0;

    printf("\nDigite o codigo do livro: ");
    scanf("%d", &codigo);

    for(i = 0; i < totalLivros; i++) {

        if(livros[i].codigo == codigo) {

            encontrado = 1;

            livros[i].disponivel = 1;

            printf("\nLivro devolvido!\n");
        }
    }

    if(encontrado == 0) {
        printf("\nLivro nao encontrado!\n");
    }
}

int main() {

    int opcao;

    do {

       printf("\n");
        printf("====================================\n");
        printf("      SISTEMA DE BIBLIOTECA\n");
        printf("====================================\n");

        printf("\n1 - Cadastrar Livro\n");
        printf("2 - Listar Livros\n");
        printf("3 - Emprestar Livro\n");
        printf("4 - Devolver Livro\n");
        printf("0 - Sair\n");

        printf("\nEscolha uma Opção: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                cadastrarLivro();
                break;

            case 2:
                listarLivros();
                break;

            case 3:
                emprestarLivro();
                break;

            case 4:
                devolverLivro();
                break;

            case 0:
                printf("\nEncerrando...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}