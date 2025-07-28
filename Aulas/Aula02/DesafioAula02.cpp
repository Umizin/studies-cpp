#include <iostream>
#include <string>

std::string pokemon = "Gastly";
int nivelDoPokemon = 10;
float vidaPokemon = 85;
bool eShiny = true;

int main()
{
    std::cout << "===== Pokedex Infos =====" << std::endl;
    std::cout << "Pokemon: " << pokemon << std::endl;
    std::cout << "Nível: " << nivelDoPokemon << std::endl;
    std::cout << "Vida: " << vidaPokemon << "%" << std::endl;
    std::cout << "Shiny:" ;
    if (eShiny == true){
        std::cout <<" Sim" << std::endl;
    } else {
        std::cout <<" Não" << std::endl;
    }
}
