#include <iostream>

/*Faça  um Programa para um caixa eletrônico.

O programa deverá perguntar ao usuário a valor do saque e depois informar
quantas notas de cada valor serão fornecidas.

As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais.
O valor mínimo é de 10 reais e o máximo de 600 reais.

O programa não deve se preocupar com a quantidade de notas existentes na
máquina.

Exemplo 1:
Para sacar a quantia de 256 reais, o programa fornece duas notas de 100,
uma nota de 50, uma nota de 5 e uma nota de 1;

Exemplo 2:
Para sacar a quantia de 399 reais, o programa fornece três notas de 100,
uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.
*/
int main() {
    // Write C++ code here
    int sake{0}, result{0};
    int rest{0}; int one{0}, five{0}, ten{0}, fifty{0}, hundred{0};
    
    std::cout << "Welcome to: Sake Eletronicwithdrawal!\n";
    std::cout << "Enter the sake, minimum 10 and maximum 600 dollars: ";
    std::cin >> sake;

    if(sake < 10 || sake > 600){
        std::cout << "Your sake is invalid!";
        return 0;
    }
    if(sake >= 100){
        hundred = sake / 100;
        rest = sake % 100;
        std::cout << rest << "\n";
    }
    if(rest >= 50 ){
        fifty = 50;
        rest-=fifty;
        std::cout << rest << "\n";
    }
    if(rest >= 10){
        ten = rest / 10;
        rest= rest % 10;
        std::cout << rest << "\n";
    }
    if(rest >= 5){
        five = 5;
        rest-=five;
        std::cout << rest << "\n";
    }
    if(rest >= 1 && rest < 5){
        one = rest;
        rest-=one;
    }
    
    std::cout << hundred << ", " << fifty << ", " << ten << ", " << five << ", " << one;

    return 0;
}
