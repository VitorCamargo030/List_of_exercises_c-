#include <iostream>
#include <iomanip>

using namespace std;

//Finding the area of a square
int main() {
    // Write C++ code here
    double Celsius{0.0}, Fahrenheit{0.0};
    
    cout << "Inform the temperature in Celsius: ";
    cin >> Celsius;
    
    Fahrenheit = (Celsius * 9/5) + 32;
    
    cout << "The temperature in Celsius: " << fixed << setprecision(2) << Fahrenheit << " °F" << endl;

    return 0;
}