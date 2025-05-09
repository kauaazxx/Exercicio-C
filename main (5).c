#include <stdio.h>
#include <locale.h>
int main () {
    setlocale (LC_ALL,"");
    int numero;
    printf ("digite um numero inteiro:");
    scanf ("%d",&numero);
    if (numero % 2 == 0) {
    printf("O número %d é par.", numero);
    }
    else if (numero < 0) 
    {
    printf("O número %d é negativo.", numero);
    }
     else
    {
        printf("O número %d é ímpar.", numero);
    }
return 0;
}