#include <iostream>

using namespace std;

//Finding the area of a figure
int main() {
    // Write C++ code here
    const double pi{3.14};
    double ray{0}, area{0};
    
    cout << "Enter the ray: ";
    cin >> ray;
    
    area = pi * ray*ray;
    
    cout << "Area of a figure: " << area << endl;

    return 0;
}