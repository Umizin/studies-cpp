#include <iostream>

// Estudo de Arrays que se mantem muito parecido com outras linguagens

int main(){
    int notas[5];

    notas[0] = 10;
    notas[1] = 8;
    notas[2] = 5;
    notas[3] = 9;
    notas[4] = 7;

    std::cout << "A segunda nota (indice 1) e: " << notas[1] << std::endl;

    return 0;
}

// std::vector "array inteligente" = gerencia a propria memoria e tamanho;

#include <iostream>
#include <vector>
#include <string>

int main(){

    std::vector<std::string> equipePokemon;

    equipePokemon.push_back("Pikachu");
    equipePokemon.push_back("Charizard");
    equipePokemon.push_back("Snorlax");

    std::cout << "O primeiro Pokemon da equipe e: " << equipePokemon[0] << std::endl;
    std::cout << "Tamanho atual da equipe: " << equipePokemon.size() << std::endl;

    equipePokemon.pop_back();

    std::cout << "\nDepois de remover o ultimo, o tamanho e: " << equipePokemon.size() << std::endl;
    std::cout << "O Ultimo Pokemon agora e: " << equipePokemon.back();

    return 0;
}

// Range Based Loop - Iteração no array ou vetor;

#include <iostream>
#include <vector>
#include <string>

int main() {

    std::vector<std::string> itensNaMochila = {"Pocao", "Pokebola", "Mapa", "Corda"};
    std::cout << "Itens na sua Mochila:" << std::endl;
    
    for (const std::string& item : itensNaMochila){
        std::cout << "- " << item << std::endl;
    }
    return 0;
}
