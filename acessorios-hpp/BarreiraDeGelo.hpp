#ifndef BARRERADEGELO
#define BARRERADEGELO

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class BarreiraDeGelo : public ArmaDefesa
{
    public:
        BarreiraDeGelo(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif
