#include <stdio.h>
#include <locale.h>
int main () {
    setlocale (LC_ALL,"");
    float n1, n2, n3, n4, media;
    char nome [20];
    printf ("digite o nome do aluno: \n");
    scanf ("%s", nome);
    printf ("Digite as quatro notas do aluno:\n");
    scanf ("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = (n1+n2+n3+n4) / 4;
    if (media>5)
{
printf("Aluno Aprovado");
}
else if (media>3)
{
printf("Aluno de Recuperação");
}
else 
{
printf("Aluno Reprovado");
}
return 0;
}