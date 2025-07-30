#include <iostream>
#include <string> 

int main() {

    double hpPokemon;
    double hpMaxPokemon;
    double porcentagemVida;

    std::cout << "Qual Hp atual do Seu pokemon? ";
    std::cin >> hpPokemon;
    std::cout << "Qual HP máximo do seu pokemon? ";
    std::cin >> hpMaxPokemon;
    
    porcentagemVida = (hpPokemon / hpMaxPokemon) * 100.0;
    

    if (porcentagemVida == 100) {
        std::cout << "Status: Perfeito! HP no maximo." << std::endl;
    } 
    else if (porcentagemVida >= 70) {
        std::cout << "Status: Saudavel." << std::endl;
    } 
    else if (porcentagemVida >= 30) {
        std::cout << "Status: Atencao! O HP esta baixo." << std::endl;
    } 
    else if (porcentagemVida > 0) {
        std::cout << "Status: PERIGO CRITICO! Use uma pocao agora!" << std::endl;
    } 
    else { 
        std::cout << "Status: Desmaiado (Fainted)." << std::endl;
    }

    return 0;
}