#include <iostream>
#include <vector>
#include <cstddef>
/*
Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de
números pares e a quantidade de números impares.
*/
int main(){
    /* Symbols: ||, \ */
    std::vector<int> nums{};
    int value{}, even{}, odd{};

    std::cout << "\n";

    std::cout << "Enter the number: ";
  
    for(int i=0; i < 10; ++i){
        std::cin >> value;
        nums.push_back(value);
    }
    for(int i : nums){
        if(i%2 == 0)
            ++even;
        else
            ++odd;
    }

    std::cout << "Numbers even: " << even << "\n";
    std::cout << "Numbers odd: " << odd << "\n";

    std::cout << "\n";
    return 0;
}

