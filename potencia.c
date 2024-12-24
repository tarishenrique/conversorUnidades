#include <stdio.h>
#include "potencia.h"
#include <string.h>


double kwatts, cavalosVapor, watts; //Recebe o valor transformado
double convert_watts_out, convert_kwatts_out, convert_cavalosVapor_out; //usando para converter os dados de entrada
char watts_in[20], kwatts_in[20], cavalosVapor_in[20];//variaveis de entrada

void conversor()//faz a conversão de string para double, OBS(A LINGUAGEM C NÃO RECEBE CORRETAMENTE VALORES QUE TENHAM 0 A ESQUERDA)
{
sscanf (watts_in, "%lf", &convert_watts_out);
sscanf (kwatts_in, "%lf", &convert_kwatts_out);
sscanf (cavalosVapor_in, "%lf", &convert_cavalosVapor_out);
}
int menu_potencia() // função com o menu das opções
{
    int opcao_menu = 0; //menu conversao.
    printf("---------------------------------------------\n|\t    CONVERSOR DE POTENCIA\t    |\n---------------------------------------------\n");
    printf("|\t  (1) -> WATTS\t\t\t    |\n|\t  (2) -> KWATTS\t\t\t    |\n|\t  (3) -> CAVALOS VAPOR\t\t    |");
    printf("\t  \n---------------------------------------------");
    printf("\nDIGITE O NUMERO CORRESPONDENTE A UNIDADE QUE \nDESEJA TER COMO ENTRADA\n(VAI SER CONVERTIDA): ");
    scanf("%d", &opcao_menu);
return opcao_menu;
}
void transforma_watts()//TRANSFORMA WATTS NAS OUTRAS CONVERSÕES
{
watts = convert_watts_out;
kwatts = convert_watts_out / 1000;
cavalosVapor = convert_watts_out * 0.00135962;
    
}
void transforma_kwatts()//TRANSFORMA KWATTS NAS OUTRAS CONVERSÕES
{
kwatts = convert_kwatts_out;
watts = convert_kwatts_out *1000;
cavalosVapor = (convert_kwatts_out * 1.35962);

}
void transforma_cavalos()//TRANSFORMA CAVALO VAPOR NAS OUTRAS CONVERSÕES
{
cavalosVapor = convert_cavalosVapor_out;
watts = convert_cavalosVapor_out*735.5;
kwatts = convert_cavalosVapor_out*735.5/1000;
}
void exibir_valores()//MOSTRA O VALOR ESCOLHIDO NAS OUTRAS CONVERSÕES...
{

printf("\n---------------------------------------------\n|\t    RESULTADO DA CONVERSAO\t    |\n---------------------------------------------\n");
    printf("WATTS = %.3lf\nKHATTS = %.3lf\nCAVALOS VAPOR = %.3lf\t",watts , kwatts, cavalosVapor);
    printf("\t  \n---------------------------------------------\n\n\n\n\n\n\n\n\n");

}


void converterPotencia()
{
while (1==1)
{
    
    int menu_entrada = menu_potencia(); // atribui o retorno da função menu_potencia()

    switch (menu_entrada)//navega pelo menu, escolhe qual tipo de entrada de dado, kwatts, watts, cavalo potencia
    {

    case 1:
           
            printf("\n---------------------------------------------\n|\t    CONVERSOR DE POTENCIA\t    |\n---------------------------------------------\n");
            printf("|\t  (1) -> WATTS\t\t\t    |\n|\t\t\t\t\t    |\n|\t \t\t\t\t    |");
            printf("\t  \n---------------------------------------------");
            printf("\nDIGITE O VALOR QUE DESEJA CONVERTER(W): ");
            scanf("%s", watts_in);
            conversor();
            transforma_watts();
            exibir_valores();

        break;
    
    case 2:
            printf("\n---------------------------------------------\n|\t    CONVERSOR DE POTENCIA\t    |\n---------------------------------------------\n");
            printf("|\t\t\t\t\t    |\n|\t  (2) -> KWATTS\t\t\t    |\n|\t \t\t\t\t    |");
            printf("\t  \n---------------------------------------------");
            printf("\nDIGITE O VALOR QUE DESEJA CONVERTER(KW): ");
            scanf("%s", kwatts_in);
            conversor();
            transforma_kwatts();
            exibir_valores();

        break;
    
    case 3:
            printf("\n---------------------------------------------\n|\t    CONVERSOR DE POTENCIA\t    |\n---------------------------------------------\n");
            printf("|\t \t\t\t\t    |\n|\t\t\t\t\t    |\n|\t  (3) -> CAVALOS VAPOR\t\t    |");
            printf("\t  \n---------------------------------------------");
            printf("\nDIGITE O VALOR QUE DESEJA CONVERTER(CV): ");
            scanf("%s", cavalosVapor_in);
            conversor();
            transforma_cavalos();
            exibir_valores();

        break;
    
    default:

            printf("Numero invalido!!\n");
            return; // Sai da função e retorna ao main
        break;
    }
}

}