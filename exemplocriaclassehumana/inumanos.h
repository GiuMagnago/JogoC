#include <iostream>
using namespace std;

class Inumanos {
    public:
        int pontosV;
        int pontosM;
        int forcaF;
        int forcaM;
        int armadura;
        int resistencia;
        int agilidade;
};

class Classes:public Inumanos {
    public:
        Classes();
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
