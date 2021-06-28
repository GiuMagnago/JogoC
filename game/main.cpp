#include "Personagens.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    Personagens *v1 = new Personagens();
    Personagens *v2 = new Personagens();
    int cod;
    
    cout << "1 - Guerreiro\n";
    cout << "2 - Ladrão\n";
    cout << "3 - Mago\n";
    cout << "4 - Paladino\n";
    cout << "5 - Animal\n";
    cout << "6 - Troll\n";
    cout << "7 - Dragão\n";
    cout << "8 - Zumbi\n";
    cout << "Insira o código do pergonagem do primeiro jogador: ";
    cin >> cod;
    
    if (cod < 1 || cod > 8)
    {
        cout << "\n***(ERRO). Dado inserido inválido.***\n";
        return 0;
    }
    
    v1->escolhePersonagem(cod);
    
    cout << "\n";
    
    cout << "Insira o código do pergonagem do segundo jogador: ";
    cin >> cod;
    
    if (cod < 1 || cod > 8)
    {
        cout << "\n***(ERRO). Dado inserido inválido. Programa encerrado.***\n";
        return 0;
    }
    
    v2->escolhePersonagem(cod);
    
    cout << "\n* * * * * Jogador 1 * * * * *\n";
    cout << "\nPersonagem: " << v1->getNome() << "\n";
    cout << "Pontos de Vida: " << v1->getVida() << "\n";
    cout << "Pontos de Mana: " << v1->getMana() << "\n";
    cout << "Força Física: " << v1->getForcaF() << "\n";
    cout << "Força Mágica: " << v1->getForcaM() << "\n";
    cout << "Armadura: " << v1->getArmor() << "\n";
    cout << "Resistência Mágica: " << v1->getResist() << "\n";
    cout << "Agilidade: " << v1->getAgil() << "\n";
    
    cout << "\n";
    cout << "\n";
    
    cout << "\n* * * * * Jogador 2 * * * * *\n";
    cout << "\nPersonagem: " << v2->getNome() << " * * * * *\n";
    cout << "Pontos de Vida: " << v2->getVida() << "\n";
    cout << "Pontos de Mana: " << v2->getMana() << "\n";
    cout << "Força Física: " << v2->getForcaF() << "\n";
    cout << "Força Mágica: " << v2->getForcaM() << "\n";
    cout << "Armadura: " << v2->getArmor() << "\n";
    cout << "Resistência Mágica: " << v2->getResist() << "\n";
    cout << "Agilidade: " << v2->getAgil() << "\n";
    
    cout << "\n";
    
    int rodada = 1;
    
    while (v1->getVida() > 0 && v2->getVida() > 0)
    {
        cout << "\n========================\n";
        cout << "\tRodada " << rodada << "\t";
        cout << "\n========================\n";
        
        cout << "\n";
        
        int use_choice;
        
        int danoMagia = 0;
        int danoArma = 0;
        
        cout << "[Jogador 1]\n";
        
        cout << "\n";
        
        cout << v1->getNome() << "\n";
        cout << "Vida: " << v1->getVida() << "\n";
        cout << "Mana: " << v1-> getMana() << "\n";
        
        cout << "\n";
        
        cout << "1 - Magia\n";
        cout << "2 - Arma\n";
        
        cout << "Insira o código do que deseja usar: ";
        cin >> use_choice;
        
        cout << "\n";
        
        if (use_choice == 1)
        {
            int cod_magia;
            
            for (int i = 0; i < 7; i++)
            {
                if (v1->getMagias(i) != 0)
                {
                    cout << v1->getMagias(i) << " - " << v1->getMagiasNomes(i) << "\n";
                }
            }
            
            cout << "\n";
            
            cout << "Insira o código da Magia que deseja usar: ";
            cin >> cod_magia;
            
            
            for (int i = 0; i < 7; i++)
            {
                if (v1->getMagias(i) == cod_magia)
                {
                    danoMagia = v1->escolheMagia(cod_magia);
                    break;
                }
                else if (i == 6)
                {
                    cout << "\n***Magia não acessível para este personagem***\n";
                }
            }
            
            cout << "\n";
            
        }
        else if (use_choice == 2)
        {
            int cod_arma;
            
            for (int i = 0; i < 8; i++)
            {
                if (v1->getArmas(i) != 0)
                {
                    cout << v1->getArmas(i) << " - " << v1->getArmasNomes(i) << "\n";
                }
            }
            
            cout << "\n";
            
            cout << "Insira o código da arma que deseja usar: ";
            cin >> cod_arma;
            
            
            for (int i = 0; i < 8; i++)
            {
                if (cod_arma == 8)
                {
                    danoArma = v1->escolheArma(cod_arma);
                    break;
                }
                else if (v1->getArmas(i) == cod_arma)
                {
                    danoArma = v1->escolheArma(i + 1);
                    break;
                }
                else if (i == 7)
                {
                    cout << "\n***Arma não acessível para este personagem***\n";
                }
            }
            
        }
        else
        {
            cout << "\n***(ERRO). Dado inserido inválido. Programa encerrado.***\n";
            return 0;
        }
        
        v2->recebeDano(danoArma, danoMagia);
        
        
        cout << "\n";
        
        
        
        
        cout << "[Jogador 2]\t\n";
        
        cout << "\n";
        
        cout << v2->getNome() << "\n";
        cout << "Vida: " << v2->getVida() << "\n";
        cout << "Mana: " << v2-> getMana() << "\n";
        
        cout << "\n";
        
        cout << "1 - Magia\n";
        cout << "2 - Arma\n";
        
        cout << "Insira o código do que deseja usar: ";
        cin >> use_choice;
        
        cout << "\n";
        
        
        
        danoArma = 0;
        danoMagia = 0;
        
        
        
        
        if (use_choice == 1)
        {
            int cod_magia;
            
            for (int i = 0; i < 7; i++)
            {
                if (v2->getMagias(i) != 0)
                {
                    cout << v2->getMagias(i) << " - " << v2->getMagiasNomes(i) << "\n";
                }
            }
            
            cout << "\n";
            
            cout << "Insira o código da Magia que deseja usar: ";
            cin >> cod_magia;
            
            
            for (int i = 0; i < 7; i++)
            {
                if (v2->getMagias(i) == cod_magia)
                {
                    danoMagia = v2->escolheMagia(i + 1);
                    break;
                }
                else if (i == 6)
                {
                    cout << "\n***Magia não acessível para este personagem***\n";
                }
            }
            
            cout << "\n";
            
        }
        else if (use_choice == 2)
        {
            int cod_arma;
            
            for (int i = 0; i < 8; i++)
            {
                if (v2->getArmas(i) != 0)
                {
                    cout << v2->getArmas(i) << " - " << v2->getArmasNomes(i) << "\n";
                }
            }
            
            cout << "\n";
            
            cout << "Insira o código da arma que deseja usar: ";
            cin >> cod_arma;
            
            
            for (int i = 0; i < 8; i++)
            {
                if (cod_arma == 8)
                {
                    danoArma = v2->escolheArma(cod_arma);
                    break;
                }
                else if (v2->getArmas(i) == cod_arma)
                {
                    danoArma = v2->escolheArma(i + 1);
                    break;
                }
                else if (i == 7)
                {
                    cout << "\n***Arma não acessível para este personagem***\n";
                }
            }
            
        }
        else
        {
            cout << "\n***(ERRO). Dado inserido inválido. Programa encerrado.***\n";
            return 0;
        }
        
        v1->recebeDano(danoArma, danoMagia);
        
        rodada++;
    }
    
    
    delete v1;
    delete v2;
    
    
    return 0;
}
