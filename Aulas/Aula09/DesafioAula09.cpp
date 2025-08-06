#include <iostream>
#include <string>
#include <map>
#include <limits>


struct Pokemon {
    std::string nome;
    std::string tipo;
    int nivel;
};

void print(const std::string& mensagem);
void chamarMenu(std::map<std::string, Pokemon>& pokedex);
void adicionarPokemon(std::map<std::string, Pokemon>& pokedex); 
void consultarPokemon(const std::map<std::string, Pokemon>& pokedex); 
void listarTodos(const std::map<std::string, Pokemon>& pokedex);

void print(const std::string& mensagem){
    std::cout << mensagem << std::endl;
}

int main(){
    std::map<std::string, Pokemon> pokedex;
    chamarMenu(pokedex);
    return 0;
}

void chamarMenu(std::map<std::string, Pokemon>& pokedex){
    int escolha = 0;
    while (true)
    {
        print("========= Pokedéx ==========");
        print("==== O que deseja Fazer ====");
        print("[1] - Adicionar/Atualiar Pokemon");
        print("[2] - Consultar Pokémon");
        print("[3] - Listar todos os Pokémon");
        print("[4] - Sair");
        std::cout << "> ";
        std::cin >> escolha;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (escolha)
        {
        case 1:
            adicionarPokemon(pokedex);
            break;
        case 2:
            consultarPokemon(pokedex);
        case 3:
            listarTodos(pokedex);
        case 4:
            break;
        default:
            print("Escolha Inválida");
            break;
        }
    }
}

void adicionarPokemon(std::map<std::string, Pokemon>& pokedex){
    Pokemon novoPokemon;

    print("Digite o Nome do Pokemon: ");
    std::getline(std::cin, novoPokemon.nome);
    
    print("Digite o Tipo do Pokemon: ");
    std::getline(std::cin, novoPokemon.tipo);

    print("Digite o Nivel do Pokemon: ");
    std::cin >> novoPokemon.nivel;

    pokedex[novoPokemon.nome] = novoPokemon;

    print(novoPokemon.nome + " foi adicionado/atualizado com sucesso!");
    
}

void consultarPokemon(const std::map<std::string, Pokemon>& pokedex) {
    std::string nomeBusca;
    print("Qual o nome do Pokemon que deseja consultar?");
    std::getline(std::cin, nomeBusca);

    if (pokedex.count(nomeBusca) > 0) {

        const Pokemon& encontrado = pokedex.at(nomeBusca); 
        print("\n--- Ficha do Pokemon ---");
        print("Nome: " + encontrado.nome);
        print("Tipo: " + encontrado.tipo);
        print("Nivel: " + std::to_string(encontrado.nivel));
    } else {
        print("Pokemon '" + nomeBusca + "' nao encontrado na Pokedex.");
    }
}

void listarTodos(const std::map<std::string, Pokemon>& pokedex) {
    print("\n--- Todos os Pokemon na Pokedex ---");
    if (pokedex.empty()) {
        print("A Pokedex esta vazia.");
        return;
    }
    for (const auto& par : pokedex) {
        print("- " + par.first);
    }
}