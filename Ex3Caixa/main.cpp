#include <iostream>

using namespace std;

#include "include/ExTestadorDeCaixa.h"

//Idealmente o ponto de entrada fun��o
//main deveria ser o mais "enxuto"
//poss�vel, de maneira a entregar
//rapidamente o controle da execu��o
//para os objetos.
int main()
{
    //aloca estaticamente
    ExTestadorDeCaixa tdc;

    tdc.testar();

    return 0;
}
