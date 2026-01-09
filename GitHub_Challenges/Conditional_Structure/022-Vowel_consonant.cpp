#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

/*Faça um programa que verifique se uma letra digitada é vogal ou consoante*/
int main() {
    // Write C++ code here
    unordered_set<char> vowel{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char letter{};
    
    cout << "Welcome to: Your character is a vowel or consonant" << endl;
    
    cout << "Enter your character: ";
    cin >> letter;
    
    if(vowel.count(letter))
        cout << "Your character is a vowel!";
    else
        cout << "Your character is consonant!";

    return 0;
}
