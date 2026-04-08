/* El programa debe recibir una lista de 10 numeros, contar cuantos son mayores
que 50 */

#include <iostream>

int main() {
  int numeros[10] = {45, 60, 30, 75, 67, 80, 10, 90, 50, 65};
  int contador = 0;

  std::cout << "Lista de numeros:" << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl << std::endl;

  for (int i = 0; i < 10; i++) {
    if (numeros[i] > 50) {
      contador++;
    }
  }

  std::cout << "Cantidad de elementos mayores que 50: " << contador
            << std::endl;

  return 0;
}