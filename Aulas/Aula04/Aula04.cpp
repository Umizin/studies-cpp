#include <iostream>
#include <string>

int nivelPokemon;
double porcentagemHp;
int rareCandy;
int bonusAtaque;

int main(){
    std::cout << "Qual nível do seu pokemon: " << std::endl;
    std::cin >> nivelPokemon;
    std::cout << "Qual hp? " << std::endl;
    std::cin >> porcentagemHp;
    std::cout<< "Quantos rare candy utilizará ?";
    std::cin >> rareCandy;

    nivelPokemon += rareCandy;
    porcentagemHp = porcentagemHp + (rareCandy * 2.5);
    bonusAtaque = rareCandy / 4;

    std::cout << "======Pokedex INFOS======="<< std::endl;
    std::cout << "O seu novo nível é :" << nivelPokemon<< std::endl;
    std::cout << "O seu novo HP é :"<< porcentagemHp<< std::endl;
    std::cout << "O seu Bônus de Ataque é:"<< bonusAtaque<< std::endl;


}