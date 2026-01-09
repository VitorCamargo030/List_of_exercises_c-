#include <iostream>
#include <vector>

/*Faça um programa que peça para n pessoas a sua idade, ao final o programa
deverá verificar se a média de idade da turma varia entre 0 e 25,26 e 60 e
maior que 60; e então, dizer se a turma é jovem, adulta ou idosa, conforme a
média calculada.*/
std::string average_age_class(int people){
  std::vector<int> ages;
  int sum{}, average{};
  std::string result{};

  for(int i=0; i < people; ++i){
    int age{};
    std::cout << "Enter the age: ";
    std::cin >> age;

    ages.push_back(age);

    sum += age;
  }

  average = sum / ages.size();

  if(average > 0 && average < 25) result = "Teen";
  else if(average > 26 && average < 60) result = "Adult";
  else result = "Elderly";

  return result;
}

int main(){
  std::cout << "\n";
  
  int people{};

  std::cout << "Enter the quantity of the people class: ";
  std::cin >> people;

  std::cout << average_age_class(people);

  std::cout << "\n";
  return 0;
}

