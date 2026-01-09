#include <iostream>

/*Faça um Programa que peça um número inteiro e determine se ele é par ou impar.
Dica: utilize o operador módulo (resto da divisão).*/
int main(){
    /* Symbols: ||, \ */
    int n1{0}; std::string result{0};

    std::cout << "\n";
  
    std::cout << "Welcome to: Even or Odd number!\n";
    std::cout << "Enter the integer value: ";
    std::cin >> n1;

    if(n1%2 == 0){
        result = "Even";
    }
    else{
        result = "Odd";
    }

    std::cout << "Your number is " << result << "\n";

    std::cout << "\n";
    return 0;
}

