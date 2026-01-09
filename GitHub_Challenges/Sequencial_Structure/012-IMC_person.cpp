#include <iostream>
using namespace std;

int main() {
    cout << "" << endl;

    double height{0.0};

    cout << "Enter your height: ";
    cin >> height;

    double imc {0};
    imc = (72.7 * height) - 58;

    cout << "Your ideal weight is: " << imc << "kg";

    cout << "" << endl;
    return 0;
}