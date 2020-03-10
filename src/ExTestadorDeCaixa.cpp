#include "../include/ExTestadorDeCaixa.h"
#include <stdio.h>

void ExTestadorDeCaixa::testar()
{
    //criar 2 caixas
    //Para criar objeto -> se for
    //aloca��o est�tica, utilizar a
    //mesma sintaxe de cria��o de
    //vari�veis
    Caixa c1;
    Caixa c2;

    c1.setLargura(1.5);
    c1.setAltura(0.6);
    c1.setProfundidade(0.5);

    c2.setAltura(0.3);
    c2.setLargura(0.9);
    //Erro! Atributo profundidade
    //n�o pode ser acessado
    //diretamente
    //c2.profundidade = -0.7;
    c2.setProfundidade(0.7);

    //chamar os m�todos de
    //c�lculo
    double ac1 =
    c1.calcularAreaExt();
    double ac2 =
    c2.calcularAreaExt();
    double vc1 =
    c1.calcularVolume();
    double vc2 =
    c2.calcularVolume();

    printf("\nArea de c1: %f",
           ac1);
    printf("\nArea de c2: %f",
           ac2);

    printf("\nVolume de c1: %f",
           vc1);
    printf("\nVolume de c2: %f",
           vc2);

}
