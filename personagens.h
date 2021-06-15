class Humanos {
    private:
        int pontosV;
        int pontosM;
        int forcaF;
        int forcaM;
        int armadura;
        int resistencia;
        int agilidade;
};

class Guerreiro : public Humanos {
    private: 
        int pontosV = 4000;
        int pontosM = 30;
        int forcaF = 100;
        int forcaM = 20;
        int armadura = 80;
        int resistencia = 20;
        int agilidade = 20;
};

class Ladrao : public Humanos {
    private: 
        int pontosV = 2800;
        int pontosM = 50;
        int forcaF = 50;
        int forcaM = 30;
        int armadura = 40;
        int resistencia = 50;
        int agilidade = 80;
};

class Mago : public Humanos {
    private: 
        int pontosV = 2500;
        int pontosM = 100;
        int forcaF = 40;
        int forcaM = 100;
        int armadura = 30;
        int resistencia = 80;
        int agilidade = 40;
};

class Paladino : public Humanos {
    private: 
        int pontosV = 2500;
        int pontosM = 100;
        int forcaF = 40;
        int forcaM = 100;
        int armadura = 30;
        int resistencia = 80;
        int agilidade = 40;
};