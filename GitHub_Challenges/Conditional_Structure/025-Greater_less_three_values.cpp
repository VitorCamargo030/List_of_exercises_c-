#include <iostream>
#include <algorithm>

using namespace std;

/*Faça um programa que encontre o maior e menor valor entre três números.*/
int main() {
    // Write C++ code here
    int num1{0}, num2{0}, num3{0}, max_value{0}, min_value{0};
    
    cout << "Welcome to: Max and Min between three values" << endl;
    
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;
    
    max_value = max({num1, num2, num3});
    min_value = min({num1, num2, num3});
    
    cout << "Your max value is: " << max_value << endl;
    cout << "Your min value is: " << min_value << endl;
    
    return 0;
}
