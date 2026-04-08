/* El programa, a partir de una lista de numeros reales, debe encontrar el mayor
y el menor numero de la lista. */

#include <iostream>

int main() {
  const int numNumeros = 10;
  double numeros[numNumeros] = {3.5, 7.2, 1.8, 67.0, 4.6,
                                2.3, 8.1, 6.4, 5.9,  0.7};
  double maximo =
      numeros[0]; // Inicializar máximo con el primer elemento del arreglo
  double minimo =
      numeros[0]; // Inicializar mínimo con el primer elemento del arreglo
                  // Recorrer el arreglo para encontrar el máximo y mínimo
  for (int i = 1; i < numNumeros; ++i) {
    if (numeros[i] > maximo) {
      maximo = numeros[i];
    }
    if (numeros[i] < minimo) {
      minimo = numeros[i];
    }
  }
  // Mostrar los resultados
  std::cout << "El número máximo es: " << maximo << std::endl;
  std::cout << "El número mínimo es: " << minimo << std::endl;

  return 0;
}