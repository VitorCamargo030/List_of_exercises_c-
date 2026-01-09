#include <iostream>
#include <iomanip>

/*
As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contrataram para desenvolver o programa que calculará os reajustes.

Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:

salários até R$ 280,00 (incluindo)    : aumento de 20%
salários entre R$ 280,00 e R$ 700,00  : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante      : aumento de 5% Após o aumento ser realizado,
informe na tela:
    o salário antes do reajuste;
    o percentual de aumento aplicado;
    o valor do aumento;
    o novo salário, após o aumento.
*/
int main(){
    /* Symbols: ||, \ */
    double salary{0.0}, increased_salary{0.0}, new_salary{0.0}, grow_percent{0.0};

    std::cout << "\n";
  
    std::cout << "Welcome to: Incresead salary\n";

    std::cout << "Enter your salary: ";
    std::cin >> salary;

    if(salary < 0){
        std::cout << "Your salary is negative! Restart the program!";
        return 0;
    }
    else if(salary <= 280){
        grow_percent = 0.20;
        increased_salary = (salary * grow_percent);
        new_salary = salary + increased_salary;
    }
    else if(salary > 280 && salary <= 700){
        grow_percent = 0.15;
        increased_salary = (salary * grow_percent);
        new_salary = salary + increased_salary;
    }
    else if(salary > 700 && salary <= 1500){
        grow_percent = 0.10;
        increased_salary = (salary * grow_percent);
        new_salary = salary + increased_salary;
    }
    else if(salary > 1500){
        grow_percent = 0.05;
        increased_salary = (salary * grow_percent);
        new_salary = salary + increased_salary;
    }

    std::cout << "Your starting salary: " << salary << "\n";
    std::cout << "Your increased percent is: " << grow_percent << "\n";
    std::cout << "Your increased value is: " << std::fixed << std::setprecision(2) << increased_salary / 0.100 << "\n";
    std::cout << "Your new salary is: " << new_salary << "\n";



    std::cout << "\n";
    return 0;
}

