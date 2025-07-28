#include <iostream>
#include <string>

int main(){
    std::string nomeUsuario;
    int idadeUsuario;

    std::cout << "Olá! Por favor, digite seu primeiro nome" << std::endl;
    std::getline(std::cin, nomeUsuario);
    std::cout <<"Agora, digite sua idade " << std::endl;
    std::cin >> idadeUsuario;
    std::cout << "\nEntendido! Entao seu nome e " << nomeUsuario;
    std::cout << " e voce tem " << idadeUsuario << " anos." << std::endl;

    return 0;
}



// std:cin - Character Input, ou seja um comando que faz com que a máquina "entenda" o que escrevemos;
// std:: cin - Só le ate o primeiro caracter em branco, caso necessite de mais, utiliza std::getline(std::cin, variavel);

