#include <stdio.h>
#include <locale.h>
int main () {
    setlocale (LC_ALL,"");
    float valor_compra, valor_final;
    printf("Digite o valor da compra:R$");
    scanf("%f", &valor_compra);
    if (valor_compra > 500.00) 
    {
    valor_final = valor_compra * 0.90;
    } 
    else if (valor_compra >= 200.00 && valor_compra <= 500.00)
    {
    valor_final = valor_compra * 0.95;
    } 
    else
    {
    valor_final = valor_compra;
    }
    printf("Valor final com desconto: R$ %.2f", valor_final);
    return 0;
}
