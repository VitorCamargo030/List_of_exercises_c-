#include <iostream>
#include <iomanip>

/*Um funcionário de uma empresa recebe aumento salarial anualmente.

Sabe-se que: Esse funcionário foi contratado em 1995, com salário inicial de R$ 1.000,00; Em
1996 recebeu aumento de 1,5% sobre seu salário inicial; A partir de 1997 (inclusive), os
aumentos salariais sempre correspondem ao dobro do percentual do ano anterior.

Faça um programa que determine o salário atual desse funcionário. Após concluir isto, altere 
o programa permitindo que o usuário digite o salário inicial do funcionário.
*/
double salary_work(double salary, int actual_year){
    double percent{1.5 / 100.0};
    int year{1995};
    
    while(year < actual_year){
      
      salary *= 1 + percent;
      percent *= 2;
      
      ++year;
    }
    
    std::cout << "Actual salary: " << std::fixed << std::setprecision(2) << salary;

    return 0.0;
}


int main(){
    std::cout << "\n";
    double salary{};
    int year{};
    
    std::cout << "Your actual salary: ";
    std::cin >> salary;
    std::cout << "Actual year: ";
    std::cin >> year;
    
    salary_work(salary, year);
    
    std::cout << "\n";
    return 0;
}
