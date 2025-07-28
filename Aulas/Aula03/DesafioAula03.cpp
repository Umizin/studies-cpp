#include <iostream>
#include <string>

int main()
{
    std::string nomePokemon;
    int nivelPokemon;
    float porcentagemVida;
    bool eShiny; 

    std::cout << "Qual nome do Seu Pokemon? " << std::endl;
    std::cin >> nomePokemon;
    std::cout << "Qual nível do seu Pokemon? " << std::endl;
    std::cin >> nivelPokemon;
    std::cout << "Qual porcentagem de vida do seu pokemon? "<< std::endl;
    std::cin >> porcentagemVida;
    std::cout << "Ele e shiny? (1 para Sim, 0 para Nao)" << std::endl;
    std::cin >> eShiny;
  

    std::cout << "====== Pokedex Infos ======" << std::endl;
    std::cout << "Pokemon: " << nomePokemon << std::endl;
    std::cout << "Nível: " << nivelPokemon << std::endl;
    std::cout << "Porcentagem de vida: " << porcentagemVida << std::endl;
    std::cout << "Shiny: " ;
    if (eShiny == true){
        std::cout << "Sim" << std::endl;
    }else{
        std::cout << "Não" << std::endl;
    }
    std::cout << "==============================" << std::endl;
}