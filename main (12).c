#include <stdio.h>
#include <locale.h>
int main () {
    setlocale (LC_ALL,"");
    int num1, num2, num3;
    printf("Digite o primeiro número:");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    if (num1 == num2 && num2 == num3)
    {
    printf("Todos os números são iguais.\n");
    } 
    else if (num1 >= num2 && num1 >= num3) 
    {
    printf("O maior número é: %d", num1);
    }
    else if (num2 >= num1 && num2 >= num3) 
    {
    printf("O maior número é: %d", num2);
    }
    else
    {
    printf("O maior número é: %d", num3);
    }
    return 0;
}