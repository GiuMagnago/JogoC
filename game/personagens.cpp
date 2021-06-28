#include "Personagens.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Contrutor é chamado recebendo como parâmetro o código da opção de personagem escolhida pelo usuário
Personagens::Personagens() {
    //inicializa as variáveis de atributos dos personagens
    nome;
    pontosV = 0;
    pontosM = 0;
    forcaF = 0;
    forcaM = 0;
    armadura = 0;
    resistencia = 0;
    agilidade = 0;
}

void Personagens::escolhePersonagem(int cod) {
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
    nome = "Guerreiro";
    pontosV = 4000;
    pontosM = 30;
    forcaF = 100;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;

    magias[6] = 1;
    
    magias_nomes[6] = "Tempestade";
    
    
    
    armas[2] = 1;
    armas[3] = 2;
    armas[7] = 3;
    
    armas_nomes[2] = "Espada Barroca";
    armas_nomes[3] = "Porrete";
    armas_nomes[7] = "Tentar Voto Solene de Bul-Kathos (30% de chance, se não conseguir perde a rodada)";
}

void Personagens::Ladrao() {
    nome = "Ladrão";
    pontosV = 2800;
    pontosM = 50;
    forcaF = 50;
    forcaM = 30;
    armadura = 40;
    resistencia = 50;
    agilidade = 80;


    magias[5] = 1;
    magias[6] = 2;
    
    magias_nomes[5] = "Intoxicação";
    magias_nomes[6] = "Tempestade";
    
    
    
    armas[3] = 1;
    armas[4] = 2;
    armas[5] = 3;
    armas[6] = 4;
    armas[7] = 5;
    
    armas_nomes[3] = "Porrete";
    armas_nomes[4] = "Cajado";
    armas_nomes[5] = "Besta";
    armas_nomes[6] = "Esfera de Ataque";
    armas_nomes[7] = "Tentar Voto Solene de Bul-Kathos (30% de chance, se não conseguir perde a rodada)";
}

void Personagens::Mago() {
    nome = "Mago";
    pontosV = 2500;
    pontosM = 100;
    forcaF = 40;
    forcaM = 100;
    armadura = 30;
    resistencia = 80;
    agilidade = 40;


    magias[0] = 1;
    magias[2] = 2;
    magias[3] = 3;
    magias[4] = 4;
    magias[5] = 5;
    magias[6] = 6;
    
    magias_nomes[0] = "Poção da Vida";
    magias_nomes[2] = "Bio";
    magias_nomes[3] = "Cura";
    magias_nomes[4] = "Flama Gelada";
    magias_nomes[5] = "Intoxicação";
    magias_nomes[6] = "Tempestade";
    
    
    
    armas[1] = 1;
    armas[4] = 2;
    armas[7] = 3;
    
    armas_nomes[1] = "Tridente Sagrado";
    armas_nomes[4] = "Cajado";
    armas_nomes[7] = "Tentar Voto Solene de Bul-Kathos (30% de chance, se não conseguir perde a rodada)";
}

void Personagens::Paladino() {
    nome = "Paladino";
    pontosV = 3200;
    pontosM = 80;
    forcaF = 60;
    forcaM = 50;
    armadura = 60;
    resistencia = 60;
    agilidade = 60;


    magias[0] = 1;
    magias[4] = 2;
    magias[6] = 3;
    
    magias_nomes[0] = "Poção da Vida";
    magias_nomes[4] = "Flama Gelada";
    magias_nomes[6] = "Tempestade";
    
    
    
    armas[1] = 1;
    armas[5] = 2;
    armas[7] = 3;
    
    armas_nomes[1] = "Tridente Sagrado";
    armas_nomes[5] = "Besta";
    armas_nomes[7] = "Tentar Voto Solene de Bul-Kathos (30% de chance, se não conseguir perde a rodada)";
}

void Personagens::Animal() {
    nome = "Animal";
    pontosV = 3200;
    pontosM = 30;
    forcaF = 80;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 50;


    magias[2] = 1;
    
    magias_nomes[2] = "Bio";
    
    
    
    armas[0] = 1;
    armas[7] = 2;
    
    armas_nomes[0] = "Garra Letal";
    armas_nomes[7] = "Tentar Voto Solene de Bul-Kathos(30% de chance, se não conseguir perde a rodada)";
}

void Personagens::Troll() {
    nome = "Troll";
    pontosV = 2800;
    pontosM = 20;
    forcaF = 100;
    forcaM = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;


    magias[5] = 1;
    
    magias_nomes[5] = "Intoxicação";
    
    
    
    armas[4] = 1;
    armas[5] = 2;
    armas[7] = 3;
    
    armas_nomes[4] = "Porrete";
    armas_nomes[5] = "Cajado";
    armas_nomes[7] = "Tentar Voto Solene de Bul-Kathos(30% de chance, se não conseguir perde a rodada)";
}

