// Anatomia da Função: funcao(tipo_parametro1 nome_parametro1, ...);
//1 - tipo_de_retorno : Tipo do dado que a função retorna após terminar (ex: int);
// 2 nome_da_funcao: auto explicativo;
// 3 - parametros: as informações que você passa para o trabalho da função (opcionais).

#include <iostream> 

void exibirBoasVindas();
int somarDoisNumeros(int a, int b);

int main(){
    exibirBoasVindas();

    int resultado = somarDoisNumeros(5,3);
    std::cout << "O resultado da some é: " << resultado << std::endl;
    
    return 0;
}


void exibirBoasVindas(){
    std::cout << "=========================" << std::endl;
    std::cout << "BEM-VINDO AO PROGRAMA!" << std::endl;
    std::cout << "=========================" << std::endl;
}

int somarDoisNumeros(int a, int b){
    int soma = a + b;
    return soma;
}

// Passagem por valor: é quando você passa uma variável como parâmetro para uma função, assim o c++ faz uma cópia dela e a original fica intacta;
// Passagem por referência: ela modifica a variável em si e não sua cópia.

// Esta função recebe uma CÓPIA do número. A original não será alterada.
void adicionarDez_PorValor(int numero) {
    numero += 10;
    std::cout << "Dentro da funcao (valor): " << numero << std::endl;
}

// Esta função recebe a REFERÊNCIA da original. A original SERÁ alterada.
void adicionarDez_PorReferencia(int& numero) {
    numero += 10;
    std::cout << "Dentro da funcao (referencia): " << numero << std::endl;
}

int main() {
    int meuNumero = 20;

    std::cout << "--- Testando Passagem por Valor ---" << std::endl;
    std::cout << "Meu numero ANTES: " << meuNumero << std::endl;
    adicionarDez_PorValor(meuNumero);
    std::cout << "Meu numero DEPOIS: " << meuNumero << std::endl; // Continuará 20!

    std::cout << "\n--- Testando Passagem por Referencia ---" << std::endl;
    std::cout << "Meu numero ANTES: " << meuNumero << std::endl;
    adicionarDez_PorReferencia(meuNumero);
    std::cout << "Meu numero DEPOIS: " << meuNumero << std::endl; // Virou 30!

    return 0;
}