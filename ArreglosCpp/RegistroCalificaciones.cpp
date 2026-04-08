/* El programa debe solicitar las calificaciones de diez estudiantes con el uso
de validaciones (0-100). Luego mostrar el promedio, la calificacion mas alta, la
mas baja, y cuantos aprobaron (>=70) */

#include <iostream>
#include <limits> // Para límites numéricos y manejo de errores de entrada

int main() {
  const int numEstudiantes = 10;
  int calificaciones[numEstudiantes];
  int suma = 0;      // Acumulador para calcular el promedio
  int maximo = 0;    // Inicializar máximo con el valor más bajo posible
  int minimo = 100;  // Inicializar mínimo con el valor más alto posible
  int aprobados = 0; // Contador para estudiantes aprobados
                     // Solicitar calificaciones con validación
  for (int i = 0; i < numEstudiantes; ++i) {
    int valor;
    while (true) {
      std::cout << "Ingrese la calificación del estudiante " << (i + 1)
                << " (0-100): ";
      std::cin >> valor;

      if (std::cin
              .fail()) {  // Verificar si la entrada es inválida (no numérica)
        std::cin.clear(); // limpiar el estado de error
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                        '\n'); // descartar resto de la línea
        std::cout << "Entrada inválida: ingrese un número entero.\n";
      } else if (valor < 0 || valor > 100) {
        std::cout << "Valor fuera de rango: debe estar entre 0 y 100.\n";
      } else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                        '\n'); // descartar resto de la línea
        break;
      }
    }
    // Almacenar la calificación y actualizar estadísticas
    calificaciones[i] = valor;
    suma += valor;
    if (valor > maximo)
      maximo = valor;
    if (valor < minimo)
      minimo = valor;
    if (valor >= 70)
      aprobados++;
  }
  // Calcular y mostrar resultados
  double promedio = static_cast<double>(suma) / numEstudiantes;
  std::cout << "Promedio: " << promedio << std::endl;
  std::cout << "Calificación más alta: " << maximo << std::endl;
  std::cout << "Calificación más baja: " << minimo << std::endl;
  std::cout << "Cantidad de estudiantes aprobados: " << aprobados << std::endl;

  return 0;
}