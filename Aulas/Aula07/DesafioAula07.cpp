#include <iostream> 


void exibirStatusBatalha(double meuHp, double inimigoHp, int turno) {
    std::cout << "\n--- Turno " << turno << " ---" << std::endl;
    std::cout << "Seu HP: " << meuHp << " | HP Inimigo: " << inimigoHp << std::endl;
}

void simularAcoesDoTurno(double& meuHp, double& inimigoHp) {
    double danoCausado = 20.0;
    double danoSofrido = 20.0;

    inimigoHp -= danoCausado;
    meuHp -= danoSofrido;
    std::cout << "Voce causou " << danoCausado << " de dano!" << std::endl;
    std::cout << "O inimigo causou " << danoSofrido << " de dano." << std::endl;
}

int main() {
    double meuPokemonHP = 100.0;
    double inimigoPokemonHP = 80.0;
    int totalDeTurnos = 5; 

    std::cout << "Comecando a Batalha!" << std::endl;
    exibirStatusBatalha(meuPokemonHP, inimigoPokemonHP, 0);

    for (int turnoAtual = 1; turnoAtual <= totalDeTurnos; turnoAtual++) {
        
        simularAcoesDoTurno(meuPokemonHP, inimigoPokemonHP);

        exibirStatusBatalha(meuPokemonHP, inimigoPokemonHP, turnoAtual);
    }

    std::cout << "\nFIM DA SIMULACAO!" << std::endl;
    return 0;
}