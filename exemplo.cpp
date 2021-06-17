#include <iostream>
using namespace std;

class Humanos {
    public:
        int pontosV;
        int pontosM;
        int forcaF;
        int forcaM;
        int armadura;
        int resistencia;
        int agilidade;
};

class Classes:public Humanos {
    public:
        Classes();
        void Guerreiro();
        void Ladrao();
        void Mago();
        void Paladino();
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

Classes *v1 = new Classes();

void Classes::escolherClasse() {
    int opcao;

    cout << "1 - Guerreiro" << "\n";
    cout << "2 - Ladrao" << "\n";
    cout << "3 - Mago" << "\n";
    cout << "4 - Paladino" << "\n";

    cout << "Digite a opcao: ";
    cin >> opcao;

    if (opcao == 1) {
        v1->Guerreiro();
        cout << v1->pontosV << "\n";
        cout << v1->pontosM << "\n";
        cout << v1->forcaF << "\n";
        cout << v1->forcaM << "\n";
        cout << v1->armadura << "\n";
        cout << v1->resistencia << "\n";
        cout << v1->agilidade<<"\n";
    }
    if (opcao == 2) {
        v1->Ladrao();
        cout << v1->pontosV << "\n";
        cout << v1->pontosM << "\n";
        cout << v1->forcaF << "\n";
        cout << v1->forcaM << "\n";
        cout << v1->armadura << "\n";
        cout << v1->resistencia << "\n";
        cout << v1->agilidade<<"\n";
    }
    if (opcao == 3) {
        v1->Mago();
        cout << v1->pontosV << "\n";
        cout << v1->pontosM << "\n";
        cout << v1->forcaF << "\n";
        cout << v1->forcaM << "\n";
        cout << v1->armadura << "\n";
        cout << v1->resistencia << "\n";
        cout << v1->agilidade<<"\n";
    }
    if (opcao == 4) {
        v1->Paladino();
        cout << v1->pontosV << "\n";
        cout << v1->pontosM << "\n";
        cout << v1->forcaF << "\n";
        cout << v1->forcaM << "\n";
        cout << v1->armadura << "\n";
        cout << v1->resistencia << "\n";
        cout << v1->agilidade<<"\n";
    }
};

int main() {
    int opcao;

    do{
        cout << "1 - Escolher a classe" << "\n";

        cout << "Digite a opcao: ";
        cin >> opcao;
        if(opcao == 1) {
            v1->escolherClasse();
        }
    }while(opcao != 0);

    delete v1;
}