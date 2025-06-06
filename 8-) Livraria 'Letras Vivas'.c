#include <stdio.h>

typedef struct {
    char nome[100];
    int ano;
}Livro ;

int main() {
    Livro livros[8];
    int i;

    printf("---- Livraria Letras Vivas ----\n");
    printf("Faça o cadastro de 8 livros:\n");

    for (i = 0; i < 8; i++) {
        printf("\nLivro %d:\n", i + 1);

        printf("Nome:\n");
        scanf(" %[^\n]", livros[i].nome);

        printf("Ano de publicação:\n");
        scanf("%d", &livros[i].ano);
    }

    printf("\nLivros publicados antes do ano 2000:\n");
    for (i = 0; i < 8; i++) {
        if (livros[i].ano < 2000) {
            printf("Nome: %s \n Ano: %d\n", livros[i].nome, livros[i].ano);
        }
    }

    return 0;
}