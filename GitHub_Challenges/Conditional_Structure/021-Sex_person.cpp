#include <iostream>

/*Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.*/
int main(){
    /* Symbols: ||, \ */

    char sex{};
    std::string result{};

    std::cout << "\n";
  
    std::cout << "Welcome to: Finding your sex!\n";
    std::cout << "Enter your sex: ";
    std::cin >> sex;

    if(sex == 'f'){
        result = "Female";
    }
    else if(sex == 'm'){
        result = "Male";
    }
    else{
        std::cout << "Your sex is invalid!\n";
        return 0;
    }

    std::cout << "Your are " << result << "\n";
    
    std::cout << "\n";
    return 0;
}

