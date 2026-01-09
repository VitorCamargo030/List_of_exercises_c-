#include <iostream>
#include <algorithm>
#include <vector>

/*Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. 
As perguntas são: 
"Telefonou para a vítima?"
"Esteve no local do crime?"
"Mora perto da vítima?"
"Devia para a vítima?"
"Já trabalhou com a vítima?"

O programa deve no final emitir uma classificação sobre a participação
da pessoa no crime.

Se a pessoa responder positivamente a 2 questões ela deve ser
classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como
"Assassino". Caso contrário, ele será classificado como "Inocente".*/
int main() {
    // Write C++ code here
    std::vector<char> answer_total(4);
    char answer1{}, answer2{}, answer3{}, answer4{}, answer5{};
    int count{};
    std::string sentence{};
    
    std::cout << "Welcome to: Finding the killer!" << "\n";
    std::cout << "Answer the questions with: \nY: Yes \nN: No" << "\n";
    
    std::cout << "\nDid you call the victim? ";
    std::cin >> answer1;
    std::cout << "Were you at the crime scene? ";
    std::cin >> answer2;
    std::cout << "Do you live near the victim? ";
    std::cin >> answer3;
    std::cout << "Did he owe the victim money? ";
    std::cin >> answer4;
    std::cout << "Have you worked with the victim before? ";
    std::cin >> answer5;

    answer_total[0] = answer1;
    answer_total[1] = answer2;
    answer_total[2] = answer3;
    answer_total[3] = answer4;
    answer_total[4] = answer5;
    
    count = std::count(answer_total.begin(), answer_total.end(), 'y');
    
    if(count == 2)
        sentence = "Suspect";
    else if(count == 3 || count == 4)
        sentence = "Accomplice";
    else if(count == 5)
        sentence = "Killer";
    else
        sentence = "Innocent";
    
    std::cout << count;
    std::cout << sentence;

    return 0;
}
