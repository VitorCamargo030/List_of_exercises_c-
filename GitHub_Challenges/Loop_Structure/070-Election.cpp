#include <iostream>

/*Numa eleição existem três candidatos. Faça um programa que peça o número total 
 * de eleitores.Peça para cada eleitor votar e ao final mostrar o número de votos
 * de cada candidato.*/
int election_votes(int candidates){
  int candidate1{}, candidate2{}, candidate3{};

  std::cout << "1: Candidate1 \n2: Candidate2 \n3: Candidate3\n";

  for(int i=0; i < candidates; ++i){
    int vote{};
    std::cout << "Vote: ";
    std::cin >> vote;

    if(vote != 1 && vote != 2 && vote != 3){
      std::cout << "Candidate invalid!";
      --i;
    }
    else if(vote == 1) ++candidate1;
    else if(vote == 2) ++candidate2;
    else ++candidate3;
  }

  std::cout <<"Candidate 1: " << candidate1 << "\nCandidate 2: " << candidate2 << "\nCandidate 3: " << candidate3; 

  return 0;
}

int main(){
  std::cout << "\n";

  election_votes(5);

  std::cout << "\n";
  return 0;
}

