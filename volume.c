#include <stdio.h>

// Funções de conversão
double litro_para_mililitro(double litro) {
    return litro * 1000.0;
}

double litro_para_metro_cubico(double litro) {
    return litro / 1000.0;
}

double mililitro_para_litro(double mililitro) {
    return mililitro / 1000.0;
}

double mililitro_para_metro_cubico(double mililitro) {
    return mililitro / 1e6;
}

double metro_cubico_para_litro(double metro_cubico) {
    return metro_cubico * 1000.0;
}

double metro_cubico_para_mililitro(double metro_cubico) {
    return metro_cubico * 1e6;
}

// Interface do usuário
void exibir_menu() {
    printf("===================================\n");
    printf("      CONVERSOR DE UNIDADES\n");
    printf("===================================\n");
    printf("Escolha uma opcao:\n");
    printf("1. Litro -> Mililitro\n");
    printf("2. Litro -> Metro cubico\n");
    printf("3. Mililitro -> Litro\n");
    printf("4. Mililitro -> Metro cubico\n");
    printf("5. Metro cubico -> Litro\n");
    printf("6. Metro cubico -> Mililitro\n");
    printf("0. Sair\n");
    printf("===================================\n");
    printf("Opcao: ");
}

// Função principal
int main() {
    int opcao;
    double valor, resultado;
    char continuar;

    do {
        exibir_menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor em litros: ");
                scanf("%lf", &valor);
                resultado = litro_para_mililitro(valor);
                printf("%.2lf litros = %.2lf mililitros\n", valor, resultado);
                break;

            case 2:
                printf("Digite o valor em litros: ");
                scanf("%lf", &valor);
                resultado = litro_para_metro_cubico(valor);
                printf("%.2lf litros = %.6lf metros cubicos\n", valor, resultado);
                break;

            case 3:
                printf("Digite o valor em mililitros: ");
                scanf("%lf", &valor);
                resultado = mililitro_para_litro(valor);
                printf("%.2lf mililitros = %.2lf litros\n", valor, resultado);
                break;

            case 4:
                printf("Digite o valor em mililitros: ");
                scanf("%lf", &valor);
                resultado = mililitro_para_metro_cubico(valor);
                printf("%.2lf mililitros = %.6lf metros cubicos\n", valor, resultado);
                break;

            case 5:
                printf("Digite o valor em metros cubicos: ");
                scanf("%lf", &valor);
                resultado = metro_cubico_para_litro(valor);
                printf("%.6lf metros cubicos = %.2lf litros\n", valor, resultado);
                break;

            case 6:
                printf("Digite o valor em metros cubicos: ");
                scanf("%lf", &valor);
                resultado = metro_cubico_para_mililitro(valor);
                printf("%.6lf metros cubicos = %.2lf mililitros\n", valor, resultado);
                break;

            case 0:
                printf("Encerrando o programa. Ate logo!\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        // Perguntar se deseja continuar antes de retornar ao menu
        if (opcao != 0) {
            printf("\nDeseja realizar outra conversao? (s/n): ");
            scanf(" %c", &continuar);
            if (continuar == 'n' || continuar == 'N') {
                opcao = 0; // Encerra o programa
            }
        }

        printf("\n");

    } while (opcao != 0);

    return 0;
}
