#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float imc;
} Aluno;

void IMC();

Aluno aluno;

int main() {
 

    printf("----- Academia Corpo em Movimento -----\n");
    printf("Bem-vindo ao sistema de classificação de IMC!\n");

    printf("Nome do aluno: ");
    scanf(" %[^\n]", aluno.nome);

    printf("Idade: ");
    scanf("%d", &aluno.idade);

    printf("IMC: ");
    scanf("%f", &aluno.imc);

    IMC();

    return 0;
}

void IMC() {
    printf("\nAluno: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("IMC: %.2f\n", aluno.imc);

    if (aluno.imc > 30) {
        printf("Classificação: Obeso\n");
    } else if (aluno.imc >= 25 && aluno.imc <= 30) {
        printf("Classificação: Sobrepeso\n");
    } else {
        printf("Classificação: Saudável\n");
    }
}