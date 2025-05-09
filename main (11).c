#include <stdio.h>
#include <locale.h>
int main () {
    setlocale (LC_ALL,"");
    float peso, altura, imc;
    printf("Digite seu peso (kg):");
    scanf("%f", &peso);
    printf("Digite sua altura (m):");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("Seu IMC:%.2f", imc);
    if (imc < 18.5) 
    {
    printf("Classificacao: Abaixo do peso");
    } 
    else if (imc >= 18.5 && imc <= 24.9)
    {
    printf("Classificacao: Peso normal");
    }
    else if (imc >= 25 && imc <= 29.9) 
    {
    printf("Classificacao: Sobrepeso");
    } 
    else 
    {
    printf("Classificacao: Obesidade");
    }
    return 0;
}