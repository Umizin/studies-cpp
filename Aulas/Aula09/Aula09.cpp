#include <iostream>
#include <string>
#include <vector>

// Estudo de struct - Funciona como uma classe;

 struct Pokemon{
     std::string nome;
     std::string tipo;
     int nivel;
     double hp;
 };
 int main(){
     Pokemon meuPikachu;
     meuPikachu.nome = "Pikachu";
     meuPikachu.tipo = "Eletrico";
     meuPikachu.nivel = 25;
     meuPikachu.hp = 75.5;
     std::cout << "Pokemon: " << meuPikachu.nome << std::endl;
     std::cout << "Tipo: " << meuPikachu.tipo << std::endl;
     std::cout << "Nivel: " << meuPikachu.nivel << std::endl;

     return 0;
}

// estudo de dicionário utilizando o map

#include <iostream>
#include <map>
#include <string>

int main(){
    std::map<std::string, int> inventario;

    inventario["Pocao"] = 10;
    inventario["Pokebola"] = 25;
    inventario["Corda"] = 1;

    std::cout << "Voce tem " << inventario["Pokebola"] << " Pokebolas." << std::endl;

    inventario["Pocao"] -= 1;
    std::cout << "Pocoes restantes: " << inventario["Pocao"] << std::endl;

    if (inventario.count("Super Pocao") > 0){
        std::cout << "Voce tem Super Pocoes!" << std::endl;
    } else {
        std::cout << "Voce nao tem Super Pocoes." << std::endl;
    }
    return 0;
}

// Unindo os dois aprendizados

#include <iostream>
#include <map>
#include <string>

 struct Pokemon{
     std::string nome;
     std::string tipo;
     int nivel;
};

int main(){
    std::map<std::string, Pokemon> pokedex;

    pokedex["Pikachu"] = { "Pikachu", "Eletrico", 25 };
    pokedex["Bulbasaur"] = { "Bulbasaur", "Grama/Veneno", 5 };
    pokedex["Charmander"] = { "Charmander", "Fogo", 5 };

    std::string nomeBusca = "Bulbasaur";
    if(pokedex.count(nomeBusca) > 0){
        Pokemon encontrado = pokedex[nomeBusca];

        std::cout << "Dados de " << encontrado.nome << ":" << std::endl;
        std::cout << "- Tipo: " << encontrado.tipo << std::endl;
        std::cout << "- Nivel: " << encontrado.nivel << std::endl;
    } else {
        std::cout << nomeBusca << " nao encontrado na Pokedex." << std::endl;
    }

    return 0;
}