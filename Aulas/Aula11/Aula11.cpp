#include <iostream>
#include <memory>

int main(){
    struct Pokemon{ std::string nome; };
    Pokemon* ptrPokemon = new Pokemon();

    (*ptrPokemon).nome = "Pikachu";
    ptrPokemon->nome = "Pikachu";
}

int main2(){
    int* ptr = new int(10);
    delete ptr;
    ptr = nullptr;
}


    struct Pokemon{ std::string nome = "Charizard"; };

    void minhaFunc(){
     std::unique_ptr<Pokemon> ptrInteligente = std::make_unique<Pokemon>();
     std::cout << "Pokemon: " << ptrInteligente->nome << std::endl;

    }