#include <iostream>

using namespace std;

class Personagens {
    private:
        int pontosV;
        int pontosM;
        int forcaF;
        int forcaM;
        int armadura;
        int resistencia;
        int agilidade;

        int magias[7] = {1, 2, 3, 4, 5, 6, 7};
        int armas[7] = {1, 2, 3, 4, 5, 6, 7};

        void recebeDano(int dano);
        void ataque();

        void Guerreiro();
        void Ladrao();
        void Mago();
        void Paladino();
        void Animal();
        void Troll();
        void Dragao();
        void Zumbi();



        int pocaoVida();
        int halitoFogo();
        int bio();
        int cura();
        int flamaGelada();
        int intoxicacao();
        int tempestade();



        int garraLetal();
        int tridenteSagrado();
        int espadaBarroca();
        int porrete();
        int cajado();
        int besta();
        int esferaAtaque();



        int dadoBulKathos();
        int espadaKathos();
    public:
        Personagens(int cod);
};
