#include <iostream>

/*Faça um Programa que leia um número inteiro maior que 0 e menor que 1000 e
imprima a quantidade de centenas, dezenas e unidades do mesmo.

Observando os termos no plural a colocação do "e", da vírgula entre outros.

Exemplo:
326 = 3 centenas, 2 dezenas e 6 unidades
12 = 1 dezena e 2 unidades

Testar com:
326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16*/
int main(){
    /* Symbols: ||, \ */
    int unit{0}, ten{0}, hundred{0}, num{0};

    std::cout << "\n";
  
    std::cout << "Welcome to: Units, Tens and Hundreds of your number!\n";
    std::cout << "Enter a number between 1 and 999: ";
    std::cin >> num;

    if(num == false){
        std::cout << "This value don't integer!";
        return 0;
    }
    if(num > 0 && num < 1000){
        if(num > 1 && num < 10){
            unit = num % 10;
            std::cout << num << " = " << unit << " unit(s)\n";
        }
        else if(num > 10 && num < 100){
            unit = num % 10;
            ten = num / 10;
            std::cout << num << " = " << ten << " ten(s) and " << unit << " unit(s)\n";
        }
        else{
            unit = num % 10;
            ten = (num % 100) / 10;
            hundred = num / 100;
            std::cout << num << " = " << hundred << " hundred(s), " << ten << " ten(s) and "<< unit << " unit(s)\n";
        }
    }
    else if(num == 0){
        std::cout << "Your number is zero\n";
        return 0;
    }
    else if(num < 0){
        std::cout << "Your number is negative!\n";
        return 0;
    }
    else if(num > 1000){
        std::cout << "Your number is greater than 1000!\n";
        return 0;
    }
    else{
        std::cout << "Your number is invalid!\n";
        return 0;
    }

    std::cout << "\n";
    return 0;
}

