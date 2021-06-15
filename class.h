#include <iostream>

using namespace std;

//Declaração das "class" humanos

//características do Guerreiro
class Guerreiro {
    private:
        int pts_vida = 4000;
        int pts_mana = 30;
        int forca_fis = 100;
        int forca_mag = 20;
        int armadura = 80;
        int resist_mag = 20;
        int agilidade = 20;
    public:
        //magias que o personagem pode utilizar
        int tempestade(int forca_mag);
        int recebeDano(int pts_vida);

        //armas que o personagem pode utilizar
        int espadaBarroca(int forca_fis);
        int porrete(int forca_fis);
        
        //espada lendária de Bul-Kathos
        int espadaKathos(int forca_fis);
};

//características do Ladrão
class Ladrao {
    private:
        int pts_vida = 2800;
        int pts_mana = 50;
        int forca_fis = 50;
        int forca_mag = 30;
        int armadura = 40;
        int resist_mag = 50;
        int agilidade = 80;
    public:
        //magias que o personagem pode utilizar
        int intoxicacao(int forca_mag);
        int tempestade(int forca_mag);
        int recebeDano(int pts_vida);

        //armas que o personagem pode utilizar
        int porrete(int forca_fis);
        int cajado(int forca_fis);
        int besta(int forca_fis);
        int esferaAtaque(int forca_fis);

        //espada lendária de Bul-Kathos
        int espadaKathos(int forca_fis);
};

//características do Mago
class Mago {
    private:
        int pts_vida = 2500;
        int pts_mana = 10;
        int forca_fis = 40;
        int forca_mag = 100;
        int armadura = 30;
        int resist_mag = 80;
        int agilidade = 40;
    public:
        //magias que o personagem pode utilizar
        int pocaoVida(int pts_vida);
        int bio(int forca_mag);
        int cura(int pts_vida);
        int flamaGelada(int forca_mag);
        int intoxicacao(int forca_mag);
        int tempestade(int forca_mag);
        int recebeDano(int pts_vida);

        //armas que o personagem pode utilizar
        int tridenteSagrado(int forca_fis);
        int cajado(int forca_fis);

        //espada lendária de Bul-Kathos
        int espadaKathos(int forca_fis);
};

//características do Paladino
class Paladino {
    private:
        int pts_vida = 3200;
        int pts_mana = 80;
        int forca_fis = 60;
        int forca_mag = 50;
        int armadura = 60;
        int resist_mag = 60;
        int agilidade = 60;
    public:
        //magias que o personagem pode utilizar
        int pocaoVida(int pts_vida);
        int flamaGelada(int forca_mag);
        int tempestade(int forca_mag);
        int recebeDano(int pts_vida);

        //armas que o personagem pode utilizar
        int tridenteSagrado(int forca_fis);
        int besta(int forca_fis);

        //espada lendária de Bul-Kathos
        int espadaKathos(int forca_fis);
};

//Declaração das "class" não humanos

//características do Animal
class Animal {
    private:
        int pts_vida = 3200;
        int pts_mana = 30;
        int forca_fis = 80;
        int forca_mag = 20;
        int armadura = 80;
        int resist_mag = 20;
        int agilidade = 50;
    public:
        //magias que o personagem pode utilizar
        int bio(int forca_mag);
        int recebeDano(int pts_vida);

        //armas que o personagem pode utilizar
        int garraLetal(int forca_fis);

        //espada lendária de Bul-Kathos
        int espadaKathos(int forca_fis);
};

//características do Troll
class Troll {
    private:
        int pts_vida = 2800;
        int pts_mana = 20;
        int forca_fis = 100;
        int forca_mag = 20;
        int armadura = 80;
        int resist_mag = 20;
        int agilidade = 20;
    public:
        //magias que o personagem pode utilizar
        int intoxicacao(int forca_mag);
        int recebeDano(int pts_vida);

        //armas que o personagem pode utilizar
        int porrete(int forca_fis);
        int cajado(int forca_fis);

        //espada lendária de Bul-Kathos
        int espadaKathos(int forca_fis);
};

//características do Dragão
class Dragao {
    private:
        int pts_vida = 3000;
        int pts_mana = 40;
        int forca_fis = 100;
        int forca_mag = 20;
        int armadura = 50;
        int resist_mag = 50;
        int agilidade = 30;
    public:
        //magias que o personagem pode utilizar
        int halitoFogo(int forca_mag);
        int recebeDano(int pts_vida);

        //armas que o personagem pode utilizar
        int garraLetal(int forca_fis);

        //espada lendária de Bul-Kathos
        int espadaKathos(int forca_fis);
};

//características do Zumbi
class Zumbi {
    private:
        int pts_vida = 2500;
        int pts_mana = 20;
        int forca_fis = 40;
        int forca_mag = 20;
        int armadura = 40;
        int resist_mag = 80;
        int agilidade = 50;
    public:
        //magias que o personagem pode utilizar
        int intoxicacao(int forca_mag);
        int recebeDano(int pts_vida);

        //armas que o personagem pode utilizar
        int garraLetal(int forca_fis);
        int porrete(int forca_fis);
        int cajado(int forca_fis);

        //espada lendária de Bul-Kathos
        int espadaKathos(int forca_fis);
};



