#include <iostream>

int main() {
  double pesos;
  double reais;
  double soles;
  double dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  dollars = (.00025 * pesos) + (.18 * reais) + (.27 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";




// pesos 1 = .00025$
// reais 1 = .18
// soles 1 = .27

  
  
}