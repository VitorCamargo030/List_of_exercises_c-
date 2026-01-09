#include <iostream>
#include <algorithm>
#include <initializer_list>

/*Faça um Programa que leia três números e mostre-os em ordem decrescente.*/
using namespace std;

int main() {
    // Write C++ code here
    double num1{}, num2{}, num3{}, first{}, second{}, third{};
    
    cout << "Welcome to: Min value between three products." << endl;
    
    cout << "Enter three values of products: ";
    cin >> num1 >> num2 >> num3;
    
    if(num1 != num2 && num1 != num3 && num2 != num3){
       if(num1 > num2 && num1 > num3){
            if(num2 > num3){
                first = num1;
                second = num2;
                third = num3;
            }
            else{ 
                first = num1;
                second = num3;
                third = num2;
            }
        }
        else if(num2 > num1 && num2 > num3){
            if(num1 > num3){
                first = num2;
                second = num1;
                third = num3;
            }
            else{
                first = num2;
                second = num3;
                third = num1;
            }
        }
        else if(num3 > num1 && num3 > num1){
            if(num1 > num2){
                first = num3;
                second = num1;
                third = num2;
            }
            else{ 
                first = num3;
                second = num2;
                third = num1;
            }
        }
        cout << "Values in descending order: " << first << " " << second << " " << third << endl;
    }
    else if(num1 == num2 && num1 == num3 && num2 == num3){
        cout << "The values is equals!" << endl;
    }
    else{
        cout << "Values not permited!";
    }
    
    

    return 0;
}
