/* El programa debe generar 30 numeros aleatorios entre 1 y 100, almacenarlos,
separarlos en listas de pares e impares, y mostrar la suma y cantidad de cada
grupo. */

#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <iostream>

int main() {
  // Definir el tamaño del arreglo y las variables necesarias
  const int numNumeros = 30;
  int numeros[numNumeros];
  int pares[numNumeros];
  int impares[numNumeros];
  int contadorPares = 0;
  int contadorImpares = 0;
  int sumaPares = 0;
  int sumaImpares = 0;

  srand(time(nullptr)); // Inicializa la semilla para obtener numeros distintos
                        // en cada ejecucion

  for (int i = 0; i < numNumeros; ++i) {
    numeros[i] = rand() % 100 + 1; // Genera numeros en el rango de 1 a 100

    if (numeros[i] % 2 ==
        0) { // Clasifica segun si el residuo entre 2 es 0 o no
      pares[contadorPares] = numeros[i];
      sumaPares += numeros[i];
      contadorPares++; // Marca la siguiente posicion libre en el arreglo pares
    } else {
      impares[contadorImpares] = numeros[i];
      sumaImpares += numeros[i];
      contadorImpares++; // Marca la siguiente posicion libre en el arreglo
                         // impares
    }
  }
  // Mostrar la lista original de numeros generados
  std::cout << "Lista original:" << std::endl;
  for (int i = 0; i < numNumeros; ++i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl << std::endl;

  std::cout << "Numeros pares:" << std::endl;
  for (int i = 0; i < contadorPares;
       ++i) { // Solo recorre las posiciones realmente llenas
    std::cout << pares[i] << " ";
  }
  std::cout << std::endl;
  std::cout << "Cantidad de pares: " << contadorPares << std::endl;
  std::cout << "Suma de pares: " << sumaPares << std::endl << std::endl;

  std::cout << "Numeros impares:" << std::endl;
  for (int i = 0; i < contadorImpares;
       ++i) { // Evita mostrar posiciones no utilizadas
    std::cout << impares[i] << " ";
  }
  std::cout << std::endl;
  std::cout << "Cantidad de impares: " << contadorImpares << std::endl;
  std::cout << "Suma de impares: " << sumaImpares << std::endl;

  return 0;
}