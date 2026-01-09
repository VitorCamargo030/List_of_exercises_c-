#include <iostream>
#include <iomanip>

/*O Sr. Manoel Joaquim possui uma grande loja de artigos de R$ 1,99,
com cerca de 10 caixas.

Para agilizar o cálculo de quanto cada cliente deve pagar ele desenvolveu uma
tabela que contém o número de itens que o cliente comprou e ao lado
o valor da conta.

Desta forma a atendente do caixa precisa apenas contar quantos itens o cliente
está levando e olhar na tabela de preços.

Você foi contratado para desenvolver o programa que monta esta
tabela de preços, que conterá os preços de 1 até 50 produtos,
conforme o exemplo abaixo:

    Lojas Quase Dois - Tabela de preços
    1 - R$ 1.99
    2 - R$ 3.98
    ...
    50 - R$ 99.50
*/

using namespace std;

int price_table(){
  double price{1.99};
  int column{5}, row{10};

  for(int linha = 1; linha <= row; ++linha) {
    // Loop pelas colunas
    for(int col = 0; col < column; ++col) {
      int valor = linha + col * row;  // calcula o valor da coluna
        cout << setw(4) << valor
             << " - R$ "<< setw(5) << fixed << setprecision(2) << valor * price << "  ";
    }
    cout << endl; // fim da linha
  }

  return 0;
}

int main(){
  std::cout << "\n";

  price_table();

  std::cout << "\n";
  return 0;
}

