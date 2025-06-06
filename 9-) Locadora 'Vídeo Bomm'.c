#include <stdio.h>

int main() {
    int qntd;

    printf (" ---- Locadora Vídeo Boom ---- \n");

    do {
        printf("Quantos filmes deseja alugar? (1 a 5):\n ");
        scanf("%d", &qntd);

        if (qntd < 1 || qntd > 5) {
            printf("\nNúmero inválido! Por favor, digite um valor entre 1 e 5.\n");
        }
        
    } while (qntd < 1 || qntd > 5);

    printf("Você escolheu alugar %d filme(s).\n", qntd);

    return 0;
}