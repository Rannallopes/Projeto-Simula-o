#ifndef PELEDEGAMA
#define PELEDEGAMA

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class PeleDeGama : public ArmaDefesa
{
    public:
        PeleDeGama(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif