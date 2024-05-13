#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/EscudoDeAco.hpp"

EscudoDeAco::EscudoDeAco(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia)
{

}

string EscudoDeAco::getDescricaoArma()
{
    return descricaoArma;
}

int EscudoDeAco::getResistencia()
{
    return resistencia;
}