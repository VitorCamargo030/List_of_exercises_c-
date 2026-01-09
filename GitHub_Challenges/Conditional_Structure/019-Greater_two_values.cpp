#include <iostream>

/*Faça um Programa que peça dois números e imprima o maior deles*/
int main(){
    
    int num1{0}, num2{0}, greater{0};

    std::cout << "\n";
  
    std::cout << "Welcome to: Greater than two values!" << "\n";
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if(num1 > num2){
        greater = num1;
    }
    else{
        greater = num2;
    }

    std::cout << "This greater number is " << greater;

    std::cout << "\n";
    return 0;
}

