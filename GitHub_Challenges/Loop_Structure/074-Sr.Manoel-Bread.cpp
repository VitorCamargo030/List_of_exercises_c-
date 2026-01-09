#include <iostream>
#include <iomanip>

/*O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a
metodologia da tabelinha, que já é um sucesso na sua loja de 1,99.

Você foi contratado para desenvolver o programa que monta a tabela de preços de
pães, de 1 até 50 pães, a partir do preço do pão informado pelo usuário,
conforme o exemplo abaixo:

    Preço do pão: R$ 0.18
    Panificadora Pão de Ontem - Tabela de preços
    1 - R$ 0.18
    2 - R$ 0.36
    ...
    50 - R$ 9.00
*/
double store_bread(double price){
  double row{10}, column{5};

  for(int i=1; i <= row; ++i){
    for(int k=0; k < column; ++k){
      int count = i + k * row;
      std::cout << std::setw(3) << count
                << " - R$ "  << std::fixed << std::setprecision(2) << price * count << "    ";
    }
    std::cout << "\n";
  }

  return 0;
}

int main(){
  std::cout << "\n";

  double price{};

  std::cout << "Enter the price of bread: ";
  std::cin >> price;

  store_bread(price);

  std::cout << "\n";
  return 0;
}

