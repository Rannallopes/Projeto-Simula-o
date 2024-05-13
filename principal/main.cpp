#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Adaga.hpp"
#include "../acessorios-hpp/Arco.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/BarreiraDeGelo.hpp"
#include "../acessorios-hpp/Capacete.hpp"
#include "../acessorios-hpp/EscudoDeAco.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Machado.hpp"
#include "../acessorios-hpp/PeleDeGama.hpp"
#include "../acessorios-hpp/Lanca.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Hulk.hpp"
#include "../personagens-hpp/CapitaoAmerica.hpp"
#include "../personagens-hpp/HomemDeFerro.hpp"
#include "../personagens-hpp/Thor.hpp"
#include "../personagens-hpp/ViuvaNegra.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaDefesa* escudo = new Escudo("Latão", 1);
    ArmaAtaque* adaga = new Adaga("Adaga afiada", 3, 20);
    ArmaAtaque* arco = new Arco("Arco longo", 1, 25);
    ArmaDefesa* armadura = new Armadura("Armadura de aço", 30);
    ArmaDefesa* barreiraGelo = new BarreiraDeGelo("Barreira de gelo", 25);
    ArmaDefesa* capacete = new Capacete("Capacete de aço", 20);
    ArmaDefesa* escudoAco = new EscudoDeAco("Escudo de aço", 35);
    ArmaAtaque* espada = new Espada("Espada de aço", 7, 40);
    ArmaAtaque* machado = new Machado("Machado de batalha", 9, 45);
    ArmaDefesa* peleGama = new PeleDeGama("Pele de Gama", 50);
    ArmaAtaque* lanca = new Lanca("Lança afiada", 10, 35);
    
    Personagem* p1 = new Chaves(2, "Chaves Eq1", 10, arma, escudo);
    Personagem* p3 = new Chaves(1, "Chaves Eq1 - Reserva", 15, arma, escudo);
    Personagem* p2 = new Chaves(2, "Chaves Eq2", 15, arma, escudo);
    Personagem* p4 = new Chaves(1, "Chaves Eq2 - Reserva", 20, arma, escudo);
    Personagem* p5 = new Hulk(2, "Hulk", 30, machado, armadura);
    Personagem* p6 = new CapitaoAmerica(1, "Capitão América", 35, adaga, armadura);
    Personagem* p7 = new HomemDeFerro(2, "Homem de Ferro", 55, espada, capacete);
    Personagem* p8 = new Thor(1, "Thor", 75, lanca, escudoAco);
    Personagem* p9 = new ViuvaNegra(2, "Viúva Negra", 65, arco, barreiraGelo);


    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);
    simulador->adicionarPersonagem(p7, 1);
    simulador->adicionarPersonagem(p8, 2);
    simulador->adicionarPersonagem(p9, 1);
    
    simulador->iniciarSimulacao();

    return 0;

    
}