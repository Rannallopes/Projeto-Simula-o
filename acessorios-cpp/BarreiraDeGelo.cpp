#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/BarreiraDeGelo.hpp"

BarreiraDeGelo::BarreiraDeGelo(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia)
{

}

string BarreiraDeGelo::getDescricaoArma()
{
    return descricaoArma;
}

int BarreiraDeGelo::getResistencia()
{
    return resistencia;
}