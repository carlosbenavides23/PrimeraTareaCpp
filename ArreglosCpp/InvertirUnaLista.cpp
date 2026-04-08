/* El programa debe solicitar al usuario que ingrese 10 numeros, almacenarlos en
 una lista, y luego mostrar los numeros en orden inverso. */

#include <iostream>
#include <limits>

int main() {
  const int numNumeros = 10;
  double numeros[numNumeros];

  std::cout << "Ingrese " << numNumeros << " numeros:" << std::endl;

  for (int i = 0; i < numNumeros; ++i) {
    while (true) {
      std::cout << "Numero " << (i + 1) << ": ";
      std::cin >> numeros[i];

      if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Debe ingresar un numero.\n";
      } else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        break;
      }
    }
  }

  std::cout << "Los numeros en orden inverso son:" << std::endl;
  for (int i = numNumeros - 1; i >= 0; --i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}