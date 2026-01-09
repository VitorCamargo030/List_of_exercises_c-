#include <iostream>

using namespace std;

/*Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar: A mensagem "Aprovado", se a média alcançada for maior ou igual a sete; A mensagem "Reprovado", se a média for menor do que sete; A mensagem "Aprovado com Distinção", se a média for igual a dez.*/
int main() {
    // Write C++ code here
    int note1{0}, note2{0}, average{0};
    
    cout << "Welcome to: Your average of notes" << endl;
    
    cout << "Enter your note 1 and 2: ";
    cin >> note1 >> note2;
    
    average = (note1 + note2) / 2;

    cout << "Your average: " << average << endl;
    if(average >= 7)
        cout << "Approved!";
    else if(average < 7)
        cout << "Failed!";
    else
        cout << "Approved with distinction!";

    return 0;
}
