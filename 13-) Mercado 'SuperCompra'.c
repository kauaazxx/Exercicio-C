#include <stdio.h>

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

void ValorTotal();

Produto produtos[10];

int main() {
    printf("---- Mercado SuperCompra ----\n");

    for (int i = 0; i < 10; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Nome:\n");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Quantidade em estoque:\n");
        scanf("%d", &produtos[i].quantidade);
        printf("Preço unitário: R$ \n");
        scanf("%f", &produtos[i].preco);
    }

    ValorTotal(produtos);

    return 0;
}

void ValorTotal() {
    float total = 0;
    for (int i = 0; i < 10; i++) {
        total += produtos[i].quantidade * produtos[i].preco;
    }
    printf("\nValor total em estoque: R$ %.2f\n", total);
}
