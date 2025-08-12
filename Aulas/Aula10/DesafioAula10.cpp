#include <iostream>

int main() {
    int qntdNotas = 0;
    double* notas = nullptr; 

    std::cout << "Quantas notas voce quer armazenar? ";
    std::cin >> qntdNotas;

    if (qntdNotas <= 0) {
        std::cout << "Numero invalido." << std::endl;
        return 1;
    }
    notas = new double[qntdNotas];

    std::cout << "\n--- Digite as Notas ---" << std::endl;
    for (int i = 0; i < qntdNotas; i++) {
        std::cout << "Digite a nota " << i + 1 << ": ";
        std::cin >> notas[i];
    }

    std::cout << "\n--- Notas Armazenadas ---" << std::endl;
    for (int i = 0; i < qntdNotas; i++) {
        std::cout << "Nota " << i + 1 << ": " << notas[i] << std::endl;
    }

    delete[] notas;
    notas = nullptr; 

    std::cout << "\nMemoria foi liberada." << std::endl;

    return 0;
}