void Personagens::Dragao() {
    nome = "Dragão";
    pontosV = 3000;
    pontosM = 40;
    forcaF = 100;
    forcaM = 20;
    armadura = 50;
    resistencia = 50;
    agilidade = 30;


    magias[1] = 1;
    
    magias_nomes[1] = "Hálito de Fogo";
    
    
    armas[0] = 1;
    armas[7] = 2;
    
    armas_nomes[0] = "Garra Letal";
    armas_nomes[7] = "Tentar Voto Solene de Bul-Kathos (30% de chance, se não conseguir perde a rodada)";
}

void Personagens::Zumbi() {
    nome = "Zumbi";
    pontosV = 2500;
    pontosM = 20;
    forcaF = 40;
    forcaM = 20;
    armadura = 40;
    resistencia = 80;
    agilidade = 50;


    magias[5] = 1;
    
    magias_nomes[5] = "Intoxicação";
    
    
    
    armas[0] = 1;
    armas[3] = 2;
    armas[4] = 3;
    armas[7] = 4;
    
    armas_nomes[0] = "Garra Letal";
    armas_nomes[3] = "Porrete";
    armas_nomes[4] = "Cajado";
    armas_nomes[7] = "Tentar Voto Solene de Bul-Kathos (30% de chance, se não conseguir perde a rodada)";
}



/*
Com o usuário chamando uma magia, o programa checará se ela faz parte do deck de magias acessíveis por 
aquele personagem, se ela for acessível, o programa chamará a função correspondente àquela magia e esta 
retornará "attVida" (dano - cura) que posteriormente será calculado com a Resistência Mágica do personagem 
e o valor final será subtraído dos Pontos de Vida do personagem.
** Isso são somente exemplos, ainda têm que pôr na conta resistencia do personagem na hora de receber dano, fiz o exemplo só para explicar como funciona **
Ex (dano): 
    Dano = 400;
    Cura = 0;
    Portanto, o programa entrará na segunda condição (cura = 0) e com isso, será atribuído o valor negativo 
    de dano à variável "attVida", e esta será enviada para a função recebeDano, para ser somada com a vida, ou seja, 
    se for dano, o valor será reduzido dos pontos de vida, se for cura, será incrementado.
Além disso, a variável que representa os Pontos de Mana do personagem será passada como parâmetro por referência para a função 
a qual irá subtrair do pontos de mana o custo de mana da magia.
OBS: O programa checará primeiro se o usuário possui mana o suficiente para realizar a conjuração, caso tenha ele realiza normalmente, 
caso não, será retornado 0 e será exibida uma mensagem na tela.
*/

int Personagens::pocaoVida() {
    int cura = 200;

    int gastoMana = 12;

    if (gastoMana > pontosM)
    {
        cout << "\n***Você não tem mana suficiente para conjurar esta magia.***\n";
        return 0;
    }

    pontosV += cura;
    pontosM -= gastoMana;
    
    return 0;
}

int Personagens::halitoFogo() {
    int dano = 400*(1 + forcaM/100.00);

    int gastoMana = 12;

    if (gastoMana > pontosM)
    {
        cout << "\n***Você não tem mana suficiente para conjurar esta magia.***\n";
        return 0;
    }
    
    pontosM -= gastoMana;

    return dano;
}

int Personagens::bio() {
    int dano = 360*(1 + forcaM/100.00);

    int gastoMana = 14;

    if (gastoMana > pontosM)
    {
        cout << "\n***Você não tem mana suficiente para conjurar esta magia.***\n";
        return 0;
    }

    pontosM -= gastoMana;
    
    return dano;
}

int Personagens::cura() {
    int cura = 400;

    int gastoMana = 16;
    
    if (gastoMana > pontosM)
    {
        cout << "\n***Você não tem mana suficiente para conjurar esta magia.***\n";
        return 0;
    }

    pontosV += cura;
    pontosM -= gastoMana;
    
    return 0;
}

int Personagens::flamaGelada() {
    int dano = 320*(1 + forcaM/100.00);

    int gastoMana = 14;
    
    if (gastoMana > pontosM)
    {
        cout << "\n***Você não tem mana suficiente para conjurar esta magia.***\n";
        return 0;
    }

    pontosM -= gastoMana;

    return dano;
}

int Personagens::intoxicacao() {
    int dano = 280*(1 + forcaM/100.00);

    int gastoMana = 12;

    if (gastoMana > pontosM)
    {
        cout << "\n***Você não tem mana suficiente para conjurar esta magia.***\n";
        return 0;
    }

    pontosM -= gastoMana;

    return dano;
}

int Personagens::tempestade() {
    int dano = 200*(1 + forcaM/100.00);

    int gastoMana = 12;

    if (gastoMana > pontosM)
    {
        cout << "\n***Você não tem mana suficiente para conjurar esta magia.***\n";
        return 0;
    }

    pontosM -= gastoMana;

    return dano;
}



