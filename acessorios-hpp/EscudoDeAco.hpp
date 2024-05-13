#ifndef ESCUDODEACO
#define ESCUDODEACO

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class EscudoDeAco : public ArmaDefesa
{
    public:
        EscudoDeAco(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif