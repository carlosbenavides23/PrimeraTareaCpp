/* El programa debe leer diez números enteros, almacenarlos en un arreglo y
luego mostrar el contenido del arreglo. */

#include <iostream>
#include <sstream> // Para convertir la entrada de texto a número
#include <string>  // Para usar std::string y std::getline

int main() {
  const int numNumeros = 10;
  int numeros[numNumeros];
  std::string
      entrada; // Variable para almacenar la entrada del usuario como texto

  std::cout << "Ingrese " << numNumeros << " numeros enteros:" << std::endl;

  for (int i = 0; i < numNumeros; ++i) {
    while (true) {
      std::cout << "Numero " << (i + 1)
                << ": ";               // Solicitar el número al usuario
      std::getline(std::cin, entrada); // Leer la entrada como texto para
                                       // validar que sea un número entero

      std::stringstream ss(
          entrada);  // Crear un stringstream para convertir la entrada a número
      int valor;     // Variable para almacenar el número convertido
      char sobrante; // Variable para detectar si hay caracteres extra después
                     // del número

      // Validar que la entrada sea un número entero y no contenga caracteres
      // extra
      if (!(ss >> valor)) {
        std::cout << "Entrada invalida. Debe ingresar un numero entero.\n";
      } else if (ss >> sobrante) {
        std::cout << "Entrada invalida. No se permiten decimales ni caracteres "
                     "extra.\n";
      } else {
        numeros[i] = valor;
        break;
      }
    }
  }
  // Mostrar los números ingresados
  std::cout << "Los numeros ingresados son:" << std::endl;
  for (int i = 0; i < numNumeros; ++i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}