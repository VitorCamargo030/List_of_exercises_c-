#include <iostream>
#include <iomanip>

/*O Sr. Manoel Joaquim expandiu seus negócios para além dos negócios de 1,99 e
agora possui uma loja de conveniências.

Faça um programa que implemente uma caixa registradora rudimentar.

O programa deverá receber um número desconhecido de valores referentes aos
preços das mercadorias.

Um valor zero deve ser informado pelo operador para indicar o final da compra.

O programa deve então mostrar o total da compra e perguntar o valor em dinheiro
que o cliente forneceu, para então calcular e mostrar o valor do troco.

Após esta operação, o programa deverá voltar ao ponto inicial, para registrar a
próxima compra.

A saída deve ser conforme o exemplo abaixo:
    Lojas Tabajara
    Produto 1: R$ 2.20
    Produto 2: R$ 5.80
    Produto 3: R$ 0
    Total: R$ 9.00
    Dinheiro: R$ 20.00
    Troco: R$ 11.00
*/
double store_tabajara(){
  double price{}, total_price{}, change_money{}, paid{};
  int count{1};

  do{
    std::cout << "Product " << count << ": R$";
    std::cin >> price;

    total_price += price;

    ++count;

  }while(price != 0);

  std::cout << "Total: R$" << std::fixed << std::setprecision(2) << total_price;

  std::cout << "\nAmount to be paid: R$";
  std::cin >> paid;

  if(paid > total_price)
    change_money = paid - total_price;
  
  std::cout << "Change money: R$" << std::fixed << std::setprecision(2) << change_money;

  return 0;
}

int main(){
  std::cout << "\n";

  store_tabajara();

  std::cout << "\n";
  return 0;
}

