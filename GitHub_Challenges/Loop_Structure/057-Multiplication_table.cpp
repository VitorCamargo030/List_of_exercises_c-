#include <iostream>

/*Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer
número inteiro entre 1 a 10. O usuário deve informar de qual numero ele
deseja ver a tabuada. A saída deve ser conforme o exemplo abaixo: Tabuada
de 5: 5 X 1 = 5 5 X 2 = 10 ... 5 X 10 = 50*/
int main() {
    // Write C++ code here
    int number{};
    std::cout << "Welcome to: Multiplication table!\n";
    std::cout << "Enter the integer number between 1 to 10: ";
    std::cin >> number;
    
    if(number >= 1 && number <= 10){
        for(int i=1; i <= 10; ++i)
            std::cout << number << " x " << i << " = " << number * i << "\n";
    }
    else
        std::cout << "This number is invalid!";

    return 0;
}
