#include <iostream>

/*Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa
anual de crescimento de 3% e que a população de B seja 200000 habitantes com uma
taxa de crescimento de 1.5%.

Faça um programa que calcule e escreva o número de anos necessários para que a população
do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento
.*/
int main() {
    // Write C++ code here
    double growth_tax_A{0.03}, growth_tax_B{0.015};
    int country_A{80000}, country_B{200000}, result_1{0}, result_2{0}, years{0};
    
    std::cout << "Welcome to: Country A and Country B\n";
    while(country_A < country_B){
        country_A += country_A * growth_tax_A;
        country_B += country_B * growth_tax_B;
        ++years;
    }
    std::cout << "\nIt will take " << years << " years!";

    return 0;
}
