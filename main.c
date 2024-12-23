#include <stdio.h>
#include <stdlib.h>
 #include "comprimento.h"
 // #include "massa.h"
// #include "volume.h"
// #include "temperatura.h"
// #include "velocidade.h"
#include "potencia.h"
// #include "area.h"
// #include "tempo.h"
#include "dados.h"

void exibirMenu() {
    printf("Selecione uma opcao para conversao:\n");
    printf("1. Unidades de temperatura - Emerson\n");
    printf("2. Unidades de comprimento - Matheus\n");
    printf("3. Unidades de velocidade - Ane\n");
    printf("4. Unidades de tempo - Thiago\n");
    printf("5. Unidades de area - Ian\n");
    printf("6. Unidades de volume - Hendrick\n");
    printf("7. Unidades de massa - Rayane\n");
    printf("8. Dados (Bits, Bytes, etc.) - Taris\n");
    printf("9. Potencia (Watts, kW, cavalos-vapor) - Canario\n");
    printf("0. Sair\n");
    printf("Escolha: ");
}

int main() {
    int opcao;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            // case 1:
            //     converterTemperatura();
            //     break;
             case 2:
                 converterComprimento();
                 break;
            // case 3:
            //     converterVelocidade();
            //     break;
            // case 4:
            //     converterTempo();
            //     break;
            // case 5:
            //     converterArea();
            //     break;
            // case 6:
            //     converterVolume();
            //     break;
            // case 7:
            //     converterMassa();
            //     break;
            case 8:
                converterDados();
                break;
            // case 9:
            //     converterPotencia();
            //     break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
