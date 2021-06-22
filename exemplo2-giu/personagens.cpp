#include "Personagens.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Contrutor é chamado recebendo como parâmetro o código da opção de personagem escolhida pelo usuário
Personagens::Personagens(int cod) {
    //inicializa as variáveis de atributos dos personagens
    pontosV = 0;
    pontosM = 0;
    forcaF = 0;
    forcaM = 0;
    armadura = 0;
    resistencia = 0;
    agilidade = 0;

    //chama a função de acordo com o código escolhido, a função chamada atualizará o valor dos atributos de acordo com os atributos do personagem correspondente àquele código
    if (cod == 1)
    {
        Guerreiro();
    }
    else if (cod == 2)
    {
        Ladrao();
    }
    else if (cod == 3)
    {
        Mago();
    }
    else if (cod == 4)
    {
        Paladino();
    }
    else if (cod == 5)
    {
        Animal();
    }
    else if (cod == 6)
    {
        Troll();
    }
    else if (cod == 7)
    {
        Dragao();
    }
    else if (cod == 8)
    {
        Zumbi();
    }
}


/*
Funções que atualizarão os valores do atributos de acordo com o código escolhido

Os vetores "magias" e "armas" serão alterados da seguinte maneira:

Ex: Guerreiro pode usar somente a última magia da ordem (ordem da tabela do documento), então no vetor de magia do 
guerreiro estará preenchido somente a última posição, as posições que estão com o valor "0" representam as magias 
que ele não pode usar. O mesmo funciona para as armas.

*** O exemplo citado acima funciona do mesmo jeito para todos os personagens. ***
*/
void Personagens::Guerreiro() {
    pontosV = 4000;
    pontosM = 30;
    forcaF = 100;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;

    magias[] = {0, 0, 0, 0, 0, 0, 7};
    armas[] = {0, 0, 3, 4, 0, 0, 0};
}

void Personagens::Ladrao() {
    pontosV = 2800;
    pontosM = 50;
    forcaF = 50;
    forcaM = 30;
    armadura = 40;
    resistencia = 50;
    agilidade = 80;


    magias[] = {0, 0, 0, 0, 0, 6, 7};
    armas[] = {0, 0, 0, 4, 5, 6, 7};
}

void Personagens::Mago() {
    pontosV = 2500;
    pontosM = 100;
    forcaF = 40;
    forcaM = 100;
    armadura = 30;
    resistencia = 80;
    agilidade = 40;


    magias[] = {1, 0, 3, 4, 5, 6, 7};
    armas[] = {0, 2, 0, 0, 5, 0, 0};
}

void Personagens::Paladino() {
    pontosV = 3200;
    pontosM = 80;
    forcaF = 60;
    forcaM = 50;
    armadura = 60;
    resistencia = 60;
    agilidade = 60;


    magias[] = {1, 0, 0, 0, 5, 0, 7};
    armas[] = {0, 2, 0, 0, 0, 6, 0};
}

void Personagens::Animal() {
    pontosV = 3200;
    pontosM = 30;
    forcaF = 80;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 50;


    magias[] = {0, 0, 3, 0, 0, 0, 0};
    armas[] = {1, 0, 0, 0, 0, 0, 0};
}

void Personagens::Troll() {
    pontosV = 2800;
    pontosM = 20;
    forcaF = 100;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;


    magias[] = {0, 0, 0, 0, 0, 6, 0};
    armas[] = {0, 0, 0, 4, 5, 0, 0};
}

void Personagens::Dragao() {
    pontosV = 3000;
    pontosM = 40;
    forcaF = 100;
    forcaM = 20;
    armadura = 50;
    resistencia = 50;
    agilidade = 30;


    magias[] = {0, 2, 0, 0, 0, 0, 0};
    armas[] = {1, 0, 0, 0, 0, 0, 0};
}

void Personagens::Zumbi() {
    pontosV = 2500;
    pontosM = 20;
    forcaF = 40;
    forcaM = 20;
    armadura = 40;
    resistencia = 80;
    agilidade = 50;


    magias[] = {0, 0, 0, 0, 0, 6, 0};
    armas[] = {1, 0, 0, 4, 5, 0, 0};
}



/*
Com o usuário chamando uma magia, o programa checará se ela faz parte do deck de magias acessíveis por 
aquele personagem, se ela for acessível, o programa chamará a função correspondente àquela magia e esta 
retornará "attVida" (dano - cura) que posteriormente será calculado com a Resistência Mágica do personagem 
e o valor final será subtraído dos Pontos de Vida do personagem.

** Isso são somente exemplos, ainda têm que pôr na conta resistencia do personagem na hora de receber dano, fiz o exemplo só para explicar como funciona **

Ex1 (dano): 
    Dano = 400;
    Cura = 0;
    Pontos de Vida = 3000;

    Após o uso da magia:
        Pontos de Vida = 3000 - attVida(400 - 0);
        Pontos de Vida = 3000 - 400;
        Pontos de Vida = 2600;

Ex2 (cura):
    Dano = 0;
    Cura = 200;
    Pontos de Vida = 3000;

    Após o uso da magia:
        Pontos de Vida = 3000 - attVida(0 - 200);
        Pontos de Vida = 3000 - (-200);
        Pontos de Vida = 3000 + 200;
        Pontos de Vida = 3200;

Além disso, a variável que representa os Pontos de Mana do personagem será passada como parâmetro por referência para a função 
a qual irá subtrair do pontos de mana o custo de mana da magia.

OBS: O programa checará primeiro se o usuário possui mana o suficiente para realizar a conjuração, caso tenha ele realiza normalmente, 
caso não, será retornado 0 e será exibida uma mensagem na tela.
*/

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

