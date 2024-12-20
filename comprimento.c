#include <stdio.h>

void converterComprimento() {
    double valor, resultado;
    int opcao;

    printf("Conversão de unidades de comprimento:\n");
    printf("1. Metros para Centímetros\n");
    printf("2. Metros para Milímetros\n");
    printf("3. Centímetros para Metros\n");
    printf("4. Centímetros para Milímetros\n");
    printf("5. Milímetros para Metros\n");
    printf("6. Milímetros para Centímetros\n");
    printf("Escolha a conversão: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1:
            resultado = valor * 100;
            printf("%.2f metros = %.2f centímetros\n\n", valor, resultado);
            break;
        case 2:
            resultado = valor * 1000;
            printf("%.2f metros = %.2f milímetros\n\n", valor, resultado);
            break;
        case 3:
            resultado = valor / 100;
            printf("%.2f centímetros = %.2f metros\n\n", valor, resultado);
            break;
        case 4:
            resultado = valor * 10;
            printf("%.2f centímetros = %.2f milímetros\n\n", valor, resultado);
            break;
        case 5:
            resultado = valor / 1000;
            printf("%.2f milímetros = %.2f metros\n\n", valor, resultado);
            break;
        case 6:
            resultado = valor / 10;
            printf("%.2f milímetros = %.2f centímetros\n\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n\n");
    }
}

int main() {
    converterComprimento();
    return 0;
}