#include <iostream>

/*Uma fruteira está vendendo frutas com a seguinte tabela de preços:

                      Até 5 Kg           Acima de 5 Kg
Morango         R$ 2,50 por Kg          R$ 2,20 por Kg
Maçã            R$ 1,80 por Kg          R$ 1,50 por Kg

Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra
ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre este total.

Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade
(em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente. */
int main(){
    /* Symbols: ||, \ */
    double price_strawberry{2.5}, price_apple{1.8}, price_total{0}, weight_strawberry{0},  weight_apple{0}, weight_total{0}, discount{0.1};

    std::cout << "\n";
  
    std::cout << "Welcome to: Selling fruits!\n";
    std::cout << "Weight of strawberry: ";
    std::cin >> weight_strawberry;
    std::cout << "Weight of apple: ";
    std::cin >> weight_apple;

    if(weight_strawberry < 0 || weight_apple < 0)

    std::cout << "\n";
    return 0;
}

