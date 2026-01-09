#include <iostream>

/*Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida.*/
int main() {
    // Write C++ code here
    int day{0}, month{0}, year{0};
    
    std::cout << "Welcome to: Date Format!\n";
    
    std::cout << "Enter the day: ";
    std::cin >> day;
    
    std::cout << "Enter the month: ";
    std::cin >> month;
    
    std::cout << "Enter the year: ";
    std::cin >> year;
    
    if(day >= 1 && day <= 31 && month >= 1 && month <= 12 && year > 0){
        if(day >= 1 || day <= 9){
            std::cout << "0" << day << "/" << month << "/" << year;
            return 0;
        }
        else{
            std::cout << day << "/" << month << "/" << year;
            return 0;
        }
    }
    else{
        std::cout << "Your date is invalid!";
        return 0;
    }
    
    
    return 0;
}
