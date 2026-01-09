#include <iostream>
#include <iomanip>

using namespace std;

//Finding the area of a square
int main() {
    // Write C++ code here
    double Celsius{0.0}, Fahrenheit{0.0};
    
    cout << "Inform the temperature in Fahrenheit: ";
    cin >> Fahrenheit;
    
    Celsius = (5 * (Fahrenheit-32) / 9);
    
    cout << "The temperature in Celsius: " << fixed << setprecision(2) << Celsius << " °C" << endl;

    return 0;
}