#include <iostream>
#include <algorithm>
#include <initializer_list>

/*Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.*/
using namespace std;

int main() {
    // Write C++ code here
    double price_product1{}, price_product2{}, price_product3{};
    
    cout << "Welcome to: Min value between three products." << endl;
    
    cout << "Enter three values of products: ";
    cin >> price_product1 >> price_product2 >> price_product3;
    
    cout << "The product that should be purchased is: " << std::min({price_product1, price_product2, price_product3});

    return 0;
}
