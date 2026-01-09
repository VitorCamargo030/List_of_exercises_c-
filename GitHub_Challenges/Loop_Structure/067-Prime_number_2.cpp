#include <iostream>
#include <cmath>
#include <vector>

/*Faça um programa que mostre todos os primos entre 1 e N sendo N um número inteiro 
fornecido pelo usuário.

O programa deverá mostrar também o número de divisões que ele executou para encontrar 
os números primos.

Serão avaliados o funcionamento, o estilo e o número de testes (divisões) executados.
*/

int prime_number(int n){
    std::vector<int> divisible;
    int square = sqrt(n);
    int count{0};
    int count_divisible{};
    
    for(int i=1; i <= square; ++i){
        if(n%i == 0){
            ++count;
            ++count_divisible;
            divisible.push_back(i);
        }
        else continue;
    }
    
    if(count < 2){
      std::cout << "This number is prime! \nCount Divisible: " << count_divisible;
    }
    else{
        std::cout << "This number don't prime! \nValues divisible: ";
        for(int k=0; k < divisible.size(); ++k){
            std::cout << divisible[k] << " ";
        }
    } 
    
    return 0;
}

int main()
{
    int n{};
    
    std::cout << "Enter a integer number: ";
    std::cin >> n;
    
    prime_number(n);
    
    return 0;
}
