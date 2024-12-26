#include <stdio.h>
#include "massa.h"

void converterMassa() {
    double valor, resultado;
    int opcao;

    printf("Conversao de unidades de massa:\n");
    printf("1. Gramas para Quilogramas(kg)\n");
    printf("2. Gramas para Toneladas\n");
    printf("3. Quilogramas(kg) para Gramas\n");
    printf("4. Quilogramas(kg) para Toneladas\n");
    printf("5. Toneladas para Gramas\n");
    printf("6. Toneladas para Quilogramas(kg)\n");
    printf("Escolha a conversao: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1:
            resultado = valor / 1000;
            printf("%.2f gramas = %.2f kg\n\n", valor, resultado);
            break;
        case 2:
            resultado = valor * 0.000001;
            printf("%.2f gramas= %.2f toneladas\n\n", valor, resultado);
            break;
        case 3:
            resultado = valor * 1000;
            printf("%.2f kg  = %.2f gramas\n\n", valor, resultado);
            break;
        case 4:
            resultado = valor / 1000;
            printf("%.2f kg = %.2f toneladas\n\n", valor, resultado);
            break;
        case 5:
            resultado = valor * 1000000;
            printf("%.2f toneladas = %.2f gramas\n\n", valor, resultado);
            break;
        case 6:
            resultado = valor * 1000;
            printf("%.2f toneladas = %.2f kg\n\n", valor, resultado);
            break;
        default:
            printf("OpÃ§Ã£o invÃ¡lida!\n\n");
    }
}