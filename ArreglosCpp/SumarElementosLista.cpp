/* El programa debe solicitar diez números al usuario, almacenarlos en un
arreglo y luego mostrar la suma de los elementos del arreglo en total. */

#include <iostream>
#include <limits> // Para límites numéricos y manejo de errores de entrada

int main() {
  const int numNumeros = 10;
  double numeros[numNumeros];
  double suma = 0;

  // Solicitar diez numeros
  std::cout << "Ingrese " << numNumeros << " números:" << std::endl;
  for (int i = 0; i < numNumeros; ++i) {
    while (true) {
      std::cout << "Número " << (i + 1) << ": ";
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
    suma += numeros[i]; // Sumar el número al total
  }

  // Mostrar la suma de los elementos del arreglo
  std::cout << "La suma de los números ingresados es: " << suma << std::endl;

  return 0;
}
