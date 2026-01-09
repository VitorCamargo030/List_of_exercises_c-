#include <iostream>

/*Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual
operação ele deseja realizar.

O resultado da operação deve ser acompanhado de uma
frase que diga se o número é:

par ou ímpar;
positivo ou negativo;
inteiro ou decimal.
*/
int main(){
    /* Symbols: ||, \ */
    double n1{0}, n2{0}, choice{0};
    int result{0};
    std::string even_odd{}, positive_negative{}, integer_decimal{};

    std::cout << "\n";

    std::cout << "Welcome to: Choice operations number!\n";
    std::cout << "Enter two numbers: ";
    std::cin >> n1 >> n2;

    std::cout <<"\n1: Sum \n2: Subtract \n3: Multiplicação \n4: Division\n";
    std::cout <<"\nChoice operation: ";
    std::cin >> choice;

    if(choice < 1 || choice > 4){
        std::cout << "This choice is invalid!";
        return 0;
    }
    else if(choice == 1){
        result = n1 + n2;
    }
    else if(choice == 2){
        result = n1 -n2;
    }
    else if(choice == 3){
        result = n1 * n2;
    }
    else if(choice == 4){
        result = n1 / n2;
    }
    if(result%2 == 0){
        even_odd = "Even";
    }
    else if(result%2 != 0){
        even_odd = "Odd";
    }
    if(result > 0){
        positive_negative = "positive";
    }
    else if(result < 0){
        positive_negative = "negative";
    }
    if(result == int(result)){
        integer_decimal = "integer";
    }
    else if(result == double(result)){
        integer_decimal = "decimal";
    }
    
    std::cout << "\nYour number " << result << " is:\n" << even_odd << "\n" << positive_negative << "\n" << integer_decimal;

    std::cout << "\n";
    return 0;
}

