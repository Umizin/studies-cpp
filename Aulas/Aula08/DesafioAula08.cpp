#include <iostream>
#include <vector>
#include <string>
#include <limits>

void print(const std::string& mensagem);
void mostrarNaTela(std::vector<std::string>& equipePokemon);
void adicionaPokemon(std::vector<std::string>& equipePokemon);
void removePokemon(std::vector<std::string>& equipePokemon);

int main(){
    std::vector<std::string> equipePokemon;

    mostrarNaTela(equipePokemon);

    return 0;
}


void mostrarNaTela(std::vector<std::string>& equipePokemon){
    int escolha = 0;
    
    while (true)
    {
        print("========== Gerenciador de Pokemon ========");
        print("==========  O que deseja fazer? ========");
        print("[1] - Adicionar Pokemon");
        print("[2] - Remover Último Pokemon");
        print("[3] - Ver Equipe");
        print("[4] - Sair");

        std::cout << "> ";
        std::cin >> escolha;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (escolha){
            case 1:
                adicionaPokemon(equipePokemon);
            break;
            case 2:
                removePokemon(equipePokemon);
            break;
            case 3:
                print("Sua Equipe de Pokemons São: ");
                for(const std::string& pokemon : equipePokemon){
                    print("- " + pokemon);
                }
            break;
            default:
                print("Opcao invalida! Tente novamente.");
            break;
        }
    }
}

void print(const std::string& mensagem){
    std::cout << mensagem << std::endl;
}

void adicionaPokemon(std::vector<std::string>& equipePokemon){
    std::string pokemon;
    print("Digite o nome do Pokemon que voce quer adicionar: ");
    std::getline(std::cin, pokemon);
    equipePokemon.push_back(pokemon);
    return;
}

void removePokemon(std::vector<std::string>& equipePokemon){
    if(!equipePokemon.empty()){
        std::string pokemonRemovido = equipePokemon.back();
        equipePokemon.pop_back();
        print(pokemonRemovido + " foi removido da equipe.");
    }
    else{
        print("Equipe Vazia");
    }
}

