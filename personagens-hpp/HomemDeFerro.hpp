#ifndef HOMEMDEFERRO
#define HOMEMDEFERRO
#include "../core-simulador-hpp/Personagem.hpp"
class HomemDeFerro : public Personagem
{
    public:
        HomemDeFerro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};

#endif