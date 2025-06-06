#include <stdio.h>

typedef struct {
    int codigo;
    char nome[20];
    float preco;
} Peca;

Peca pecas[3] = {
    {1, "Camisa", 29.90},
    {2, "Calça", 49.90},
    {3, "Casaco", 99.90}
};

int main() {
    int codigo;

    printf(" ---- Loja de Roupas 'FashionMix' ---- \n");
    printf("1 - Camisa\n");
    printf("2 - Calça\n");
    printf("3 - Casaco\n");

    printf("Digite o código da peça desejada:\n");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Você escolheu: Camisa, valor de R$ 29,90\n");
            break;
        case 2:
            printf("Você escolheu: Calça, valor de R$ 49,90\n");
            break;
        case 3:
            printf("Você escolheu: Casaco, valor de R$ 99,90\n");
            break;
        default:
            printf("Número inválido, tente novamente...\n");
            break;
    }

    return 0;
}