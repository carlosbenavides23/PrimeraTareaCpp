/* Dada una lista de palabras, solicita al usuario si existe esa palabra o no en
 la lista. */

#include <iostream>
#include <string> // Para usar std::string

int main() {
  const int numPalabras = 5;
  std::string palabras[numPalabras] = {
      "hola", "mundo", "c++", "programacion",
      "arreglo"};             // Lista de palabras predefinida
  std::string palabraBuscada; // Variable para almacenar la palabra que el
                              // usuario desea buscar

  std::cout << "Ingrese la palabra a buscar: ";
  std::cin >> palabraBuscada;

  // Buscar la palabra en el arreglo
  bool encontrada = false; // Variable para indicar si la palabra fue encontrada
  for (int i = 0; i < numPalabras; ++i) {
    if (palabras[i] == palabraBuscada) {
      encontrada = true;
      break;
    }
  }

  // Mostrar el resultado
  if (encontrada) {
    std::cout << "La palabra '" << palabraBuscada << "' existe en la lista."
              << std::endl;
  } else {
    std::cout << "La palabra '" << palabraBuscada << "' no existe en la lista."
              << std::endl;
  }

  return 0;
}