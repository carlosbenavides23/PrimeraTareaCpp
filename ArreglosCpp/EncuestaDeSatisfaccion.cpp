/* El programa debe almacenar las encuestas de satisfaccion de 20 personas que
valoran un servicio del 1 al 5. Despues almacenar las respuestas en una lista,
contar cuantas personas eligieron cada puntuacion, y por ultimo mostrar el
porcentaje de satisfaccion (4 y 5) */

#include <iomanip> // Para manipular el formato de salida (std::fixed, std::setprecision)
#include <iostream>
#include <limits> // Para límites numéricos y manejo de errores de entrada

int main() {
  const int numEncuestas = 20;
  int encuestas[numEncuestas];
  int conteo[5] = {0}; // Para contar las respuestas de 1 a 5
                       // Solicitar las encuestas con validación
  for (int i = 0; i < numEncuestas; ++i) {
    int valor;

    while (true) {
      std::cout << "Ingrese la puntuacion de satisfaccion para la persona "
                << (i + 1) << " (1-5): ";
      std::cin >> valor;
      // Validar la entrada
      if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida: ingrese un numero entero.\n";
      } else if (valor < 1 || valor > 5) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Valor fuera de rango: debe estar entre 1 y 5.\n";
      } else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        break;
      }
    }

    encuestas[i] = valor; // Almacenar la respuesta en el arreglo
    conteo[valor -
           1]++; // Incrementar el conteo para la puntuacion que corresponde
  }
  // Calcular el porcentaje de satisfaccion (4 y 5)
  int totalSatisfechos = conteo[3] + conteo[4];
  double porcentajeSatisfaccion =
      static_cast<double>(totalSatisfechos) / numEncuestas * 100;

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "\nResumen de resultados\n";

  for (int i = 0; i < 5; ++i) {
    std::cout << "Cantidad que eligio " << (i + 1) << ": " << conteo[i] << '\n';
  }

  std::cout << "Porcentaje de satisfaccion (4 y 5): " << porcentajeSatisfaccion
            << "%\n";

  return 0;
}