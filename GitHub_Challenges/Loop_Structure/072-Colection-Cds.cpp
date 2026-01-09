#include <iostream>
#include <vector>
#include <iomanip>

/*Faça um programa que calcule o valor total investido por um colecionador em sua
coleção de CDs e o valor médio gasto em cada um deles. O usuário deverá informar a quantidade de CDs e o valor para em cada um.*/
double average_cds(int CDs){
  double sum{}, average{}, v{};
  std::vector<double> values;

  for(int i=0; i < CDs; ++i){
    std::cout << "Value CD " << i+1 << ": $";
    std::cin >> v;
    values.push_back(v);
  }

  for(double i : values) sum += i;

  average = sum / CDs;

  std::cout << "Total value of the colection: $" << std::fixed << std::setprecision(2) << sum;
  std::cout << "\nAverage of total value: $" << std::fixed << std::setprecision(2) << average;

  return 0;
}

int main(){
  std::cout << "\n";
  int cds{};

  std::cout << "How much CDs you bought for your colection? ";
  std::cin >> cds;

  average_cds(cds);

  std::cout << "\n";
  return 0;
}

