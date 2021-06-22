#include "humanosC.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Personagens *v1 = new Personagens();

Personagens::Personagens() {
    pontosV = 0;
    pontosM = 0;
    forcaF = 0;
    forcaM = 0;
    armadura = 0;
    resistencia = 0;
    agilidade = 0;
}

void Personagens::Guerreiro() {
    pontosV = 4000;
    pontosM = 30;
    forcaF = 100;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;
}

void Personagens::Paladino()
{
    pontosV = 3200;
    pontosM = 80;
    forcaF = 60;
    forcaM = 50;
    armadura = 60;
    resistencia = 60;
    agilidade = 60;
}

void Personagens::Ladrao() {
    pontosV = 2800;
    pontosM = 50;
    forcaF = 50;
    forcaM = 30;
    armadura = 40;
    resistencia = 50;
    agilidade = 80;
}

void Personagens::Mago() {
    pontosV = 2500;
    pontosM = 100;
    forcaF = 40;
    forcaM = 100;
    armadura = 30;
    resistencia = 80;
    agilidade = 40;
}

void Personagens::Animal() {
    pontosV = 3200;
    pontosM = 30;
    forcaF = 80;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 50;
}

void Personagens::Troll() {
    pontosV = 2800;
    pontosM = 20;
    forcaF = 100;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;
}

void Personagens::Dragao() {
    pontosV = 3000;
    pontosM = 40;
    forcaF = 100;
    forcaM = 20;
    armadura = 50;
    resistencia = 50;
    agilidade = 30;
}

void Personagens::Zumbi() {
    pontosV = 2500;
    pontosM = 20;
    forcaF = 40;
    forcaM = 20;
    armadura = 40;
    resistencia = 80;
    agilidade = 50;
}

void Personagens::EscolhePersonagen() {
    int opcao = 0;
    cout << "1 - Guerreriro" << "\n";
    cout << "2 - Paladino" << "\n";
    cout << "3 - Ladrao" << "\n";
    cout << "4 - Mago" << "\n";
    cout << "5 - Animal" << "\n";
    cout << "6 - Troll" << "\n";
    cout << "7 - Dragao" << "\n";
    cout << "8 - Zumbi" << "\n";
    cout << "DIGITE A OPCAO: " << "\n";
    cin >> opcao;
    if(opcao == 1) {
        v1->Guerreiro();
    }
    else if(opcao == 2){
        v1->Paladino();
    }
    else if(opcao == 3){
        v1->Ladrao();
    }
    else if(opcao == 4){
        v1->Mago();
    }
    else if(opcao == 5){
        v1->Animal();
    }
    else if(opcao == 6){
        v1->Troll();
    }
    else if(opcao == 7){
        v1->Dragao();
    }
    else if(opcao == 8){
        v1->Zumbi();
    }
}

void Personagens::MostraAtributos(int pontosV, int pontosM, int forcaF, int forcaM, int armadura, int resistencia, int agilidade) {
        cout << pontosV << "\n" << pontosM << "\n" << forcaF << "\n";
}

int pocaoVida(int &pontosM) {
    int dano = 0;
    int cura = 200;

    int gastoMana = 12;

    if (gastoMana > pontosM)
    {
        cout << "\n***Você não tem mana suficiente para conjurar esta magia.***\n";
        return 0;
    }

    pontosM -= gastoMana;

    int attVida = dano - cura;

    return attVida;
}

int Personagens::garraLetal() {
    int dano = 200;

    return dano;
}

int main(void) {
    int opcao;
    do {
        cout << "1-Escolher" << "\n";
        cin >> opcao;
        if(opcao == 1) {
            v1->EscolhePersonagen();
        }
        v1->MostraAtributos(v1->pontosV, v1->pontosM, v1->forcaF, v1->forcaM, v1->armadura, v1->resistencia, v1->agilidade);
    } while (opcao != 0);
}
