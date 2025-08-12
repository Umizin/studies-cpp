#include <iostream>

int main(){
    int minhaIdade = 26;
    int* ptrIdade = &minhaIdade;

    std::cout << "Valor da variavel 'minhaIdade': " << minhaIdade << std::endl;
    std::cout << "Endereço de memoria de 'minhaIdade' " << &minhaIdade << std::endl;
    std::cout << "Valor da variavel ponteiro 'prtIdade' (guarda o endereco) " << ptrIdade << std::endl;

    std::cout << "Valor acessado atraves do ponteiro (*ptrIdade): " << *ptrIdade << std::endl;

    *ptrIdade = 31;
    std::cout << "Novo valor de 'minhaIdade' apos modificar pelo ponteiro: " << minhaIdade << std::endl;

    return 0;
}

#include <iostream>

int main(){

int* ptrHeap = new int;
*ptrHeap = 50;

std::cout << "Valor na Heap: " << *ptrHeap << std::endl;

delete ptrHeap;

};

#include <iostream>
int main(){
    int notas[3] = {10,8,5};
    int* ptrNotas = notas;

    std::cout << "Primeira nota: " << *ptrNotas << std::endl;

    ptrNotas++; 
    std::cout << "Segunda nota: " << *ptrNotas << std::endl; 

    ptrNotas++;
    std::cout << "Terceira nota: " << *ptrNotas << std::endl; 
        
    return 0;
};

