#include <stdio.h>
#include "dados.h"

void converterDados() {
    double valor, resultado;
    int opcao;

    printf("Conversao de unidades de dados:\n");
    printf("1. Bits para Bytes\n");
    printf("2. Bytes para Kilobytes\n");
    printf("3. Kilobytes para Megabytes\n");
    printf("4. Megabytes para Gigabytes\n");
    printf("5. Gigabytes para Terabytes\n");
    printf("6. Terabytes para Gigabytes\n");
    printf("7. Gigabytes para Megabytes\n");
    printf("8. Megabytes para Kilobytes\n");
    printf("9. Kilobytes para Bytes\n");
    printf("10. Bytes para Bits\n");
    printf("Escolha a conversao: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1:
            resultado = valor / 8;
            printf("%.2f bits = %.2f bytes\n\n", valor, resultado);
            break;
        case 2:
            resultado = valor / 1024;
            printf("%.2f bytes = %.2f kilobytes\n\n", valor, resultado);
            break;
        case 3:
            resultado = valor / 1024;
            printf("%.2f kilobytes = %.2f megabytes\n\n", valor, resultado);
            break;
        case 4:
            resultado = valor / 1024;
            printf("%.2f megabytes = %.2f gigabytes\n\n", valor, resultado);
            break;
        case 5:
            resultado = valor / 1024;
            printf("%.2f gigabytes = %.2f terabytes\n\n", valor, resultado);
            break;
        case 6:
            resultado = valor * 1024;
            printf("%.2f terabytes = %.2f gigabytes\n\n", valor, resultado);
            break;
        case 7:
            resultado = valor * 1024;
            printf("%.2f gigabytes = %.2f megabytes\n\n", valor, resultado);
            break;
        case 8:
            resultado = valor * 1024;
            printf("%.2f megabytes = %.2f kilobytes\n\n", valor, resultado);
            break;
        case 9:
            resultado = valor * 1024;
            printf("%.2f kilobytes = %.2f bytes\n\n", valor, resultado);
            break;
        case 10:
            resultado = valor * 8;
            printf("%.2f bytes = %.2f bits\n\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n\n");
    }
}
