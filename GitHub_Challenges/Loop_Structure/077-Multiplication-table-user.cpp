#include <iostream>

/*Desenvolva um programa que faça a tabuada de um número qualquer inteiro que
será digitado pelo usuário, mas a tabuada não deve necessariamente iniciar em 1
e terminar em 10, o valor inicial e final devem ser informados também pelo
usuário, conforme exemplo abaixo:

    Montar a tabuada de: 5
    Começar por: 4
    Terminar em: 7

    Vou montar a tabuada de 5 começando em 4 e terminando em 7:
    5 X 4 = 20
    5 X 5 = 25
    5 X 6 = 30
    5 X 7 = 35

Obs: Você deve verificar se o usuário não digitou o final menor que o inicial.
*/
int multi_table(int value_multi, int start, int end){
  if(end < start){
    std::cout << "The final value is greater than begin!";
    return 0;
  }

  for(start; start <= end; ++start)
    std::cout << value_multi << " x " << start << " = " << value_multi * start << "\n";

  return 0;
}

int main(){
  std::cout << "\n";
  
  int v{}, s{}, f{};

  std::cout << "Assemble the multiplication table of: ";
  std::cin >> v;
  std::cout << "Start to: ";
  std::cin >> s;
  std::cout << "Finish in: ";
  std::cin >> f;

  multi_table(v, s, f);

  std::cout << "\n";
  return 0;
}

