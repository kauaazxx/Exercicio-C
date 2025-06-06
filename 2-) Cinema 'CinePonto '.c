#include <stdio.h>

int main() {
    int ingressos;
    int cliente = 1;

    printf("---- Bem-vindo ao sistema de pontos do CinePonto! ---- \n");
    printf("Cada ingresso vale 10 pontos!\n");
    printf ("Digite 0 para sair !\n");

    do {
        printf("\nCliente %d\n",cliente);
        printf ("Digite a quantidade de ingressos comprados:\n");
        scanf("%d", &ingressos);

        while (ingressos < 0) {
            printf("Quantidade inválida. Digite um número positivo\n");
            printf("Cliente %d\n",cliente);
            printf ("Digite a quantidade de ingressos comprados: ");
            scanf("%d", &ingressos);
        }

        if (ingressos > 0) {
            printf("Cliente %d acumulou %d pontos!\n", cliente, ingressos * 10);
            cliente++;
        }
    } while (ingressos != 0);

    printf("\nEncerrando o sistema. Obrigado, volte sempre!\n");
    return 0;
}