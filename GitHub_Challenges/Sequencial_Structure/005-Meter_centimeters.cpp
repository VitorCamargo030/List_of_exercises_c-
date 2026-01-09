#include <iostream>
#include <iomanip>

using namespace std;

//Converting meters to centimeters.
int main() {
    cout << "" << endl;

    const double centimeters{100};
    double meters{0}, result{0};

    cout << "Enter the value in meters: ";
    cin >> meters;

    result = meters * centimeters;

    cout << "Value in centimeters: " << fixed << setprecision(1) << result;

    cout << "" << endl;
    return 0;
}