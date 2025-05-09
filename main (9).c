#include <stdio.h>
#include <locale.h>
int main () {
    setlocale (LC_ALL,"");
    int lado1, lado2, lado3;
    printf("Digite os três lados do triângulo:");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    if (lado1 == lado2 && lado2 == lado3) {
    printf("O triângulo é equilátero.");
    } 
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) 
    {
    printf("O triângulo é isósceles.");
    }
    else 
    {
    printf("O triângulo é escaleno.");
    }
    return 0;
}
