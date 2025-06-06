#include <stdio.h>

int main() {
    int tipo;
    float litros, preco = 0, total;

    printf(" ---- Posto de Gasolina FuelMax! ----\n");
    printf("Informe o tipo de combustível:\n");
    printf("1 - Gasolina (R$6.33)\n");
    printf("2 - Etanol   (R$4.18)\n");
    printf("3 - Diesel   (R$6.00)\n");
    scanf("%d", &tipo);
    printf("Digite a quantidade de litros:\n");
    scanf("%f", &litros);

    switch (tipo) {
        case 1:
            preco = 6.33;
            total = litros * preco;
            printf("---- Gasolina ---- \n");
            printf("Preço por litro: R$ %.2f\n", preco);
            printf("Total a pagar: R$ %.2f\n", total);
            break;
            
        case 2:
            preco = 4.18;
            total = litros * preco;
            printf("---- Etanol! ----\n");
            printf("Preço por litro: R$ %.2f\n", preco);
            printf("Total a pagar: R$ %.2f\n", total);
            break;
            
        case 3:
            preco = 6.00;
            total = litros * preco;
            printf(" ---- Diesel! ---- \n");
            printf("Preço por litro: R$ %.2f\n", preco);
            printf("Total a pagar: R$ %.2f\n", total);
            break;
            
        default:
            printf("Opção Inválida, tente novamente!\n");
            break;
    }

    return 0;
}