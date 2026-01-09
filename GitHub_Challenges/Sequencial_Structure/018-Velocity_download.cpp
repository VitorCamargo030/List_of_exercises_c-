#include <iostream>

/*Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).*/
int main(){
    
    double download{0}, velocity_mbps{0};
    int result{0};

    std::cout << "\n";
  
    std::cout << "Welcome to: Calculator of the velocity of download!" << "\n";

    std::cout << "Enter the size of the download: ";
    std::cin >> download;

    std::cout << "Enter the velocity of download in mbps: ";
    std::cin >> velocity_mbps;

    result = (download * 8) / velocity_mbps;

    std::cout << "Will take " << result << " minutes for the download be done!";

    std::cout << "\n";
    return 0;
}

