#include <stdio.h>

struct Produto {
    char nome[50];
    int codigo;
    float preco;
};

int main() {
    struct Produto produtos[5];
    int i;

    printf("---- Padaria Delícia de Trigo ---- \n");
    printf("Cadastro de 5 produtos:\n");

    for (i = 0; i < 5; i++) {
        printf("\nProduto %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome); 

        printf("Código: ");
        scanf("%d", &produtos[i].codigo);

        printf("Preço: R$ ");
        scanf("%f", &produtos[i].preco);
    }

    printf("\nProdutos com preço superior a R$ 10.00:\n");
    for (i = 0; i < 5; i++) {
        if (produtos[i].preco > 10.0) {
            printf("Nome: %s \n Código: %d \n Preço: R$ %.2f\n",
                   produtos[i].nome,
                   produtos[i].codigo,
                   produtos[i].preco);
        }
    }

    return 0;
}
               