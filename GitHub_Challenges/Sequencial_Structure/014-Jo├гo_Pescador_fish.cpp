#include <iostream>
#include <iomanip>

using namespace std;

/*João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o 
rendimento diário de seu trabalho.

Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de
pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo 
excedente.

João precisa que você faça um programa que leia a variável peso (peso de peixes) e 
calcule o excesso.

Gravar na variável excesso a quantidade de quilos além do limite e na variável multa 
o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens 
adequadas.*/
int main() {
    cout << "" << endl;

    const double tax_weight_fish{4.00}, weight_limit{50};
    double weight_fish{0.0}, weight_excess{0.0};
    int result{0};

    cout << "Welcome to calculator of weight fishes" << endl << endl;
    cout << "Enter the weight acquired during fishing: ";
    cin >> weight_fish;

    weight_excess = weight_fish - weight_limit;
    
    result = weight_excess * tax_weight_fish;

    cout << "\nYour weight excess of fishe was: " << weight_excess << "kg";
    cout << "\nYou will have to pay: $" << fixed << setprecision(2) << result << " rate" << endl;

    cout << "" << endl;
    return 0;
}