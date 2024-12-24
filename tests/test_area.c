#include <stdio.h>
#include <math.h>
#include "area.h"

// gcc test_area.c area.c -o test_con_area
// ./test_con_area

void testar_conversao(double valor, UnidadeArea origem, UnidadeArea destino, double esperado, const char *descricao)
{
    double resultado = area_convertida(valor, origem, destino);
    if (fabs(resultado - esperado) < 0.0001)
    {
        printf("[PASS] %s: Resultado esperado %.4f, obtido %.4f\n", descricao, esperado, resultado);
    }
    else
    {
        printf("[FAIL] %s: Resultado esperado %.4f, obtido %.4f\n", descricao, esperado, resultado);
    }
}

void run_tests()
{

    printf("Iniciando testes de conversão de área...\n\n");

    // CENTIMETRO_QUADRADO para outras unidades
    testar_conversao(10000, CENTIMETRO_QUADRADO, METRO_QUADRADO, 1, "10000 cm2 para m2");
    testar_conversao(1e10, CENTIMETRO_QUADRADO, KILOMETRO_QUADRADO, 1, "1e10 cm2 para km2");
    testar_conversao(1e8, CENTIMETRO_QUADRADO, HECTARE, 1, "1e8 cm2 para hectares"); // FAIL
    testar_conversao(4.04685642e8, CENTIMETRO_QUADRADO, ACRE, 1, "4.04685642e8 cm2 para acres");
    testar_conversao(929.03, CENTIMETRO_QUADRADO, PE_QUADRADO, 1, "929.03 cm2 para pe2");
    testar_conversao(6.4516, CENTIMETRO_QUADRADO, POLEGADA_QUADRADA, 1, "6.4516 cm2 para po2");

    // METRO_QUADRADO para outras unidades
    testar_conversao(1, METRO_QUADRADO, CENTIMETRO_QUADRADO, 10000, "1 m2 para cm2");
    testar_conversao(1, METRO_QUADRADO, KILOMETRO_QUADRADO, 0.000001, "1 m2 para km2");
    testar_conversao(10000, METRO_QUADRADO, HECTARE, 1, "10000 m2 para hectares");
    testar_conversao(4046.85642, METRO_QUADRADO, ACRE, 1, "4046.85642 m2 para acres");
    testar_conversao(0.092903, METRO_QUADRADO, PE_QUADRADO, 1, "0.092903 m2 para pe2");
    testar_conversao(0.00064516, METRO_QUADRADO, POLEGADA_QUADRADA, 1, "0.00064516 m2 para po2");

    // KILOMETRO_QUADRADO para outras unidades
    testar_conversao(1, KILOMETRO_QUADRADO, CENTIMETRO_QUADRADO, 1e10, "1 km2 para cm2");
    testar_conversao(1, KILOMETRO_QUADRADO, METRO_QUADRADO, 1e6, "1 km2 para m2");
    testar_conversao(1, KILOMETRO_QUADRADO, HECTARE, 100, "1 km2 para hectares");
    testar_conversao(1, KILOMETRO_QUADRADO, ACRE, 247.105381, "1 km2 para acres");
    testar_conversao(1, KILOMETRO_QUADRADO, PE_QUADRADO, 1.076391e7, "1 km2 para pe2"); // FAIL
    testar_conversao(1, KILOMETRO_QUADRADO, POLEGADA_QUADRADA, 1.55e9, "1 km2 para po2"); // FAIL

    // HECTARE para outras unidades
    testar_conversao(1, HECTARE, CENTIMETRO_QUADRADO, 1e8, "1 hectare para cm2");
    testar_conversao(1, HECTARE, METRO_QUADRADO, 10000, "1 hectare para m2");
    testar_conversao(1, HECTARE, KILOMETRO_QUADRADO, 0.01, "1 hectare para km2");
    testar_conversao(1, HECTARE, ACRE, 2.47105, "1 hectare para acres");
    testar_conversao(1, HECTARE, PE_QUADRADO, 107639.104, "1 hectare para pe2"); // FAIL
    testar_conversao(1, HECTARE, POLEGADA_QUADRADA, 1.55e7, "1 hectare para po2"); // FAIL

    // ACRE para outras unidades
    testar_conversao(1, ACRE, CENTIMETRO_QUADRADO, 4.04685642e8, "1 acre para cm2"); // FAIL
    testar_conversao(1, ACRE, METRO_QUADRADO, 4046.85642, "1 acre para m2");
    testar_conversao(1, ACRE, KILOMETRO_QUADRADO, 0.00404686, "1 acre para km2");
    testar_conversao(1, ACRE, HECTARE, 0.404686, "1 acre para hectares");
    testar_conversao(1, ACRE, PE_QUADRADO, 43560, "1 acre para pe2"); // FAIL
    testar_conversao(1, ACRE, POLEGADA_QUADRADA, 6.273e6, "1 acre para po2"); // FAIL

    // PE_QUADRADO para outras unidades
    testar_conversao(1, PE_QUADRADO, CENTIMETRO_QUADRADO, 929.03, "1 pé2 para cm2");
    testar_conversao(1, PE_QUADRADO, METRO_QUADRADO, 0.092903, "1 pé2 para m2");
    testar_conversao(1, PE_QUADRADO, KILOMETRO_QUADRADO, 9.2903e-8, "1 pé2 para km2");
    testar_conversao(1, PE_QUADRADO, HECTARE, 9.2903e-6, "1 pé2 para hectares");
    testar_conversao(1, PE_QUADRADO, ACRE, 2.29568e-5, "1 pé2 para acres");
    testar_conversao(1, PE_QUADRADO, POLEGADA_QUADRADA, 144, "1 pé2 para po2");

    // POLEGADA_QUADRADA para outras unidades
    testar_conversao(1, POLEGADA_QUADRADA, CENTIMETRO_QUADRADO, 6.4516, "1 in2 para cm2");
    testar_conversao(1, POLEGADA_QUADRADA, METRO_QUADRADO, 0.00064516, "1 in2 para m2");
    testar_conversao(1, POLEGADA_QUADRADA, KILOMETRO_QUADRADO, 6.4516e-10, "1 in2 para km2");
    testar_conversao(1, POLEGADA_QUADRADA, HECTARE, 6.4516e-8, "1 in2 para hectares");
    testar_conversao(1, POLEGADA_QUADRADA, ACRE, 1.5942e-7, "1 in2 para acres");
    testar_conversao(1, POLEGADA_QUADRADA, PE_QUADRADO, 0.00694444, "1 in2 para pe");

    printf("Testes concluidos.\n");
}

int main()
{
    run_tests();
    return 0;
}