#include <stdio.h>
#include <locale.h>
int main () {
    setlocale (LC_ALL,"");
    int ano;
    printf("Digite um ano:");
    scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) 
    {
    printf("%d é um ano bissexto.", ano);
    }
    else
    {
    printf("%d não é um ano bissexto.", ano);
    }
    return 0;
    
}