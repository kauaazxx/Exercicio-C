//Biblioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
setlocale(LC_ALL,"");
int a, b, c, d;
printf("Informe o primeiro numero:\n");
scanf("%d",&a);
printf("Informe o segundo numero:\n");
scanf("%d",&b);
printf("Informe o terceiro numero:\n");
scanf("%d",&c);
//Processamento
d = (a+b)/c;
printf ("O resultado é:%d",d);
return 0;
}