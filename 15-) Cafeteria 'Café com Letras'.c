#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    int i;

    for (i = 0; i < 7; i++) {
        printf (" ---- Cafeteria 'Café com Letras' ---- ");
        printf("Nota do cliente %d (0 a 10):\n", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / 7;

    printf("\nMédia das notas: %.2f\n", media);

    if (media >= 8) {
        printf("Avaliação: Boa\n");
    } else if (media >= 5) {
        printf("Avaliação: Razoável\n");
    } else {
        printf("Avaliação: Ruim\n");
    }

    return 0;
}

   