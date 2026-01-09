#include <iostream>
#include <cmath>

using namespace std;

/*Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
o produto do dobro do primeiro com metade do segundo; a soma do triplo do primeiro 
com o terceiro; o terceiro elevado ao cubo.*/
int main() {
    cout << "" << endl;

    int num1{0}, num2{0};
    double num3{0}, operation1{0}, operation2{0}, operation3{0};

    cout << "Enter two integers values: ";
    cin >> num1 >> num2;

    cout << "Enter a double value: ";
    cin >> num3;

    operation1 = (num1 * 2) * (num2 / 2);
    operation2 = (num1 * 3) + num3;
    operation3 = pow(num3, 3);

    cout << "Operation1 = " << operation1 << endl
         << "Operation2 = " << operation2 << endl
         << "Operation3 = " << operation3;

    cout << "" << endl;
    return 0;
}