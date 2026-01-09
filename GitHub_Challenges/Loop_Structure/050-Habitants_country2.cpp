#include <iostream>
#include <cmath>

/*Altere o programa anterior permitindo ao usuário informar as populações
e as taxas de crescimento iniciais. Valide a entrada e permita repetir
a operação.*/
int main() {
    // Write C++ code here
    double growth_tax_A{}, growth_tax_B{};
    int country_A{}, country_B{}, years{};
    
    std::cout << "Welcome to: Country A and Country B with input of user!\n";
    
    std::cout << "Enter the quantity of habitants of the country A: ";
    std::cin >> country_A;
    
    std::cout << "Enter the quantity of habitants of the country B: ";
    std::cin >> country_B;
    
    std::cout << "Enter the percentage of population growth of country A: ";
    std::cin >> growth_tax_A;
    
    std::cout << "Enter the percentage of population growth of country B: ";
    std::cin >> growth_tax_B;
    
    growth_tax_A /= 100.0;
    growth_tax_B /= 100.0;
    
    while(country_A < country_B){
        country_A += country_A * growth_tax_A;
        country_B += country_B * growth_tax_B;
        ++years;
    }
    std::cout << growth_tax_A << "\n";
    std::cout << growth_tax_B << "\n";
    std::cout << "\nIt will take " << years << " years!";

    return 0;
}
