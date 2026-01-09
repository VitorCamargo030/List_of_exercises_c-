#include <iostream>
#include <iomanip>

/*Um posto está vendendo combustíveis com
a seguinte tabela de descontos: 
Álcool: até 20 litros, desconto de 3% por
litro acima de 20 litros, desconto de 5% por
litro
Gasolina: até 20 litros, desconto de 4% por
litro acima de 20 litros, desconto de 6% por
litro

Escreva um algoritmo que leia o número de
litros vendidos, o tipo de combustível
(codificado da seguinte forma: A-álcool,
G-gasolina), calcule e imprima o valor a
ser pago pelo cliente sabendo-se que o
preço do litro da gasolina é R$ 2,50 o
preço do litro do álcool é R$ 1,90.*/
int main() {
    // Write C++ code here
    const double g_value{2.5}, a_value{1.9};
    double total{}; int liters{};
    char choice{};
    
    std::cout << "Welcome to: Calculator Gasoline and alcohol!\n";
    std::cout << "g: gasoline\na: alcohol\nWhat fuel your choice? ";
    std::cin >> choice;
    
    if(choice != 'g' && choice != 'a'){
        std::cout << "This fuel is invalid!";
        return 0;
    }
        
    std::cout << "Enter how many liters do you want: ";
    std::cin >> liters;
    
    if(choice == 'g' && liters > 0){
        total = (g_value * liters);
        if(liters > 20)
            total -= total * 0.4;
        else
            total -= total * 0.6;
    }
    else if(choice == 'a' && liters > 0){
        total = (a_value * liters);
        if(liters > 20)
            total -= total * 0.3;
        else 
            total -= total * 0.5;
    }
    else{
        std::cout << "The quantity in liters is negative!";
        return 0;
    }
    
    std::cout << "Total value: $" << std::fixed << std::setprecision(2) << total;

    return 0;
}
