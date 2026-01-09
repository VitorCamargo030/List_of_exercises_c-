#include <iostream>
#include <iomanip>

/*Faça um programa que leia e valide as seguintes informações: Nome: maior que 3
caracteres; Idade: entre 0 e 150; Salário: maior que zero; Sexo: 'f' ou 'm'; 
Estado Civil: 's', 'c', 'v', 'd';*/
int main(){
  std::string name{};
  int age{}; double salary; char sex{}; char marital_status{};

  std::cout << "\n";
  do{
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your salary: ";
    std::cin >> salary;

    std::cout << "f: Female \nm: Male\n";

    std::cout << "\nEnter your sex: ";
    std::cin >> sex;

    std::cout << "s: single \nc: married \nv: widow/widower \nd: divorced\n";

    std::cout << "\nEnter your marital status: ";
    std::cin >> marital_status;

    if(name.size() <= 3)
      std::cout << "Your name has less than 4 characters!\n";
    if(age < 0 || age > 150)
      std::cout << "Your age don't between 0 and 150!\n";
    if(salary < 0)
      std::cout << "Your salary is negative!\n";
    if(sex != 'f' && sex != 'm')
      std::cout << "Your sex don't exist!\n";
    if(marital_status != 's' && marital_status != 'c' && marital_status != 'v' && marital_status != 'm')
      std::cout << "Your marital is invalid!\n";


  }while(name.size() <= 3 || (age < 0 && age > 150) || salary < 0 || (sex != 'f' && sex != 'm') || (marital_status != 's' && marital_status != 'c' && marital_status != 'd' && marital_status != 'v'));

  std::cout << "Name: " << name << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "Salary: $" << std::fixed << std::setprecision(2) << salary << "\n";
  std::cout << "Sex: " << sex << "\n";
  std::cout << "Marital Status: " << marital_status << "\n";
  std::cout << "\n";
  return 0;
}

