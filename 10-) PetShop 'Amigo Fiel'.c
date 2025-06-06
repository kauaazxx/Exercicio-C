#include <stdio.h>

typedef struct {
    char nome[50];
    char tipo[30];
    int idade;
} Animal;

void AnimaisVelhos ();

Animal animais[6];

int main() {
    
    printf("---- Pet Shop Amigo Fiel ----\n");
    for (int i = 0; i < 6; i++) {
        printf("\nAnimal %d:\n", i + 1);
        printf("Nome:\n");
        scanf(" %[^\n]", animais[i].nome);
        printf("Tipo (ex: cachorro, gato):\n");
        scanf(" %[^\n]", animais[i].tipo);
        printf("Idade:\n");
        scanf("%d", &animais[i].idade);
    }

    AnimaisVelhos();

    return 0;
}

void AnimaisVelhos() {
    printf("\nAnimais com mais de 5 anos:\n");
    for (int i = 0; i < 6; i++) {
        if (animais[i].idade > 5) {
            printf("- %s (%s, %d anos)\n", animais[i].nome, animais[i].tipo, animais[i].idade);
        }
    }
}