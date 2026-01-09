#include <iostream>

/*Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.*/
int main(){
    /* Symbols: ||, \ */

    std::cout << "\n";
 
    std::cout << "Welcome to: Print odd numbers between 1 to 50!\n";

    for(int i=1; i <= 50; ++i){
        if(i%2 == 1) std::cout << i << " ";
    }

    std::cout << "\n\n";
    return 0;
}

