#include <iostream>

using namespace std;

class Personagens {
    private:

        //declaração das funções que altera os valores dos atributos de acordo com a escolha do personagem
        void Guerreiro();
        void Ladrao();
        void Mago();
        void Paladino();
        void Animal();
        void Troll();
        void Dragao();
        void Zumbi();

        
        //funções das magias, organizadas na ordem do vetor de magias

        int pocaoVida(); //posição "0" no vetor, valor "1"

        //funções das armas, organizadas na ordem do vetor de armas

        int garraLetal(); //posição "0" no vetor, valor "1"
        
    public:

        //declaração dos atributos dos personagens
        int pontosV;
        int pontosM;
        int forcaF;
        int forcaM;
        int armadura;
        int resistencia;
        int agilidade;
        //contrutor do personagem
        Personagens();
        void EscolhePersonagen();
        void MostraAtributos(int pontosV,
        int pontosM,
        int forcaF,
        int forcaM,
        int armadura,
        int resistencia,
        int agilidade);
};
