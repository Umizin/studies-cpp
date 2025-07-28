#include <iostream>
#include <string>

int main()
{
    std::string nomePersonagem = "Paulo Silva";
    int nivelPersonagem = 26;
    char classePersonagem = 'A';
    double vidaAtual = 789.4;
    bool temChaveDaDungeon = true;

    std::cout <<"--- Status do Player ---" << std::endl;
    std::cout <<"Nome: " << nomePersonagem << std::endl;
    std::cout <<"Nivel: " << nivelPersonagem << std::endl;
    std::cout <<"Nome: " << classePersonagem << std::endl;
    std::cout <<"Nome: " << vidaAtual << std::endl;

    std::cout << "Possui chave da Dungeon? ";
    if (temChaveDaDungeon == true){
        std::cout << "Sim" << std::endl;
    }else{
        std::cout << "Não" << std::endl;
    }

}

//std::string - para ser utilizado precisa de importação para funcione e chame a string;