#include <iostream>
#include <vector>

/* Faça um programa que calcule o número médio de alunos por turma. Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma. As turmas não podem ter mais de 40 alunos.*/
int students_per_class(){
  std::vector<int> _students;
  std::vector<int> average;
  int c{}, _class{};

  std::cout << "Enter the quantity of class: ";
  std::cin >> _class;

  for(int i=0; i < _class; ++i){
    std::cout << "Students of the class " << i+1 << ": ";
    std::cin >> (c);

    if(c < 0){
      std::cout << "This number is negative!" << "\n";
      --i;
    }
    else if(c > 40){
      std::cout << "Students exceded!" << "\n";
      --i;
      continue;
    }
    else _students.push_back(c);
  }

  for(int i : _students) std::cout << i / _students.size() << " ";

  return 0;
}

int main(){
  std::cout << "\n";

  students_per_class();

  std::cout << "\n";
  return 0;
}

