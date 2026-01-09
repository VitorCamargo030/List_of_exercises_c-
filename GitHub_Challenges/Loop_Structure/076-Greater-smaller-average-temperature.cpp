#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <iomanip>

/*O Departamento Estadual de Meteorologia lhe contratou para desenvolver um
programa que leia as um conjunto indeterminado de temperaturas,
e informe ao final a menor e a maior temperaturas informadas,
bem como a média das temperaturas.
*/
double g_s_a_temperature(){
  std::vector<double> temperature;
  int count{1};
  double t{1};

  std::cout << "-----Type 0.0 for finish-----\n";

  do{
    
    std::cout << "Temperature " << count++ << ": ";
    std::cin >> t;
  
    if(t == 0.0 || t == 0) continue;

    temperature.push_back(t);
    
  }while(t != 0.0);

  double greater = *std::max_element(temperature.begin(), temperature.end());
  double smaller = *std::min_element(temperature.begin(), temperature.end());
  double average = std::accumulate(temperature.begin(), temperature.end(), 0.0) / temperature.size();

  std::cout << "\nGreater temperature: " << greater;
  std::cout << "\nSmaller temperature: " << smaller;
  std::cout << "\nAverage temperature: " << std::fixed << std::setprecision(2) << average;

  return 0;
}

int main(){
  std::cout << "\n";

  g_s_a_temperature();

  std::cout << "\n";
  return 0;
}

