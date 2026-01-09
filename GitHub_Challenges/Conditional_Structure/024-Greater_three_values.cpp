#include <iostream>
#include <cmath>

using namespace std;

/*Faça um programa que encontr o maior valor entre
    três números.*/
int main() {
    // Write C++ code here
    int num1{0}, num2{0}, num3{0};
    
    cout << "Welcome to: Max between three values" << endl;
    
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;
    
    if(num1 > num2 && num1 > num3)
        cout << "Max value is: " << num1;
    else if(num2 > num1 && num2 > num3)
        cout << "Max value is: " << num2;
    else
        cout << "Max value is: " << num3;
    
    return 0;
}
