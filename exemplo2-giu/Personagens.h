#include <iostream>
using namespace std;

class Personagens {
    protected:
        int pontosV;
        int pontosM;
        int forcaF;
        int forcaM;
        int armadura;
        int resistencia;
        int agilidade;
};

class Classes : public Personagens {
    public:
        Classes();
        Guerreiro();
        Ladrao();
        Mago();
        Paladino();
        Animal();
        Troll();
        Dragao();
        Zumbi();
        escolherClasse();
};






Classes::Classes() : Personagens() {
    pontosV = 0;
    pontosM = 0;
    forcaF = 0;
    forcaM = 0;
    armadura = 0;
    resistencia = 0;
    agilidade = 0;
}

Classes::Guerreiro() : Personagens() {
    pontosV = 4000;
    pontosM = 30;
    forcaF = 100;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;
}

Classes::Ladrao() : Personagens() {
    pontosV = 2800;
    pontosM = 50;
    forcaF = 50;
    forcaM = 30;
    armadura = 40;
    resistencia = 50;
    agilidade = 80;
}

Classes::Mago() : Personagens() {
    pontosV = 2500;
    pontosM = 100;
    forcaF = 40;
    forcaM = 100;
    armadura = 30;
    resistencia = 80;
    agilidade = 40;
}

Classes::Paladino() : Personagens() {
    pontosV = 3200;
    pontosM = 80;
    forcaF = 60;
    forcaM = 50;
    armadura = 60;
    resistencia = 60;
    agilidade = 60;
}

Classes::Animal() : Personagens() {
    pontosV = 3200;
    pontosM = 30;
    forcaF = 80;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 50;
}

Classes::Troll() : Personagens() {
    pontosV = 2800;
    pontosM = 20;
    forcaF = 100;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;
}

Classes::Dragao() : Personagens() {
    pontosV = 3000;
    pontosM = 40;
    forcaF = 100;
    forcaM = 20;
    armadura = 50;
    resistencia = 50;
    agilidade = 30;
}

Classes::Zumbi() : Personagens() {
    pontosV = 2500;
    pontosM = 20;
    forcaF = 40;
    forcaM = 20;
    armadura = 40;
    resistencia = 80;
    agilidade = 50;
}
