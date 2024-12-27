#include <stdio.h>

float horas_para_minutos(float horas) {
    return horas * 60;
}

float horas_para_segundos(float horas) {
    return horas * 3600;
}

float minutos_para_horas(float minutos) {
    return minutos / 60;
}

float minutos_para_segundos(float minutos) {
    return minutos * 60;
}

float segundos_para_horas(float segundos) {
    return segundos / 3600;
}

float segundos_para_minutos(float segundos) {
    return segundos / 60;
}

void display_menu_velocidade() {
    printf("\nConversor de Unidades de Tempo\n");
    printf("Escolha uma opção:\n");
    printf("1. Horas para Minutos\n");
    printf("2. Horas para Segundos\n");
    printf("3. Minutos para Horas\n");
    printf("4. Minutos para Segundos\n");
    printf("5. Segundos para Horas\n");
    printf("6. Segundos para Minutos\n");
    printf("0. Sair\n");
}

void converter_tempo() {
    int opcao;
    float valor, resultado;

    do {
        display_menu_velocidade();
        printf("\nDigite sua opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo...\n");
            break;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        switch (opcao) {
            case 1:
                resultado = horas_para_minutos(valor);
                printf("%.2f horas = %.2f minutos\n", valor, resultado);
                break;
            case 2:
                resultado = horas_para_segundos(valor);
                printf("%.2f horas = %.2f segundos\n", valor, resultado);
                break;
            case 3:
                resultado = minutos_para_horas(valor);
                printf("%.2f minutos = %.2f horas\n", valor, resultado);
                break;
            case 4:
                resultado = minutos_para_segundos(valor);
                printf("%.2f minutos = %.2f segundos\n", valor, resultado);
                break;
            case 5:
                resultado = segundos_para_horas(valor);
                printf("%.2f segundos = %.2f horas\n", valor, resultado);
                break;
            case 6:
                resultado = segundos_para_minutos(valor);
                printf("%.2f segundos = %.2f minutos\n", valor, resultado);
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return;
}