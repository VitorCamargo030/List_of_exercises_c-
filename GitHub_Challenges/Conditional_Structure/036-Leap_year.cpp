#include <iostream>

/*Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.*/
int main() {
    // Write C++ code here
    int year{0};
    
    std::cout << "Welcome to: Leap Year!\n";
    std::cout << "Enter the year: ";
    std::cin >> year;
    
    if(year > 0){
        if(year%4 == 0){
            std::cout << "This year is leap!";
            return 0;
        }
        else{
            std::cout << "This year don't leap!";
            return 0;
        }
    }
    
    
    return 0;
}
