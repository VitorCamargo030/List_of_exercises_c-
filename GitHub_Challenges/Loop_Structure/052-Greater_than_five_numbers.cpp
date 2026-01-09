#include <iostream>

/*Faça um programa que leia 5 números e informe o maior número.*/
int main(){
    /* Symbols: ||, \ */ 
    int value{}, max_value{};

    std::cout << "\n";
  
    for(int i=0; i < 5 ; ++i){
        std::cout << "Enter the value: ";
        std::cin >> value;

        if(value > max_value)
            max_value = value; 
        if(i == 4) std::cout << "The max value: " << max_value << "\n";
    }

    std::cout << "\n";
    return 0;
}

