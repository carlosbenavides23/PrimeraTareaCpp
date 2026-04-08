/* El programa debe ingresar los montos de venta diaria, calcular el total y el
promedio semanal y mostrar que dia tuvo mayor y menor venta */

#include <iomanip> // Para manipular el formato de salida (std::fixed, std::setprecision)
#include <iostream>
#include <limits> // Para límites numéricos y manejo de errores de entrada

int main() {
  const int diasSemana = 7;
  double ventas[diasSemana];
  double total = 0;
  double maximo =
      std::numeric_limits<double>::lowest(); /* Inicializar máximo con el valor
                                             más bajo posible*/
  double minimo =
      std::numeric_limits<double>::max(); /* Inicializar mínimo con el valor más
                                           alto posible */
  int diaMaximo = 0;
  int diaMinimo = 0;

  std::cout << "Registro de ventas diarias" << std::endl;
  std::cout << "Ingrese las ventas de los 7 dias en cordobas (C$)."
            << std::endl;
  std::cout << "No se permiten letras ni montos negativos." << std::endl
            << std::endl;

  // Bucle para ingresar las ventas de cada día con validación
  for (int i = 0; i < diasSemana; ++i) {
    while (true) {
      std::cout << "Ingrese el monto de venta del dia " << (i + 1)
                << " en C$: ";
      std::cin >> ventas[i];

      // Verificar si la entrada es inválida (no numérica)
      if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                        '\n'); // Ignorar el resto de la línea
        std::cout << "Error: entrada invalida. Debe ingresar un numero."
                  << std::endl;
      } else if (ventas[i] < 0) { // Verificar si el monto es negativo
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error: el monto no puede ser negativo. Intente de nuevo."
                  << std::endl;
      } else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                        '\n'); // Limpiar el buffer
        break;                 // Salir del bucle de validación
      }
    }

    total += ventas[i]; // Acumular el total de ventas

    // Actualizar máximo y día correspondiente
    if (ventas[i] > maximo) {
      maximo = ventas[i];
      diaMaximo = i + 1;
    }
    // Actualizar mínimo y día correspondiente
    if (ventas[i] < minimo) {
      minimo = ventas[i];
      diaMinimo = i + 1;
    }
  }

  double promedio = total / diasSemana;

  // Configurar el formato de salida para mostrar 2 decimales fijos
  std::cout << std::fixed << std::setprecision(2);
  std::cout << std::endl;
  std::cout << "Resumen de ventas" << std::endl;

  std::cout << "Total de ventas semanales: C$ " << total << std::endl;
  std::cout << "Promedio de ventas diarias: C$ " << promedio << std::endl;

  std::cout << "Dia con mayor venta: Dia " << diaMaximo << " con C$ " << maximo
            << std::endl;
  std::cout << "Dia con menor venta: Dia " << diaMinimo << " con C$ " << minimo
            << std::endl;

  return 0;
}
