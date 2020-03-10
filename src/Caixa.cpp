/* deve utilizar um include para
incluir o arquivo de cabe�alhos
correspondente a esta classe. */
#include "../include/Caixa.h"

//:: -> operador de resolu��o de escopo
bool Caixa::setLargura(double l)
{
    if (l <= 0)
        return false;
    /* por defini��o, qualquer
    m�todo de uma classe tem acesso
    a qualquer atributo daquela
    classe */
    largura = l;
    return true;
}

bool Caixa::setAltura(double a)
{
    if (a <= 0)
        return false;
    /* por defini��o, qualquer
    m�todo de uma classe tem acesso
    a qualquer atributo daquela
    classe */
    altura = a;
    return true;
}

bool Caixa::setProfundidade(double p)
{
    if (p <= 0)
        return false;
    /* por defini��o, qualquer
    m�todo de uma classe tem acesso
    a qualquer atributo daquela
    classe */
    profundidade = p;
    return true;
}
double Caixa::calcularAreaExt()
{
    return 2*(altura*profundidade +
              largura*profundidade +
              altura*largura);
}

double Caixa::calcularVolume()
{
    return altura*largura*profundidade;
}
