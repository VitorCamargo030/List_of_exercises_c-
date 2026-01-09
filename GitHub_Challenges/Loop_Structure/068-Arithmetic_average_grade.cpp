#include <iostream>
#include <vector>

/*Faça um programa que calcule o mostre a média aritmética de N notas.*/
int arithmetic_average_school_grade(std::vector<int> grades){
  int sum{};

  std::cout << "Grades: ";

  for(auto i : grades){
    sum += i;
    if(i == grades.size() - 1) std::cout << i;
    else std::cout << i << ", ";
  }
  
  std::cout << "\nAverage: " << sum / grades.size();

  return 0;
}

int main(){
  std::cout << "\n";

  arithmetic_average_school_grade({4, 3, 2, 6});

  std::cout << "\n";
  return 0;
}

