#include <iostream>

/*Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.*/
int main(){
    //Symbols: ||, \n
    
    int num{0};
    std::string result{0};

    std::cout << "\n";
  
    std::cout << "Welcome to: Positive or negative!\n";

    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num > 0){
        result = "Positive";
    }
    else{
        result = "Negative";
    }

    std::cout << "The number " << num << " is " << result;

    std::cout << "\n";
    return 0;
}

