#include <iostream>

using namespace std;

class Personagens {
    private:
        //declaração dos atributos dos personagens
        string nome;
        int pontosV;
        int pontosM;
        int forcaF;
        int forcaM;
        int armadura;
        int resistencia;
        int agilidade;

        //vetores de magias e armas terão seus valores alterados de acordo com as magias e armas acessíveis a cada personagem
        int magias[7] = {0, 0, 0, 0, 0, 0, 0};
        int magias_mana[7] = {12, 12, 14, 16, 14, 12, 12};
        string magias_nomes[7] = {"", "", "", "", "", "", ""};
        
        int armas[8] = {0, 0, 0, 0, 0, 0, 0, 0};
        string armas_nomes[8] = {"", "", "", "", "", "", "", ""};

        //funções de ações
        
        int calculaEsquiva();
        
        void attVida(int danoArma, int danoMagia);
        void attMana(int att);

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
        int halitoFogo(); //posição "1" no vetor, valor "2"
        int bio(); //posição "2" no vetor, valor "3"
        int cura(); //posição "3" no vetor, valor "4"
        int flamaGelada(); //posição "4" no vetor, valor "5"
        int intoxicacao(); //posição "5" no vetor, valor "6"
        int tempestade(); //posição "6" no vetor, valor "7"




        //funções das armas, organizadas na ordem do vetor de armas

        int garraLetal(); //posição "0" no vetor, valor "1"
        int tridenteSagrado(); //posição "1" no vetor, valor "2"
        int espadaBarroca(); //posição "2" no vetor, valor "3"
        int porrete(); //posição "3" no vetor, valor "4"
        int cajado(); //posição "4" no vetor, valor "5"
        int besta(); //posição "5" no vetor, valor "6"
        int esferaAtaque(); //posição "6" no vetor, valor "7"


        //funções para a espada lendária de Bul-Kathos
        int dadoBulKathos(); //caso o usuário deseje, rola o dado no inicio da rodada (20% de chance), caso ele consiga, ele usa a espada lendária por UMA RODADA
        int criticoKathos(); //caso o usuário consiga a espada lendária no dado, é sorteado se ele vai ter acerto crítico ou não (30% de chance)
    public:
        //contrutor do personagem ******int cod, int &pontosV, int &pontosM, int &forcaF, int &forcaM, int &armadura, int &resistencia, int &agilidade, int magia[], int armas[]
        Personagens();
        void escolhePersonagem(int cod);
        void recebeDano(int danoArma, int danoMagia);
        
        void recuperaMana(int qntMana);

        string getNome() { return nome; }
        int getVida() { return pontosV; }
        int getMana() { return pontosM; }
        int getForcaF() { return forcaF; }
        int getForcaM() { return forcaM; }
        int getArmor() { return armadura; }
        int getResist() { return resistencia; }
        int getAgil() { return agilidade; }
        
        
        int getMagias(int i) { return magias[i]; }
        int getMagiasMana(int i) { return magias_mana[i]; }
        string getMagiasNomes(int i) { return magias_nomes[i]; }
        int getArmas(int i) { return armas[i]; }
        string getArmasNomes(int i) { return armas_nomes[i]; }
        
        
        
        int escolheArma(int cod_arma);
        int escolheMagia(int cod_magia);
        
};