int halitoFogo(int &pontosM) {
    int dano = 400;
    int cura = 0;

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

int bio(int &pontosM) {
    int dano = 360;
    int cura = 0;

    int gastoMana = 14;

    if (gastoMana > pontosM)
    {
        cout << "\n***Você não tem mana suficiente para conjurar esta magia.***\n";
        return 0;
    }

    pontosM -= gastoMana;

    int attVida = dano - cura;

    return attVida;
}

int cura(int &pontosM) {
    int dano = 0;
    int cura = 400;

    int gastoMana = 16;
    
    
    if (gastoMana > pontosM)
    {
        cout << "\n***Você não tem mana suficiente para conjurar esta magia.***\n";
        return 0;
    }

    pontosM -= gastoMana;

    int attVida = dano - cura;

    return attVida;
}

int flamaGelada(int &pontosM) {
    int dano = 320;
    int cura = 0;

    int gastoMana = 14;
    
    if (gastoMana > pontosM)
    {
        cout << "\n***Você não tem mana suficiente para conjurar esta magia.***\n";
        return 0;
    }

    pontosM -= gastoMana;

    int attVida = dano - cura;

    return attVida;
}

int intoxicacao(int &pontosM) {
    int dano = 280;
    int cura = 0;

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

int tempestade(int &pontosM) {
    int dano = 200;
    int cura = 0;

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



/*
Com o usuário chamando uma arma, o programa checará se ela faz parte do deck de armas acessíveis por 
aquele personagem, se ela for acessível, o programa chamará a função correspondente àquela arma e esta 
retornará o "dano" que posteriormente será calculado com a Resistência Física do personagem 
e o valor final será subtraído dos Pontos de Vida do personagem.
#######################################################################
#######################################################################
LENTAH E HIRO: Os valores que eu coloquei são a média do dano máximo e mínimo que estão na tabela, mas 
se vocês quiserem criar um algoritmo que aumenta o valor da arma com o passar das rodadas, vocês que sabem, 
só me avisem e não esqueçam de apagar este aviso até a linha 356 após lerem.
*/

int Personagens::garraLetal() {
    int dano = 200;

    return dano;
}
int Personagens::tridenteSagrado() {
    int dano = 320;

    return dano;
}
int Personagens::espadaBarroca() {
    int dano = 400;

    return dano;
}
int Personagens::porrete() {
    int dano = 280;

    return dano;
}
int Personagens::cajado() {
    int dano = 125;

    return dano;
}
int Personagens::besta() {
    int dano = 320;

    return dano;
}
int Personagens::esferaAtaque() {
    int dano = 300;

    return dano;
}

/*
############################################################################

Em relação à benção de Bul-Kathos, fazer um algoritmo (coisa simples), 
que permite que o uso da espada após conseguir ela no dado seja por 
somente uma rodada atualizando o valor de dano do personagem, após a 
rodada, para o valor inicialmente calculado.

Ex: 
    Rodada 1:
        Guerreiro - Espada Barroca;
        Dano = Dano da Arma + Porcentagem de Força Física o Personagem;
        Dano = 400 + 100%;
        Dano = 800;

    Rodada 2: 
        Guerreiro - (recebe a Benção de Bul-Kathos) Espada Lendária
        Dano = Dano da Arma + Porcentagem de Força Física o Personagem;
        Dano = 1400 (700 + 100% de Crítico = 1400) + 100%;
        Dano = 2800;

    Rodada 3:
        Guerreiro - Espada Barroca;
        Dano = Dano da Arma + Porcentagem de Força Física o Personagem;
        Dano = 400 + 100%;
        Dano = 800;

############################################################################

*/


/*
Função que, caso o usuário queira, roda o dado, caso seja sorteado um número de 1 a 100, caso o número 
sorteado menor ou igual a 20 (20% de chance de conseguir) é chamada a função para calcular o dano da espada.
*/
int Personagens::dadoBulKathos() {
    unsigned seed = time(0);
    srand(seed);

    int dado = 1 + rand()%100;

    if (dado >= 20)
    {
        criticoKathos();
    }
    else
    {
        cout << "\n***Você não recebeu a benção de Bul-Kathos. Tente novamente na próxima rodada.***\n"
    }
}

/*
Função que, caso o usuário consiga a espada lendária, calcula se o ataque vai ser crítico sorteando um número de 1 a 100, 
caso o número seja menor ou igual a 30 (30% de chance de acerto crítico) é duplicado o dano da espada (acerto crítico = +100%) 
e posteriormente esse valor é retornado.
*/
int Personagens::criticoKathos() {
    int danoKathos = 700;

    unsigned seed = time(0);
    srand(seed);

    int critico = 1 + rand()%100;

    if (critico <= 30)
    {
        danoKathos = danoKathos*2;
    }

    return danoKathos;
}
