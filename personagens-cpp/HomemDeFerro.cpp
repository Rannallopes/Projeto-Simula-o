#include "../personagens-hpp/HomemDeFerro.hpp"

HomemDeFerro::HomemDeFerro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int HomemDeFerro::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int HomemDeFerro::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string HomemDeFerro::pegarDescricao() 
{
    return "Eu sou o Homem de Ferro!";
}
