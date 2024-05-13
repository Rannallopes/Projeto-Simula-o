#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/PeleDeGama.hpp"

PeleDeGama::PeleDeGama(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia)
{

}

string PeleDeGama::getDescricaoArma()
{
    return descricaoArma;
}

int PeleDeGama::getResistencia()
{
    return resistencia;
}