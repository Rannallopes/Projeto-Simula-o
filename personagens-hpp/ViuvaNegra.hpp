#ifndef VIUVANEGRA
#define VIUVANEGRA
#include "../core-simulador-hpp/Personagem.hpp"
class ViuvaNegra : public Personagem
{
    public:
        ViuvaNegra(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};

#endif