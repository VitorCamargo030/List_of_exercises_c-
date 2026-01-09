#include <iostream>
#include <cmath>

/*Faça um programa que receba dois números inteiros e gere os números inteiros
que estão no intervalo compreendido por eles.*/
int main(){
    /* Symbols: ||, \ */
    int number1{}, number2{};

    std::cout << "\n";
  
    std::cout << "Welcome to: Numbers between two numbers!" << "\n";
    std::cout << "Enter two numbers: ";
    std::cin >> number1 >> number2;

    //First way
    /*for(int i=std::max(number1, number2), k=std::min(number1, number2); i < k || i > k; ++k){
        std::cout << k << " ";
    }*/

    //Second way
    if(number1 > number2)
        for(int i=--number1; i > number2; --i) std::cout << i << " ";
    else
        for(int i=++number1; i < number2; ++i) std::cout << i << " ";
 
    std::cout << "\n";
    return 0;
}

