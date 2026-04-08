/* El programa debe solicitar diez números al usuario, almacenarlos en un
arreglo y luego mostrar la suma de los elementos del arreglo en total. */

#include <iostream>

int main() {
  const int numNumeros = 10;
  double numeros[numNumeros];
  double suma = 0;

  // Solicitar diez numeros
  std::cout << "Ingrese " << numNumeros << " números:" << std::endl;
  for (int i = 0; i < numNumeros; ++i) {
    std::cout << "Número " << (i + 1) << ": ";
    std::cin >> numeros[i];
    suma += numeros[i]; // Sumar el número al total
  }

  // Mostrar la suma de los elementos del arreglo
  std::cout << "La suma de los números ingresados es: " << suma << std::endl;

  return 0;
}