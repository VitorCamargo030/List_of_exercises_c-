/*Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do Imposto de Renda, que depende do salário bruto (conforme tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita).

O Salário Líquido corresponde ao Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.

Desconto do IR: Salário Bruto até 900 (inclusive) - isento
Salário Bruto até 1500 (inclusive) - desconto de 5% 
Salário Bruto até 2500 (inclusive) - desconto de 10% 
Salário Bruto acima de 2500 - desconto de 20%

Imprima na tela as informações, dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220.

    Salário Bruto: (5 * 220)        : R$ 1100,00
    (-) IR (5%)                     : R$   55,00
    (-) INSS ( 10%)                 : R$  110,00
    FGTS (11%)                      : R$  121,00
    Total de descontos              : R$  165,00
    Salário Liquido                 : R$  935,00*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
	const double ir{0.05}, inss{0.10}, fgts{0.11};
	int hours_per_day{}, hours_per_month{}, days{}, days_per_month{};
	double ir_result{}, inss_result{}, fgts_result{}, percent{};
	double gross_salary{}, net_salary{}, salary_per_day{}, total_discounts{};
	
	cout << "Welcome to: Program to find your liquid salary." << endl;
	
	cout << "How many hours you work per day? ";
	cin >> hours_per_day;
	
	cout << "How many days your work per day? ";
	cin >> days;
	
	if(days > 7){
	    cout << "\nNumber of days exced!  Reboot the program." << endl;
	    return 0;
	}
	
	cout << "What your gross salary? ";
	cin >> gross_salary;
	
	if(gross_salary <= 900)
	    ir_result = 0;
	else if(gross_salary > 900 && gross_salary <= 1500)
	    ir_result = gross_salary * ir;
	else if(gross_salary > 1500 && gross_salary <= 2500){
	    ir_result = gross_salary * ir;
	    inss_result = gross_salary * inss;
	}
	else{
	    ir_result = gross_salary * ir;
	    inss_result = gross_salary * inss;
	    fgts_result = gross_salary * fgts;
	}
	
	days_per_month = days * 4;
	hours_per_month = hours_per_day * days_per_month;
	salary_per_day = gross_salary / hours_per_month;	
	total_discounts = ir_result + inss_result + fgts_result;
	net_salary = gross_salary - total_discounts;
	
	cout << "\nYou work " << hours_per_month << fixed << setprecision(2) << " hours per month" << endl;
	cout << "You work " << days_per_month << fixed << setprecision(2) << " days per month" << endl;
	cout << "========================================" << endl;
	cout << "\nGross salary        : $" << gross_salary << fixed << setprecision(2) << endl;
	cout << "IR (5%)                  : $" << fixed << setprecision(2) << ir_result << endl;
	cout << "INSS (10%)          : $" << fixed << setprecision(2) << inss_result << endl;
	cout << "FGTS (11%)         : $" << fixed << setprecision(2) << fgts_result << endl;
	cout << "Total discounts  : $" << fixed << setprecision(2) << total_discounts << endl;
	cout << "Net salary            : $" << fixed << setprecision(2) << net_salary << endl;
	
	
	return 0;
}
