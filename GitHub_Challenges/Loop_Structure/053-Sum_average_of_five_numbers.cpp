#include <iostream>

/*Faça um programa que leia 5 números e informe a soma e a média dos números.*/
int main(){
    /* Symbols: ||, \ */
    int value{}, sum{};
    double average{};

    std::cout << "\n";
 
    std::cout << "Welcome to: Sum and Average between five numbers!\n";

    for(int i=0; i < 5; ++i){
        std::cout << "Enter the value: ";
        std::cin >> value;

        sum += value;
        if(i == 4){ 
            average = sum / 5.0;
            std::cout << "Sum of the five numbers: " << sum << "\n";
            std::cout << "Average of the five numbers: " << average << "\n";
        }
    }
    std::cout << "\n";
    return 0;
}

