#include <iostream>
#include <cmath>
#include <vector>

/*Faça um programa que peça um número inteiro e determine se ele é ou não um número primo.
Um número primo é aquele que é divisível somente por ele mesmo e por 1.

Altere o programa de cálculo dos números primos, informando, caso o número não seja primo, 
por quais número ele é divisível.*/

int prime_number(int n){
    std::vector<int> divisible;
    int square = sqrt(n);
    int count{0};
    
    for(int i=1; i <= square; ++i){
        if(n%i == 0){
            ++count;
            divisible.push_back(i);
        }
        else continue;
    }
    
    if(count < 2) std::cout << "This number is prime!";
    else{
        //std::cout << "This number don't prime! \n\nValues divisible: ";
        for(int k=0; k < divisible.size(); ++k){
            std::cout << divisible[k] << " ";
        }
    } 
    
    return 0;
}

int main()
{
    int n{};
    
    std::cout << "Enter a integer number: ";
    std::cin >> n;
    
    prime_number(n);
    
    return 0;
}