/*
Com o usuário chamando uma arma, o programa checará se ela faz parte do deck de armas acessíveis por 
aquele personagem, se ela for acessível, o programa chamará a função correspondente àquela arma e esta 
retornará o "dano" que posteriormente será calculado com a Resistência Física do personagem 
e o valor final será subtraído dos Pontos de Vida do personagem.
*/

int Personagens::garraLetal() {
    int dano = 200*(1 + forcaF/100.00);

    return dano;
}
int Personagens::tridenteSagrado() {
    int dano = 320*(1 + forcaF/100.00);

    return dano;
}
int Personagens::espadaBarroca() {
    int dano = 400*(1 + forcaF/100.00);

    return dano;
}
int Personagens::porrete() {
    int dano = 280*(1 + forcaF/100.00);

    return dano;
}
int Personagens::cajado() {
    int dano = 125*(1 + forcaF/100.00);

    return dano;
}
int Personagens::besta() {
    int dano = 320*(1 + forcaF/100.00);

    return dano;
}
int Personagens::esferaAtaque() {
    int dano = 300*(1 + forcaF/100.00);

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

    int dado = 1 + rand()%1000;
    
    dado = dado/10;
    
    int dano = 0;
    
    if (dado <= 20)
    {
        cout << "\n***Você recebeu a benção de Bul-Kathos.***\n";
        dano = criticoKathos();
    }
    else
    {
        cout << "\n***Você não recebeu a benção de Bul-Kathos. Tente novamente na próxima rodada.***\n";
    }
    
    dano *= (1 + forcaF/100.00);
    
    return dano;
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
        cout << "\n***Você conseguiu o acerto crítico***\n";
        danoKathos = danoKathos*2;
    }
    else
    {
        cout << "\n***Você não conseguiu o acerto crítico***\n";
    }

    return danoKathos;
}





//chama a arma de acordo com o código inserido e retorna par a variável "danoArma" (**** declarada, obrigatoriamente como "0" ****) que posteriormente é passada por parâmetro como parâmentro para "recebeDano"
int Personagens::escolheArma(int cod_arma) {

    int dano;

    if (cod_arma == 1)
    {
        dano = garraLetal();
    }
    else if (cod_arma == 2)
    {
        dano = tridenteSagrado();
    }
    else if (cod_arma == 3)
    {
        dano = espadaBarroca();
    }
    else if (cod_arma == 4)
    {
        dano = porrete();
    }
    else if (cod_arma == 5)
    {
        dano = cajado();
    }
    else if (cod_arma == 6)
    {
        dano = besta();
    }
    else if (cod_arma == 7)
    {
        dano = esferaAtaque();
    }
    else if (cod_arma == 8)
    {
        dano = dadoBulKathos();
    }

    return dano;
}

/*
Chama a função da magia de acordo com o código inserido e retorna para a variável "danoMagia" (**** declarada, obrigatoriamente como "0" ****) 
que posteriormente é passada por parâmetro para "recebeDano"
*/
int Personagens::escolheMagia(int cod_magia) {

    int dano;

    if (cod_magia == 1)
    {
        dano = pocaoVida();
    }
    else if (cod_magia == 2)
    {
        dano = halitoFogo();
    }
    else if (cod_magia == 3)
    {
        dano = bio();
    }
    else if (cod_magia == 4)
    {
        dano = cura();
    }
    else if (cod_magia == 5)
    {
        dano = flamaGelada();
    }
    else if (cod_magia == 6)
    {
        dano = intoxicacao();
    }
    else if (cod_magia == 7)
    {
        dano = tempestade();
    }

    return dano;
}



//função que calcula a esquiva do personagem e retorna para "recebeDano"
int Personagens::calculaEsquiva() {
    unsigned seed = time(0);
    srand(seed);

    int esquiva = 1 + rand()%10000;
    
    esquiva = esquiva/100;
    
    if (esquiva <= agilidade)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}



/*
A variável "danoArma" é declarada como "0" e à ela é atribuida o valor do dano da arma escolhida, 
caso tenha sido usada arma.
A variável "danoMagia" é declarada como "0" e à ela é atribuida o valor do dano da magia escolhida, 
caso tenha sido usada magia.
*/
void Personagens::recebeDano(int danoArma, int danoMagia) {

    int esquiva;
    
    
    if (danoArma != 0)
    {
        esquiva = calculaEsquiva();
        
        if (esquiva == 1)
        {
            cout << "\n***O oponente conseguiu se esquivar do seu ataque***\n";
        }
        else
        {
            attVida(danoArma, danoMagia);
        }
    }
    else
    {
        attVida(danoArma, danoMagia);
    }
    
    
}

void Personagens::attVida(int danoArma, int danoMagia) {
    pontosV -= danoMagia*(1 - resistencia/100.00);
    pontosV -= danoArma*(1 - armadura/100.00);
}
