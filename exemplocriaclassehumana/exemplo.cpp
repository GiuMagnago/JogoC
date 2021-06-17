#include "humanosC.h";

//Cria ponteiro das classes humanas
Classes *v1 = new Classes();

//Chama menu para escolher classe
void Classes::escolherClasse() {

    //opcao para escolha
    int opcao;

    //Mostra opcoes
    cout << "1 - Guerreiro" << "\n";
    cout << "2 - Ladrao" << "\n";
    cout << "3 - Mago" << "\n";
    cout << "4 - Paladino" << "\n";

    //Entrada de opcao
    cout << "Digite a opcao: ";
    cin >> opcao;

    if (opcao == 1) {
        //Atribui vetor a funcao que guerreiro
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
        //Atribui vetor a funcao que Ladrao
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
        //Atribui vetor a funcao que Mago
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
        //Atribui vetor a funcao que Paladino
        v1->Paladino();
        cout << v1->pontosV << "\n";
        cout << v1->pontosM << "\n";
        cout << v1->forcaF << "\n";
        cout << v1->forcaM << "\n";
        cout << v1->armadura << "\n";
        cout << v1->resistencia << "\n";
        cout << v1->agilidade << "\n";
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