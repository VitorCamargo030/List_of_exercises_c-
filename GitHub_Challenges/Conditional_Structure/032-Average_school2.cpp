#include <iostream>
#include <vector>

using namespace std;

/*Faça um programa que lê as duas notas parciais obtidas por um aluno numa
disciplina ao longo de um semestre, e calcule a sua média.

A atribuição de conceitos obedece à tabela abaixo: Média de Aproveitamento
Conceito 
Entre 9.0 e 10.0 A 
Entre 7.5 e 9.0 B 
Entre 6.0 e 7.5 C 
Entre 4.0 e 6.0 D 
Entre 4.0 e zero E

O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente
e a mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o
conceito for D ou E.*/
int main() {
    // Write C++ code here
    vector<char> letters_grade{'A', 'B', 'C', 'D', 'E'};
    double grade1{}, grade2{}, average_number{};
    char average_letter{};
    
    cout << "Welcome to: Semester Average. " << endl;
    
    cout << "\nEnter your two grades of semester: ";
    cin >> grade1 >> grade2;
    
    average_number = (grade1 + grade2) / 2;
    
    if(average_number > 0.0 && average_number <= 10.0){
        if(average_number > 9.0 && average_number <= 10.0)
            average_letter = letters_grade[0];
        else if(average_number > 7.5 && average_number <= 9.0)
            average_letter = letters_grade[1];
        else if(average_number > 6.0 && average_number <= 7.5)
            average_letter = letters_grade[2];
        else if(average_number > 4.0 && average_number <= 6.0)
            average_letter = letters_grade[3];
        else if(average_number > 0.0 && average_number <= 4.0)
            average_letter = letters_grade[4];
    }
    else{
        cout << "Invalid Grade";
        return 0;
    }
    
    cout << "Your average is: " << average_number << endl;
    cout << "Your average final is: " << average_letter << endl;

    return 0;
}
