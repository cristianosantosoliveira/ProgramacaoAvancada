#include <iostream>

using namespace std;

#include "include/ExTestadorDeCaixa.h"

//Idealmente o ponto de entrada função
//main deveria ser o mais "enxuto"
//possível, de maneira a entregar
//rapidamente o controle da execução
//para os objetos.
int main()
{
    //aloca estaticamente
    ExTestadorDeCaixa tdc;

    tdc.testar();

    return 0;
}
