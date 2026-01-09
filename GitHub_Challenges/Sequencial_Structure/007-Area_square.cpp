#include <iostream>

using namespace std;

//Finding the area of a square
int main() {
    // Write C++ code here
    double l_square{0}, area{0};
    
    cout << "Enter the side of square: ";
    cin >> l_square;
    
    area = l_square*l_square;
    
    cout << "Area of the square: " << area << endl;

    return 0;
}