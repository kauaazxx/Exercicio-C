#include <stdio.h>
#include <locale.h>
int main () {
    setlocale (LC_ALL,"");
    int num1, num2;
    printf("Digite o primeiro número inteiro:");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro:");
    scanf("%d", &num2);
    if (num1 > num2) {
    printf("O maior número é: %d", num1);
    }
    else if (num2 > num1) 
    {
    printf("O maior número é: %d", num2);
    }
    else
    {
    printf("Os números são iguais.");
    }
return 0;
}