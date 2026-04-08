/* El programa debe llenar una lista con diez numeros enteros aleatorios entre 1
y 100, despues separarlos en dos listas, pares e impares */

#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <iostream>

int main() {
  const int SIZE = 10;
  int numeros[SIZE];
  int pares[SIZE];
  int impares[SIZE];
  int contadorPares = 0;
  int contadorImpares = 0;

  srand(time(nullptr)); // Inicializa la semilla para generar numeros distintos
                        // en cada ejecucion

  for (int i = 0; i < SIZE; ++i) {
    numeros[i] = rand() % 100 + 1; // Genera numeros entre 1 y 100

    if (numeros[i] % 2 == 0) {
      pares[contadorPares] = numeros[i];
      contadorPares++; // Marca la siguiente posicion libre en el arreglo pares
    } else {
      impares[contadorImpares] = numeros[i];
      contadorImpares++; // Marca la siguiente posicion libre en el arreglo
                         // impares
    }
  }

  std::cout << "Lista original:" << std::endl;
  for (int i = 0; i < SIZE; ++i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl << std::endl;

  std::cout << "Numeros pares:" << std::endl;
  for (int i = 0; i < contadorPares; ++i) {
    std::cout << pares[i] << " ";
  }
  std::cout << std::endl << std::endl;

  std::cout << "Numeros impares:" << std::endl;
  for (int i = 0; i < contadorImpares; ++i) {
    std::cout << impares[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}