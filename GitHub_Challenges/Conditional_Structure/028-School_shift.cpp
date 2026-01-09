#include <iostream>

using namespace std;

/*Faça um Programa que pergunte em que turno você estuda. Peça para digitar M
-matutino ou V-Vespertino ou N- Noturno.
Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor
Inválido!", conforme o caso.*/
int main() {
    // Write C++ code here
    char shift{};
    
    cout << "Welcome to: Read and print message for your school shift." << endl;
    
    cout << "Enter three values of products: ";
    cin >> shift;
    
    if(shift == 'M' or shift == 'm')
        cout << "Good morning!";
    else if(shift == 'V' or shift == 'v')
        cout << "Good afternoon!";
    else if(shift == 'N' || shift == 'n')
        cout << "Good night!";
    else
        cout << "Shift invalid.";
    
    return 0;
}
