//biclioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
setlocale(LC_ALL,"");
int caminhoes, alqueire, viagens;
printf("Quantos caminhoes possui?:\n");
scanf("%d",&caminhoes);
printf("Quantos alqueire possui?:\n");
scanf("%d",&alqueire);
viagens = (alqueire*250) / (caminhoes*18);
printf("Serão necessarias total de %d viagens", viagens);
return 0;
}