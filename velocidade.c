#include <stdio.h>
#include "velocidade.h"

// Funções para conversões
float kmh_to_ms(float kmh) {
    return kmh / 3.6;
}

float kmh_to_mph(float kmh) {
    return kmh * 0.621371;
}

float ms_to_kmh(float ms) {
    return ms * 3.6;
}

float ms_to_mph(float ms) {
    return ms * 2.23694;
}

float mph_to_kmh(float mph) {
    return mph / 0.621371;
}

float mph_to_ms(float mph) {
    return mph / 2.23694;
}
//Menu de selecionar
void display_menu() {
    printf("\nConversor de Unidades de Velocidade\n");
    printf("Escolha uma opcao:\n");
    printf("1. km/h para m/s\n");
    printf("2. km/h para mph\n");
    printf("3. m/s para km/h\n");
    printf("4. m/s para mph\n");
    printf("5. mph para km/h\n");
    printf("6. mph para m/s\n");
    printf("0. Sair\n");
}
//Programa
void converterVelocidade() {
    int opcao;
    float valor, resultado;

    do {
        display_menu();
        printf("\nDigite sua opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo...\n");
            break;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        switch (opcao) {
            case 1:
                resultado = kmh_to_ms(valor);
                printf("%.2f km/h = %.2f m/s\n", valor, resultado);
                break;
            case 2:
                resultado = kmh_to_mph(valor);
                printf("%.2f km/h = %.2f mph\n", valor, resultado);
                break;
            case 3:
                resultado = ms_to_kmh(valor);
                printf("%.2f m/s = %.2f km/h\n", valor, resultado);
                break;
            case 4:
                resultado = ms_to_mph(valor);
                printf("%.2f m/s = %.2f mph\n", valor, resultado);
                break;
            case 5:
                resultado = mph_to_kmh(valor);
                printf("%.2f mph = %.2f km/h\n", valor, resultado);
                break;
            case 6:
                resultado = mph_to_ms(valor);
                printf("%.2f mph = %.2f m/s\n", valor, resultado);
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return;
}
