/* El programa debe registrar los sueldos de 12 empleados, calcular cuantos
ganan mas de $1000, hallar el sueldo promedio e identificar si algun sueldo es
exactamente $0. */

#include <iomanip> // Para manipular el formato de salida (std::fixed, std::setprecision)
#include <iostream>
#include <limits> // Para límites numéricos y manejo de errores de entrada

int main() {
  const int numEmpleados = 12;
  double sueldos[numEmpleados];
  double suma = 0;    // Acumulador para calcular el promedio
  int mayoresMil = 0; // Contador para empleados que ganan más de $1000
  bool haySueldoCero =
      false; // Variable para detectar si hay algún sueldo igual a $0

  std::cout << "Ingrese los sueldos de los 12 empleados:" << std::endl;

  // Bucle para ingresar los sueldos con validación
  for (int i = 0; i < numEmpleados; ++i) {
    while (true) {
      std::cout << "Sueldo del empleado " << (i + 1) << ": $";
      std::cin >> sueldos[i];

      if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Debe ingresar un numero.\n";
      } else if (sueldos[i] < 0) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "El sueldo no puede ser negativo.\n";
      } else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        break;
      }
    }

    suma +=
        sueldos[i]; // Acumular la suma de los sueldos para calcular el promedio

    if (sueldos[i] > 1000) {
      mayoresMil++;
    }

    if (sueldos[i] == 0) {
      haySueldoCero = true;
    }
  }

  double promedio = suma / numEmpleados;

  // Mostrar los resultados
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "\nResumen de sueldos" << std::endl;
  std::cout << "Cantidad que gana mas de $1000: " << mayoresMil << std::endl;
  std::cout << "Sueldo promedio: $" << promedio << std::endl;

  if (haySueldoCero) {
    std::cout << "Advertencia: se detecto al menos un sueldo igual a $0."
              << std::endl;
  } else {
    std::cout << "No se detectaron sueldos iguales a $0." << std::endl;
  }

  return 0;
}