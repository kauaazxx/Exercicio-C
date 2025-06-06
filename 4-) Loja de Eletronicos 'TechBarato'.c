#include <stdio.h>

int main() {
    float precos[10];
    int i, caro = 0, barato = 0;

    printf("----- Loja de Eletrônicos TechBarato -----\n");
    printf("Digite os preços de 10 produtos:\n");

    for (i = 0; i < 10; i++) {
        printf("Produto %d:\n",i + 1);
        printf ("R$ ");
        scanf("%f", &precos[i]);
    }

    for (i = 1; i < 10; i++) {
        if (precos[i] > precos[caro]) {
            caro = i;
        }
        if (precos[i] < precos[barato]) {
            barato = i;
        }
    }
    printf("\nMais caro: produto %d \n R$ %.2f\n", caro + 1, precos[caro]);
    printf("\nMais barato: produto %d \n R$ %.2f\n", barato + 1, precos[barato]);

    return 0;
}