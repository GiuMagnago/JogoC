#include "Personagens.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Personagens::Personagens(int cod) {
    pontosV = 0;
    pontosM = 0;
    forcaF = 0;
    forcaM = 0;
    armadura = 0;
    resistencia = 0;
    agilidade = 0;

    if (cod == 1)
    {
        Guerreiro();
    }
    else if (cod == 2)
    {
        Ladrao();
    }
    else if (cod == 3)
    {
        Mago();
    }
    else if (cod == 4)
    {
        Paladino();
    }
    else if (cod == 5)
    {
        Animal();
    }
    else if (cod == 6)
    {
        Troll();
    }
    else if (cod == 7)
    {
        Dragao();
    }
    else if (cod == 8)
    {
        Zumbi();
    }
}

void Personagens::Guerreiro() {
    pontosV = 4000;
    pontosM = 30;
    forcaF = 100;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;

    int magiasAcessiveis[7] = {0, 0, 0, 0, 0, 0, 7};
    int armasAcessiveis[7] = {0, 0, 3, 4, 0, 0, 0};
}

void Personagens::Ladrao() {
    pontosV = 2800;
    pontosM = 50;
    forcaF = 50;
    forcaM = 30;
    armadura = 40;
    resistencia = 50;
    agilidade = 80;


    int magiasAcessiveis[7] = {0, 0, 0, 0, 0, 6, 7};
    int armasAcessiveis[7] = {0, 0, 0, 4, 5, 6, 7};
}

void Personagens::Mago() {
    pontosV = 2500;
    pontosM = 100;
    forcaF = 40;
    forcaM = 100;
    armadura = 30;
    resistencia = 80;
    agilidade = 40;


    int magiasAcessiveis[7] = {1, 0, 3, 4, 5, 6, 7};
    int armasAcessiveis[7] = {0, 2, 0, 0, 5, 0, 0};
}

void Personagens::Paladino() {
    pontosV = 3200;
    pontosM = 80;
    forcaF = 60;
    forcaM = 50;
    armadura = 60;
    resistencia = 60;
    agilidade = 60;


    int magiasAcessiveis[7] = {1, 0, 0, 0, 5, 0, 7};
    int armasAcessiveis[7] = {0, 2, 0, 0, 0, 6, 0};
}

void Personagens::Animal() {
    pontosV = 3200;
    pontosM = 30;
    forcaF = 80;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 50;


    int magiasAcessiveis[7] = {0, 0, 3, 0, 0, 0, 0};
    int armasAcessiveis[7] = {1, 0, 0, 0, 0, 0, 0};
}

void Personagens::Troll() {
    pontosV = 2800;
    pontosM = 20;
    forcaF = 100;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;


    int magiasAcessiveis[7] = {0, 0, 0, 0, 0, 6, 0};
    int armasAcessiveis[7] = {0, 0, 0, 4, 5, 0, 0};
}

void Personagens::Dragao() {
    pontosV = 3000;
    pontosM = 40;
    forcaF = 100;
    forcaM = 20;
    armadura = 50;
    resistencia = 50;
    agilidade = 30;


    int magiasAcessiveis[7] = {0, 2, 0, 0, 0, 0, 0};
    int armasAcessiveis[7] = {1, 0, 0, 0, 0, 0, 0};
}

void Personagens::Zumbi() {
    pontosV = 2500;
    pontosM = 20;
    forcaF = 40;
    forcaM = 20;
    armadura = 40;
    resistencia = 80;
    agilidade = 50;


    int magiasAcessiveis[7] = {0, 0, 0, 0, 0, 6, 0};
    int armasAcessiveis[7] = {1, 0, 0, 4, 5, 0, 0};
}



int pocaoVida() {
    int dano = 0;
    int cura = 200;
    int gastoMana = 12;

    return cura;
}
int halitoFogo() {
    int dano = 400;
    int cura = 0;
    int gastoMana = 12;

    return dano;
}
int bio() {
    int dano = 360;
    int cura = 0;
    int gastoMana = 14;

    return dano;
}
int cura() {
    int dano = 0;
    int cura = 400;
    int gastoMana = 16;

    return cura;
}
int flamaGelada() {
    int dano = 320;
    int cura = 0;
    int gastoMana = 14;

    return dano;
}
int intoxicacao() {
    int dano = 280;
    int cura = 0;
    int gastoMana = 12;

    return dano;
}
int tempestade() {
    int dano = 200;
    int cura = 0;
    int gastoMana = 12;

    return dano;
}



int Personagens::garraLetal() {
    int dano = 200;

    return dano;
}
int Personagens::tridenteSagrado() {
    int dano = 320;

    return dano;
}
int Personagens::espadaBarroca() {
    int dano = 400;

    return dano;
}
int Personagens::porrete() {
    int dano = 280;

    return dano;
}
int Personagens::cajado() {
    int dano = 125;

    return dano;
}
int Personagens::besta() {
    int dano = 320;

    return dano;
}
int Personagens::esferaAtaque() {
    int dano = 300;

    return dano;
}


int Personagens::dadoBulKathos() {
    unsigned seed = time(0);
    srand(seed);

    int dado = 1 + rand()%100;

    if (dado >= 20)
    {
        espadaKathos();
    }
    else
    {
        cout << "\n***Você não recebeu a benção de Bul-Kathos. Tente novamente na próxima rodada.***\n"
    }
}


int Personagens::espadaKathos() {
    int danoKathos = 700;

    unsigned seed = time(0);
    srand(seed);

    int critico = 1 + rand()%100;

    if (critico <= 30)
    {
        danoKathos = danoKathos*2;
    }

    return danoKathos;
}