#include <stdio.h>

int main() {
    float notas[5][4];
    float media;
    int i, j;

    printf(" ---- Escola de Idiomas Língua Viva ---- \n");

    for (i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("Nota da prova %d:\n", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n--- Resultados Finais ---\n");
    for (i = 0; i < 5; i++) {
        media = 0;
        for (j = 0; j < 4; j++) {
            media += notas[i][j];
        }
        media /= 4;
        printf("Aluno %d - Média: %.2f - ", i + 1, media);
        if (media >= 6) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}

  