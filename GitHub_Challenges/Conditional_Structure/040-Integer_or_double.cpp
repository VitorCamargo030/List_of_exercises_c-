#include <iostream>

/*Faça um Programa que peça um número e informe se o número é inteiro ou decimal.
Dica: utilize uma função de arredondamento. */
int main(){
    /* Symbols: ||, \ */
    double num{0}; std::string result{};

    std::cout << "\n";
  
    std::cout << "Welcome to: Your number is integer or decimal!\n";
    std::cout << "Enter the number: ";
    std::cin >> num;

    if(num == int(num)){
        result = "integer";
    }
    else if(num == double(num)){
        result = "double";
    }
    else{
        std::cout << "Your number is invalid!";
        return 0;
    }

    std::cout << "Your number is " << result; 

    std::cout << "\n";
    return 0;
}

