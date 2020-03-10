/* Esta defini��o serve para evitar a
repeti��o de s�mbolos devida a inclus�es
recursivas */
#ifndef CAIXA_H
#define CAIXA_H

class Caixa
{
    //boa pr�tica de programa��o OO ->
    //atributos privados,
    //m�todos p�blicos
    //private -> por defini��o, acess�veis
    //somente dentro da pr�pria classe.
    private:
    //declara��o dos atributos
    //double ->
    //tipo de ponto flutuante
    //de 64 bits
    double largura;
    double altura;
    double profundidade;

    //public -> por defini��o, acessiveis
    //a partir de qualquer outro objeto
    public:
      //bool -> true ou false
      bool setLargura(double l);
      bool setAltura(double a);
      bool setProfundidade(double p);

    //este m�todo n�o necessita de
    //par�metros, pois todos os dados
    //de que precisa j� est�o dispon�veis
    //nos atributos.
    double calcularAreaExt();
    double calcularVolume();
};

#endif // CAIXA_H
