#include <iostream>

/*Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual
ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.*/
int main() {
    // Write C++ code here
    std::string username{}, password{};
    
    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "Enter your password: ";
    std::cin >> password;
    
    for(int i=0;password == username;i++){
        std::cout << "The password is equal the username, enter a different password: ";
        std::cin >> password;
    }
    std::cout << "Login successful!";

    return 0;
}
