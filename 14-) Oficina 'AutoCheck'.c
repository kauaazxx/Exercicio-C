#include <stdio.h>

typedef struct {
    char marca[50];
    int ano;
    int km;
}Carro;

Carro carros[5];


int main() {
    
    int i;

    for (i = 0; i < 5; i++) {
        printf ("---- Oficina 'AutoCheck' ----\n");
        printf("Marca:\n");
        scanf(" %[^\n]",carros[i].marca);

        printf("Ano:\n");
        scanf("%d",&carros[i].ano);

        printf("Km:\n");
        scanf("%d",&carros[i].km);
    }

    printf("\nCarros com mais de 100000 km:\n");

    for (i = 0; i < 5; i++) {
        if (carros[i].km > 100000) {
            printf("%s - %d - %d km\n", carros[i].marca, carros[i].ano, carros[i].km);
        }
    }

    return 0;
}