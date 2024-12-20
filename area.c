#include <stdio.h>
#include "area.h"

// Tipagem das conversoes
typedef enum
{
    CENTIMETRO_QUADRADO, // centimetro quadrado
    METRO_QUADRADO,      // metro quadrado
    KILOMETRO_QUADRADO,  // quilômetro quadrado
    HECTARE,             // hectare
    ACRE,                // acre
    PE_QUADRADO,         // pé quadrado
    POLEGADA_QUADRADA    // polegada quadrada
} UnidadeArea;

UnidadeArea unidades[] = {
    CENTIMETRO_QUADRADO,
    METRO_QUADRADO,
    KILOMETRO_QUADRADO,
    HECTARE,
    ACRE,
    PE_QUADRADO,
    POLEGADA_QUADRADA
};

// Mostra ao usuario as opções de uso da conversão
void displayValoresArea()
{
    printf("Conversao de unidades de area iniciado:\n\n");
    printf("Código do TIPO das Unidades de conversão:\n");
    printf("0 = CENTIMETRO_QUADRADO\n");
    printf("1 = METRO_QUADRADO\n");
    printf("2 = KILOMETRO_QUADRADO\n");
    printf("3 = HECTARE\n");
    printf("4 = ACRE\n");
    printf("5 = PE_QUADRADO\n");
    printf("6 = POLEGADA_QUADRADA\n");
    printf("\n");
}

double area_convertida(double value, UnidadeArea tipoOrigem, UnidadeArea tipoNovo)
{
    // Conversão de tipoOrigem para metros quadrados (base comum)
    double value_comum_base;
    switch (tipoOrigem)
    {
    case CENTIMETRO_QUADRADO:
        value_comum_base = value * 0.0001;  // 1 cm² = 0.0001 m²
        break;
    case METRO_QUADRADO:
        value_comum_base = value;
        break;
    case KILOMETRO_QUADRADO:
        value_comum_base = value * 1e6;  // 1 km² = 1.000.000 m²
        break;
    case HECTARE:
        value_comum_base = value * 1e4;  // 1 hectare = 10.000 m²
        break;
    case ACRE:
        value_comum_base = value * 4046.85642;  // 1 acre = 4046.85642 m²
        break;
    case PE_QUADRADO:
        value_comum_base = value * 0.092903;  // 1 pé quadrado = 0.092903 m²
        break;
    case POLEGADA_QUADRADA:
        value_comum_base = value * 0.00064516;  // 1 polegada quadrada = 0.00064516 m²
        break;
    default:
        return -1;  // Unidade inválida
    }

    // Converter de metros quadrados para a unidade de destino
    switch (tipoNovo)
    {
    case CENTIMETRO_QUADRADO:
        return value_comum_base / 0.0001;  // 1 m² = 10.000 cm²
    case METRO_QUADRADO:
        return value_comum_base;
    case KILOMETRO_QUADRADO:
        return value_comum_base / 1e6;  // 1 m² = 1.000.000 km²
    case HECTARE:
        return value_comum_base / 1e4;  // 1 m² = 10.000 hectares
    case ACRE:
        return value_comum_base / 4046.85642;  // 1 m² = 4046.85642 acres
    case PE_QUADRADO:
        return value_comum_base / 0.092903;  // 1 m² = 0.092903 pés quadrados
    case POLEGADA_QUADRADA:
        return value_comum_base / 0.00064516;  // 1 m² = 0.00064516 polegadas quadradas
    default:
        return -1;  // Unidade inválida
    }
}

// Conversor de unidades de area
void converterArea()
{
    double valor, newValor;
    int tipoOrigem, tipoNovo;

    displayValoresArea();

    // Realiza a captura de opções da conversão
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Qual o TIPO do seu valor original?: ");
    scanf("%d", &tipoOrigem);

    printf("Escolha o TIPO a ser convertido: ");
    scanf("%d", &tipoNovo);

    // Realiza a conversão selecionada
    newValor = area_convertida(valor, unidades[tipoOrigem], unidades[tipoNovo]);

    // Mostra ao usuario o resultado da conversão
    printf("\nO valor foi convertido de X para Y:");
    printf("Novo Valor = %.2f \n", newValor);
}