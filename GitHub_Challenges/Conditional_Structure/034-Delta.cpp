#include <iostream>
#include <algorithm>
#include <cmath>

/*Faça um programa que calcule as raízes de uma equação do segundo grau,
na forma ax² + bx + c.

O programa deverá pedir os valores de a, b e c e fazer as consistências,
informando ao usuário nas seguintes situações:

Se o usuário informar o valor de A igual a zero, a equação não é do segundo
grau e o programa não deve fazer pedir os demais valores,
sendo encerrado;

Se o delta calculado for negativo, a equação não possui raízes reais.
Informe ao usuário e encerre o programa;
Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe-a ao usuário;
Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário;
*/
int main(){
    /* Symbols: ||, \ */
    double a{0}, b{0}, c{0}, x1{0}, x2{0}, delta{0};

    std::cout << "\n";
  
    std::cout << "Welcome to: ---Calculator Delta---\n";
    std::cout << "Enter three value for a, b and c: ";
    std::cin >> a;

    if(a == 0){
        std::cout << "Don't is quadratic equation!";
        return 0;
    }
    
    std::cout << "Enter the values of b and c: ";
    std::cin >> b >> c;

    delta = pow(b, 2) - 4*a*c;

    if(delta < 0){
        std::cout << "The equation dont't exist!\n";
        return 0;
    }
    else if(delta == 0){
        x1 = (-b) / (2 * a);
        std::cout << "The only root is: " << x1 << "\n";
        return 0;
    }
    else{
        x1 = (-b) + sqrt(delta) / (2*a);
        x2 = (-b) - sqrt(delta) / (2*a);
        std::cout << "The roots are: " << x1 << " and " << x2 << "\n";
    }

    std::cout << "\n";
    return 0;
}

