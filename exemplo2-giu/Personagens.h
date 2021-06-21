#include <iostream>
using namespace std;

class Personagens {
    public:
        int pontosV;
        int pontosM;
        int forcaF;
        int forcaM;
        int armadura;
        int resistencia;
        int agilidade;
};

class Classes:public Personagens {
    public:
        void Classes();
        void Guerreiro();
        void Ladrao();
        void Mago();
        void Paladino();
        void Animal();
        void Troll();
        void Dragao();
        void Zumbi();
        void escolherClasse();
};

Classes::Classes() {
    pontosV = 0;
    pontosM = 0;
    forcaF = 0;
    forcaM = 0;
    armadura = 0;
    resistencia = 0;
    agilidade = 0;
}

void Classes::Guerreiro() {
    pontosV = 4000;
    pontosM = 30;
    forcaF = 100;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;
};

void Classes::Ladrao() {
    pontosV = 2800;
    pontosM = 50;
    forcaF = 50;
    forcaM = 30;
    armadura = 40;
    resistencia = 50;
    agilidade = 80;
};

void Classes::Mago() {
    pontosV = 2500;
    pontosM = 100;
    forcaF = 40;
    forcaM = 100;
    armadura = 30;
    resistencia = 80;
    agilidade = 40;
};

void Classes::Paladino() {
    pontosV = 2500;
    pontosM = 100;
    forcaF = 40;
    forcaM = 100;
    armadura = 30;
    resistencia = 80;
    agilidade = 40;
};

void Classes::Animal() {
    pontosV = 3200;
    pontosM = 30;
    forcaF = 80;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 50;
};

void Classes::Troll() {
    pontosV = 2800;
    pontosM = 20;
    forcaF = 100;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;
};

void Classes::Dragao() {
    pontosV = 3000;
    pontosM = 40;
    forcaF = 100;
    forcaM = 20;
    armadura = 50;
    resistencia = 50;
    agilidade = 30;
};

void Classes::Zumbi() {
    pontosV = 2500;
    pontosM = 20;
    forcaF = 40;
    forcaM = 20;
    armadura = 40;
    resistencia = 80;
    agilidade = 50;
};
