#include <iostream>
#include <vector>

/*Faça um programa que, dado um conjunto de N números, determine o menor valor, o maior valor 
e a soma dos valores.
Altere o programa anterior para que ele aceite apenas números entre 0 e 1000.*/

int greater_smaller_sum(std::vector<int> n){
    int greater{}, smaller{n[0]}, sum{};
    
    for(auto i : n){
        for(auto k : n){
            if(k < 0 || k > 1000){
                std::cout << "Only between 0 and 1000!";
                return 0;
            }
        }
        
        if(i > greater)
            greater = i;
        
        if(smaller > i)
            smaller = i;

        sum += abs(i);
    }
    
    std::cout << "Greater value: " << greater << "\n";
    std::cout << "Smaller value: " << smaller << "\n";
    std::cout << "Sum of all values: " << sum << "\n";
    
    return 0;
}

int main(){
    std::cout << "\n";
    
    greater_smaller_sum({5, 4, 3, 1000, 1});
    
    std::cout << "\n";
    
    return 0;
}
