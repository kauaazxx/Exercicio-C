#include <stdio.h>
#include <locale.h>
int main () {
    setlocale (LC_ALL,"");
    int numero;
    printf ("digite o numero:");
    scanf ("%d",&numero);
    if (numero > 0){
    printf("O número %d é positivo.", numero);
    }
    else if (numero < 0) 
    {
    printf("O número %d é negativo.", numero);
    }
     else
    {
        printf("O número digitado é zero.");
    }
return 0;
}