#include <iostream>

/*Faça um programa que peça dois números, base e expoente,
calcule e mostre o primeiro número elevado ao segundo número.
Não utilize a função de potência da linguagem.*/
int main(){
    /* Symbols: ||, \ */
    int base{}, exponent{}, potentiation{1};

    std::cout << "\n";
  
    std::cout << "Welcome to: Potentiation!\n";
    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    if(base > 0 && exponent > 0){
        for(int i=0; i < exponent; ++i){
            potentiation *= base;
        }
        std::cout << "Potentiation: " << potentiation << "\n";
    }
    else{
        std::cout << "This number is invalid!";
        return 0;
    }

    std::cout << "\n";
    return 0;
}

