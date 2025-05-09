#include <stdio.h>
#include <locale.h>
int main () {
    setlocale (LC_ALL,"");
    int idade;
    printf("Digite sua idade:");
    scanf("%d", &idade);
    if (idade < 16) {
    printf("Você não pode votar.");
    } 
    else if ((idade >= 16 && idade <= 17) || idade >= 70) 
    {
    printf("O voto é opcional.");
    } 
    else 
    {
    printf("O voto é obrigatório.");
    }
    return 0;
}
