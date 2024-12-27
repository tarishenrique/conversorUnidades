#include <stdio.h>
#include "massa.h"

// Função para converter massas
void converterMassa() {
    double valor, resultado;
    int opcao;

    while (1) {  // Loop contínuo até uma opção válida ser selecionada
        printf("Conversao de unidades de massa:\n");
        printf("1. Gramas para Quilogramas (kg)\n");
        printf("2. Gramas para Toneladas\n");
        printf("3. Quilogramas (kg) para Gramas\n");
        printf("4. Quilogramas (kg) para Toneladas\n");
        printf("5. Toneladas para Gramas\n");
        printf("6. Toneladas para Quilogramas (kg)\n");
        printf("Escolha a conversao: ");
        
        if (scanf("%d", &opcao) != 1) {  // Verifica se a entrada é válida
            printf("Entrada inválida! Tente novamente.\n\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }

        if (opcao >= 1 && opcao <= 6) {  // Verifica se a opção está no intervalo válido
            printf("Digite o valor a ser convertido: ");
            if (scanf("%lf", &valor) != 1) {  // Verifica se o valor é válido
                printf("Entrada inválida! Tente novamente.\n\n");
                while (getchar() != '\n'); // Limpa o buffer de entrada
                continue;
            }

            // Realiza a conversão com base na opção
            switch (opcao) {
                case 1:
                    resultado = valor / 1000;
                    printf("%.2f gramas = %.5f kg\n\n", valor, resultado);
                    break;
                case 2:
                    resultado = valor / 1000000;
                    printf("%.2f gramas = %.6f toneladas\n\n", valor, resultado);
                    break;
                case 3:
                    resultado = valor * 1000;
                    printf("%.2f kg = %.3f gramas\n\n", valor, resultado);
                    break;
                case 4:
                    resultado = valor / 1000;
                    printf("%.2f kg = %.3f toneladas\n\n", valor, resultado);
                    break;
                case 5:
                    resultado = valor * 1000000;
                    printf("%.2f toneladas = %.6f gramas\n\n", valor, resultado);
                    break;
                case 6:
                    resultado = valor * 1000;
                    printf("%.2f toneladas = %.3f kg\n\n", valor, resultado);
                    break;
            }
            break;  // Sai do loop após uma conversão válida
        } else {
            printf("Opção inválida! Tente novamente.\n\n");
        }
    }
}
