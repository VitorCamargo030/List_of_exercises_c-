#include <iostream>
#include <vector>

/*Faça um Programa que leia um número e exiba o dia correspondente da semana.
(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.*/
int main(){
    /* Symbols: ||, \ */
    std::vector<std::string> days_week = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday","Sunday"};
    int day{0};

    std::cout << "\n";
  
    std::cout << "Welcome to: Day of week!\n";

    std::cout << "Enter a number between 1 and 7: ";
    std::cin >> day;

    if(day == 1){
        std::cout << "This day is: " << days_week[0];
        return 0;
    }
    else if(day == 2){
        std::cout << "This day is: " << days_week[1];
    }
    else if(day == 3){
        std::cout << "This day is: " << days_week[2];
    }
    else if(day == 4){
        std::cout << "This day is: " << days_week[3];
    }
    else if(day == 5){
        std::cout << "This day is: " << days_week[4];
    }
    else if(day == 6){
        std::cout << "This day is: " << days_week[5];
    }
    else if(day == 7){
        std::cout << "This day is: " << days_week[6];
    }
    else{
        std::cout << "This day of the week don't exist!\n";
    }

    std::cout << "\n";
    return 0;
}

