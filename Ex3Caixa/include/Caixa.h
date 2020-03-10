/* Esta definição serve para evitar a
repetição de símbolos devida a inclusões
recursivas */
#ifndef CAIXA_H
#define CAIXA_H

class Caixa
{
    //boa prática de programação OO ->
    //atributos privados,
    //métodos públicos
    //private -> por definição, acessíveis
    //somente dentro da própria classe.
    private:
    //declaração dos atributos
    //double ->
    //tipo de ponto flutuante
    //de 64 bits
    double largura;
    double altura;
    double profundidade;

    //public -> por definição, acessiveis
    //a partir de qualquer outro objeto
    public:
      //bool -> true ou false
      bool setLargura(double l);
      bool setAltura(double a);
      bool setProfundidade(double p);

    //este método não necessita de
    //parâmetros, pois todos os dados
    //de que precisa já estão disponíveis
    //nos atributos.
    double calcularAreaExt();
    double calcularVolume();
};

#endif // CAIXA_H
