#include <iostream>
#include <iomanip>

using namespace std;

/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas 
trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês, sabendo-se que são 
descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça 
um programa que nos dê: salário bruto. quanto pagou ao INSS. quanto pagou ao sindicato.
o salário líquido. calcule os descontos e o salário líquido, conforme a tabela abaixo:

+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato (5%) : R$
= Salário Liquido : R$
*/
int main() {
    cout << "" << endl;

    double gross_salary{0.0}, liquid_salary{0.0}, money_per_hour{0}, ir{0.0}, inss{0.0}, syndicate{0.0};
    int hours_per_day_monthly{0};

    cout << "Welcome to calculator of gross salary to liquid salary!" << endl;
    cout << "Enter how much you receve per day and how many hours do you work per month: ";
    cin >> money_per_hour >> hours_per_day_monthly;
    
    gross_salary = (money_per_hour * hours_per_day_monthly) / 8;
    ir = gross_salary * 0.11;
    inss = gross_salary * 0.08;
    syndicate = gross_salary * 0.05;
    liquid_salary = gross_salary - (ir + inss + syndicate);

    cout << "\nGross salary : $" << fixed << setprecision(2) << gross_salary;
    cout << "\nIR (11%) : $" << fixed << setprecision(2) << ir;
    cout << "\nINSS (8%): $" << fixed << setprecision(2) << inss;
    cout << "\nSyndicate (5%) : $" << fixed << setprecision(2) << syndicate;
    cout << "\nLiquid salary : $" << fixed << setprecision(2) << liquid_salary << endl;

    cout << "" << endl;
    return 0;
}