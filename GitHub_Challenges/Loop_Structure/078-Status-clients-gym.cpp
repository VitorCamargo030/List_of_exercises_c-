#include <iostream>
#include <cmath>

/*Uma academia deseja fazer um senso entre seus clientes para descobrir o mais
alto, o mais baixo, a mais gordo e o mais magro, para isto você deve fazer um
programa que pergunte a cada um dos clientes da academia seu código,
sua altura e seu peso.

O final da digitação de dados deve ser dada quando o usuário digitar 0 (zero)
no campo código.

Ao encerrar o programa também deve ser informados os códigos e valores do
cliente mais alto, do mais baixo, do mais gordo e do mais magro, além da média
das alturas e dos pesos dos clientes.
*/
int status_clients_gym(){
  int code{}, count{1};
  double height{}, weight{}, g_height{}, s_height{}, g_weight{}, s_weight{};

  do{
    
    std::cout << "Code " << count++ << ": ";
    std::cin >> code;

    if(code == 0 || code < 0){
      std::cout << "Finish";
      return 0;
    }

    std::cout << "Height: ";
    std::cin >> height;

    std::cout << "Weight: ";
    std::cin >> weight;

    g_height = std::max(g_height, height);
    if(count == 1) s_height = height;
    else if(s_height > height) s_height = height;
    else s_height;

    g_weight = std::max(g_weight, weight);
    if(count == 1) s_weight = weight;
    else if(s_weight > weight) s_weight = height;
    else s_weight;

  }while(code != 0 && code > 0);

  

  return 0;
}

int main(){
  std::cout << "\n";

  status_clients_gym();

  std::cout << "\n";
  return 0;
}

