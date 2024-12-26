#include "temperatura.h"
#include <stdio.h>
//Define os valores equivalentes ao zero absoluto nas
//diferentes escalas para tratar as situações em que
//o usuário possa inserir valores fisicamente errados.
#define ZERO_ABSOLUTO_K 0.0
#define ZERO_ABSOLUTO_C -273.15
#define ZERO_ABSOLUTO_F -459.67
//Fórmulas de conversão de temperatura
double celsius_para_kelvin(double celsius) {
    return celsius + 273.15;
}

double celsius_para_fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double kelvin_para_celsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvin_para_fahrenheit(double kelvin) {
    return celsius_para_fahrenheit(kelvin_para_celsius(kelvin));
}

double fahrenheit_para_celsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheit_para_kelvin(double fahrenheit) {
    return celsius_para_kelvin(fahrenheit_para_celsius(fahrenheit));
}

int main() {
    int opcao;
    double temperatura, resultado;
//Imprime a tela de opções:
    printf("Selecione a conversão:\n");
    printf("1. Celsius para Kelvin\n");
    printf("2. Celsius para Fahrenheit\n");
    printf("3. Kelvin para Celsius\n");
    printf("4. Kelvin para Fahrenheit\n");
    printf("5. Fahrenheit para Celsius\n");
    printf("6. Fahrenheit para Kelvin\n");
    printf("Opção: ");
//Trata a situação do usuário inserir uma opção inválida
    if (scanf("%d", &opcao) != 1 || opcao < 1 || opcao > 6) {
        printf("Erro: Opção inválida. Por favor, insira um número entre 1 e 6.\n");
        return 1;
    }
//Trata a opção caso o usuário insira qualquer outro valor
//que não seja um valor de temperatura váldia
    printf("Digite a temperatura: ");
    if (scanf("%lf", &temperatura) != 1) {
        printf("Erro: Entrada inválida para temperatura. Por favor, insira um número válido.\n");
        return 1;
    }
//Tratamento de erro para evitar que digitem uma temperatura abaixo
//do zero absoluto em Kelvin, o que estaria fisicamente errado.
    if ((opcao == 3 || opcao == 4) && temperatura < ZERO_ABSOLUTO_K) {
        printf("Erro: Não existe temperatura abaixo do zero absoluto (0 K, -273.15 °C, -459.67 °F).\n");
        return 1;
    } else if ((opcao == 1 || opcao == 2) && temperatura < ZERO_ABSOLUTO_C) {
        printf("Erro: Não existe temperatura abaixo do zero absoluto (0 K, -273.15 °C, -459.67 °F).\n");
        return 1;
    } else if ((opcao == 5 || opcao == 6) && temperatura < ZERO_ABSOLUTO_F) {
        printf("Erro: Não existe temperatura abaixo do zero absoluto (0 K, -273.15 °C, -459.67 °F).\n");
        return 1;
    }
//Exibe o resultado final com o cálculo
    switch (opcao) {
        case 1:
            resultado = celsius_para_kelvin(temperatura);
            printf("Resultado: %.2lf K\n", resultado);
            break;
        case 2:
            resultado = celsius_para_fahrenheit(temperatura);
            printf("Resultado: %.2lf °F\n", resultado);
            break;
        case 3:
            resultado = kelvin_para_celsius(temperatura);
            printf("Resultado: %.2lf °C\n", resultado);
            break;
        case 4:
            resultado = kelvin_para_fahrenheit(temperatura);
            printf("Resultado: %.2lf °F\n", resultado);
            break;
        case 5:
            resultado = fahrenheit_para_celsius(temperatura);
            printf("Resultado: %.2lf °C\n", resultado);
            break;
        case 6:
            resultado = fahrenheit_para_kelvin(temperatura);
            printf("Resultado: %.2lf K\n", resultado);
            break;
    }

    return 0;
}

//Autor: Emerson Novais Oliveira
// Grupo 9, subrupo 7