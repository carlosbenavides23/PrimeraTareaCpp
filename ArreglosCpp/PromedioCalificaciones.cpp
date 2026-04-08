/* El programa debe solicitar al usuario ocho calificaciones, almacenarlas en un
arreglo y luego mostrar el promedio de las mismas. */

#include <iostream>

int main() {
  const int numCalificaciones = 8;
  double calificaciones[numCalificaciones];
  double suma = 0;

  // Solicitar ocho calificaciones
  std::cout << "Ingrese " << numCalificaciones
            << " calificaciones:" << std::endl;
  for (int i = 0; i < numCalificaciones; ++i) {
    std::cout << "Calificación " << (i + 1) << ": ";
    std::cin >> calificaciones[i];
    suma += calificaciones[i]; // Sumar la calificación al total
  }

  // Calcular y mostrar el promedio
  double promedio = suma / numCalificaciones;
  std::cout << "El promedio de las calificaciones es: " << promedio
            << std::endl;

  return 0;
}