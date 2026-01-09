#include <iostream>
#include <iomanip>

using namespace std;

/*Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados
da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é
vendida em latas de 18 litros, que custam R$ 80,00.

Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
*/
int main() {
    cout << "" << endl;

    const double paint_can{18.0}, paint_can_price{80.0};
    double meters_square{0.0}, total{0.0};
    int paint_can_needed{0};

    cout << "Welcome to calculator of paint store" << endl;
    cout << "Enter the meters square for paint: ";
    cin >> meters_square;

    paint_can_needed = (meters_square / 3) / paint_can;
    total = paint_can_price * paint_can_needed;

    cout << "\nIt will be necessary: " << paint_can_needed << " paint(s) can" << endl;
    cout << "Total price: $" << fixed << setprecision(2) << total;

    cout << "" << endl;
    return 0;
}