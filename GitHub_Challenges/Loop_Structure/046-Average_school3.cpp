#include <iostream>

/*Faça um programa que peça uma nota, entre zero e dez. Mostre uma
mensagem caso o valor seja inválido e continue pedindo até que o usuário
informe um valor válido.*/
int main() {
    // Write C++ code here
    double grade{};
    
    std::cout << "Enter a number greater than 0 and less than 10: ";
    std::cin >> grade;
    
    while(grade < 0 || grade >10){
        std::cout << "This number don't valid!\n";
        std::cout << "Enter a number greater than 0 and less than 10: ";
        std::cin >> grade;
    }
    std::cout << "Grade is valid!";

    return 0;
}
