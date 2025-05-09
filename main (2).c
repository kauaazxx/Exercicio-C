//biclioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
setlocale(LC_ALL,"");
char nome[15];
int vitorias, empates, pontos;
printf("Qual o nome do time?:\n");
scanf("%s",nome);
printf("Quantas vitorias o time tem?:\n");
scanf("%d",&vitorias);
printf("Quantos empates o time tem?:\n");
scanf("%d",&empates);
pontos = (vitorias*3)+ empates;
printf("%s Seu time tem o total de %d pontos", nome,pontos);
return 0;
}