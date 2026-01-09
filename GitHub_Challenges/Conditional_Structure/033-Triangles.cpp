/*Faça um Programa que peça os 3 lados de um triângulo. O programa deverá
informar se os valores podem ser um triângulo. Indique, caso os lados formem
um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

Dicas: Três lados formam um triângulo quando a soma de quaisquer dois lados
for maior que o terceiro; 
Triângulo Equilátero: três lados iguais; 
Triângulo Isósceles: quaisquer dois lados iguais; 
Triângulo Escaleno: três lados diferentes;*/
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	double side1{}, side2{}, side3{}, sum_for_triangle{}, result_type_tringle{};
	bool scalene{}, isosceles{}, equilateral{};

	cout << "Welcome to: Program to find the type of triangle. " << endl;
	
	cout << "\nEnter the three sides of triangle: ";
	cin >> side1 >> side2 >> side3;
	
	equilateral = side1 == side2 && side1 == side3 && side2 == side3;
	isosceles = side1 == side2 || side1 == side3 || side2 == side3;
	scalene = side1 != side2 && side1 != side3 && side2 != side3;
	
	if((side1 + side2) > side3 && (side1 + side3) > side2 && (side2 + side3) > side1)
	    cout <<"This is a triangle!" << endl;
	    if(equilateral == true)
	        cout << "This is a triangle equilateral!" << endl;
	    else if(scalene == true)
	        cout << "This is a triangle scalene!" << endl;
	    else if(isosceles == true)
	        cout << "This is a triangle isosceles!" << endl;
	else
	    cout << "This don't a triangle!" << endl;
	    return 0;
	    
	cout << endl;
	cout << equilateral << endl;
	cout << isosceles << endl;
	cout << scalene << endl;
	
	    
	cout << endl;
    return 0;
}
