#include <iostream>

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
}

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
}

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
}

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
}

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
}

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
}

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
    
}

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
    
}

//Declaração das "class" das magias

//características da Poção de Vida
class pocaoDeVida {
    private:
        int dano = 0;
        int cura = 200;
        int gst_mana = 12;
}

//características do Hálito de Fogo
class halitoDeFogo {
    private:
        int dano = 400;
        int cura = 0;
        int gst_mana = 12;
}

//características do Bio
class Bio {
    private:
        int dano = 360;
        int cura = 0;
        int gst_mana = 14;
}

//características da Cura
class Cura {
    private:
        int dano = 0;
        int cura = 400;
        int gst_mana = 16;
}

//características da Flama Gelada
class FlamaGelada {
    private:
        int dano = 320;
        int cura = 0;
        int gst_mana = 14;
}

//características da Intoxicação
class Intoxicacao {
    private:
        int dano = 280;
        int cura = 0;
        int gst_mana = 12;
}

//características da Tempestade
class Tempestade {
    private:
        int dano = 200;
        int cura = 0;
        int gst_mana = 12;
}
