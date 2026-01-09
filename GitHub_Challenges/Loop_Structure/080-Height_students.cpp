#include <iostream>

/*Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre
acidentes de trânsito.

Foram obtidos os seguintes dados:
    Código da cidade;
    Número de veículos de passeio (em 1999);
    Número de acidentes de trânsito com vítimas (em 1999).

Deseja-se saber:
    Qual o maior e menor índice de acidentes de transito
        e a que cidade pertence;
    Qual a média de veículos nas cinco cidades juntas;
    Qual a média de acidentes de trânsito nas cidades com menos de
        2.000 veículos de passeio.
*/
int height_students(){
  int code{}, height{}, height_g{}, height_s{}, code_g{}, code_s{};

  for(int i=0; i < 10; ++i){
    std::cout << "Your code: ";
    std::cin >> code;

    std::cout << "Height in cm: ";
    std::cin >> height;

    if(height > height_g){
      height_g = height;
      code_g = code;
    }
    if(i == 0) height_s = height;
    if(height_s >= height){
      height_s = height;
      code_s = code;
    }
  }

  std::cout << "\nCode of tallest student: " << code_g << ", and your height: " << height_g << "cm";
  std::cout << "\nCode of smaller student: " << code_s << ", and your height: " << height_s << "cm";

  return 0;
}


int main(){

  height_students();

  std::cout << "\n";
  return 0;
}

