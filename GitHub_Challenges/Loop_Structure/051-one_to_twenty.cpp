#include <iostream>

/*Faça um programa que imprima na tela os números de 1 a 20, um abaixo do
outro. Depois modifique o programa para que ele mostre os números um
ao lado do outro.*/
int main() {
    // Write C++ code here
    std::cout << "Welcome to: 1 to 20 print loop!\n";
    
    for( int i=1; i <= 20; i++){
        std::cout << i << "\n";
        if(i == 20){
            for( i=1; i <= 20; i++){
                std::cout << i << " ";
            }
        }
    }

    return 0;
}
