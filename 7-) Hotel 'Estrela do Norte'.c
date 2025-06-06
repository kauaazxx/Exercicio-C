#include <stdio.h>

int main() {
    int quartos[10];
    int i, ocupados = 0;
    float taxa;

    printf("---- Hotel Estrela do Norte ---- \n");
    printf("Informe se o quarto está ocupado ou livre: \n");
    printf ("\n1 - Ocupado  0 - Livre\n");

    for (i = 0; i < 10; i++) {
        printf("\nQuarto %d: ", i + 1);
        scanf("%d", &quartos[i]);

        if (quartos[i] == 1) {
            ocupados++;
        }
    }

    taxa = (ocupados / 10.0) * 100;

    printf("\nTotal de quartos ocupados: %d\n", ocupados);
    printf("Taxa de ocupação: %.2f%%\n", taxa);

    return 0;
}