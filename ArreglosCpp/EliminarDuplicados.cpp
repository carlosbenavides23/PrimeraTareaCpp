/* Dada una lista con valores repetidos, el programa debe crear una nueva lista
 sin duplicados.*/

#include <iostream>

int main() {
  const int numNumeros = 10;
  int numeros[numNumeros] = {1, 2, 3, 4, 5, 2, 3, 6, 7, 8};
  int sinDuplicados[numNumeros];
  int nuevoTamaño = 0;
  // Mostrar la lista original
  std::cout << "Lista original:" << std::endl;
  for (int i = 0; i < numNumeros; ++i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl << std::endl;
  // Recorrer la lista original y agregar solo los elementos únicos a la nueva
  // lista
  for (int i = 0; i < numNumeros; ++i) {
    bool esDuplicado = false;
    for (int j = 0; j < nuevoTamaño; ++j) {
      if (numeros[i] == sinDuplicados[j]) {
        esDuplicado = true;
        break;
      }
    }
    if (!esDuplicado) {
      sinDuplicados[nuevoTamaño] = numeros[i];
      nuevoTamaño++;
    }
  }
  // Mostrar la lista sin duplicados
  std::cout << "Lista sin duplicados:" << std::endl;
  for (int i = 0; i < nuevoTamaño; ++i) {
    std::cout << sinDuplicados[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}