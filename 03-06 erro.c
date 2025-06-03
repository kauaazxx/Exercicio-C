#include <stdio.h>
#include "alunos.h"
#include "notas.h"

int main() {
    int opcao;
    Aluno alunos[10];
    Nota notas[50];
    int contAluno = 0, contNota = 0;

    do {
        printf("\nSistema Escolar\n");
        printf("1 - Cadastrar Aluno\n");
        printf("2 - Cadastrar Nota\n");
        printf("3 - Calcular Média\n");
        printf("0 - Sair\n");
        printf("Selecione uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (contAluno < 10) {
                    cadastrarAluno(&alunos[contAluno], &contAluno);
                } else {
                    printf("Limite de alunos atingido!\n");
                }
                break;
            case 2:
                if (contNota < 50) {
                    cadastrarNota(&notas[contNota], &contNota);
                } else {
                    printf("Limite de notas atingido!\n");
                }
                break;
            case 3:
                calcularMedia(alunos, contAluno, notas, contNota);
                break;
            case 0:
                printf("A disposição!.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}





