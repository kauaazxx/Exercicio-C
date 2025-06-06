#include <stdio.h>

int main() {
    int preco, opcao, prato, sobebeb;
    float total = 0, desconto = 0, valorfinal = 0;
    int pratos = 0, sobremesasbebidas = 0;

    do {
        printf("---- Bem vindo(a) ao nosso menu! ----\n");
        printf("1 - Pratos Principais\n");
        printf("2 - Sobremesas e Bebidas\n");
        printf("3 - Ver Desconto e Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Pratos Principais:\n");
                printf("1 - Filé de Peixe Grelhado (R$25)\n");
                printf("2 - Bife com Fritas (R$30)\n");
                printf("3 - Frango a Milanesa (R$20)\n");
                printf("Escolha uma opção:\n");
                scanf("%d", &prato);

                if (prato == 1) {
                    total += 25;
                    pratos++;
                    printf("File de peixe grelhado adicionado!\n");
                } else if (prato == 2) {
                    total += 30;
                    pratos++;
                    printf("Bife com fritas adicionado!\n");
                } else if (prato == 3) {
                    total += 20;
                    pratos++;
                    printf("Frango a milanesa adicionado!\n");
                } else {
                    printf("Opção inválida, tente novamente... !\n");
                }
                break;

            case 2:
                printf("Sobremesas e Bebidas:\n");
                printf("1 - Torta de chocolate e Cerveja (R$13)\n");
                printf("2 - Cheesecake e Vinho (R$18)\n");
                printf("3 - Sorvete e Refrigerante (R$10)\n");
                printf("Escolha uma opção:\n");
                scanf("%d", &sobebeb);

                if (sobebeb == 1) {
                    total += 13;
                    sobremesasbebidas = 1;
                    printf("Torta de chocolate e cerveja adicionados!\n");
                } else if (sobebeb == 2) {
                    total += 18;
                    sobremesasbebidas = 1;
                    printf("Cheesecake e vinho adicionados!\n");
                } else if (sobebeb == 3) {
                    total += 10;
                    sobremesasbebidas = 1;
                    printf("Sorvete e refrigerantes adicionados!\n");
                } else {
                    printf("Opção inválida, tente novamente... !\n");
                }
                break;

            case 3:
                desconto = 0;
                if (pratos >= 3) {
                    desconto += total * 0.10;
                }
                if (sobremesasbebidas == 1) {
                    desconto += total * 0.05;
                }
                if (desconto > total * 0.15) {
                    desconto = total * 0.15;
                }
                valorfinal = total - desconto;

                printf("Total: R$%.2f\n", total);
                printf("Desconto: R$%.2f\n", desconto);
                printf("Valor final: R$%.2f\n", valorfinal);
                break;

            default:
                printf("Opção inválida, tente novamente... !\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}