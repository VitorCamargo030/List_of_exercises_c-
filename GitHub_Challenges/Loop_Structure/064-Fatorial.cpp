#include <iostream>

/*Altere o programa de cálculo do fatorial, permitindo ao usuário calcular o fatorial várias
vezes e limitando o fatorial a números inteiros positivos e menores que 16.*/
int fatorial(){
    int result{1}, n{1};
    
    do{
        result = 1;
        std::cout << "Enter a number: ";
        std::cin >> n;
        if(n > 16 || n < 0){
            std::cout << "Enter number greater than 0 and less than 16";
            continue;
        }
        else if(n == 0){
          std::cout << "Thanks, goodbye"; return 0;  
        }
        
        for(int i=n; i >= 1; --i){
            result *= i;
        }
        std::cout << result << "\n";
        
    }while(n > 0 && n < 16);
    return result;
}

int main(){
    
    fatorial();
    
    return 0;
}
