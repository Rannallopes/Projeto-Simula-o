#include "../personagens-hpp/ViuvaNegra.hpp"

ViuvaNegra::ViuvaNegra(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int ViuvaNegra::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int ViuvaNegra::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string ViuvaNegra::pegarDescricao() 
{
    return "Eu não tenho nada a provar para você.";
}