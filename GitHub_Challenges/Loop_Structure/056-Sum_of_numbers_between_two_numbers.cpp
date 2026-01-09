#include <iostream>

/*Altere o programa anterior para mostrar no final a soma dos números.*/
int main(){
    /* Symbols: ||, \ */
    int number1{}, number2{}, sum{};

    std::cout << "\n";
  
    std::cout << "Welcome to: Numbers between two numbers!" << "\n";
    std::cout << "Enter two numbers: ";
    std::cin >> number1 >> number2;

    //First way
    for(int i=std::max(number1, number2), k=std::min(number1, number2); i < k || i > k; ++k){
        std::cout << k << " ";
        sum += k;
        if(i == k) std::cout << "\nSum of the numbers: " << sum << "\n";
    }

    //Second way
    /*if(number1 > number2){
        for(int i=--number1; i > number2; --i){
            std::cout << i << " ";
            sum += i;
        }
        std::cout << "\nSum of the numbers: " << sum << "\n";
    }
    else{
        for(int i=++number1; i < number2; ++i){
            std::cout << i << " ";
            sum += i;
        }
        std::cout << "\nSum of the numbers: " << sum << "\n";
    }*/

    std::cout << "\n";
    return 0;
}

