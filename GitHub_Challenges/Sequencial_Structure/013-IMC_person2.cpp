#include <iostream>
using namespace std;

/*Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que
calcule seu peso ideal, utilizando as seguintes fórmulas: 
Para homens: (72.7h) - 58
Para mulheres: (62.1h) - 44.7*/
int main() {
    cout << "" << endl;

    double height{0.0};

    cout << "Enter your height: ";
    cin >> height;

    double imc_man{0.0}, imc_woman{0.0};
    imc_man = (72.7 * height) - 58;
    imc_woman = (62.1 * height) - 44.7;

    cout << "The ideal weight for you as a man is: " << imc_man << "kg" << endl;
    cout << "The ideal weight for you as a woman is: " << imc_woman << "kg";

    cout << "" << endl;
    return 0;
}