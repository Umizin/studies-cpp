#include <iostream>

int main(){
    double meuHp = 100;
    double hpInimigo = 80;
    int turnos;
    double danoMeu = 12.5;
    double danoInimigo = 10;

    std::cout << "Quantos turnos de batalha voce quer simular?" << std::endl;
    std::cin >> turnos;

    for (int contador = 1; contador <= turnos; contador++){
        std::cout<< "Turnos: "<< contador << std::endl; 
        std::cout << "Seu ataque causou :" << danoMeu << std::endl;
        std::cout << "Seu Inimigo causou :" << danoInimigo << std::endl;
        hpInimigo = hpInimigo - danoMeu;
        meuHp = meuHp - danoInimigo;

        std::cout << "Seu HP: " << meuHp << " || " << "Hp inimigo: " << hpInimigo << std::endl;
    }
    std::cout << "FIM DA SIMULAÇÃO" << std::endl;
    return 0;
}