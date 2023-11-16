#include <iostream>
#include <sstream>
#include <cmath>

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

    int multiplicacion(int a, int b) {
        return a * b;
    }

    int division(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: ¡División por cero!" << std::endl;
            return 0;
        }
    }

    int cuadrado(int a) {
        return a * a;
    }

    double logaritmo(double a) {
        if (a > 0) {
            return std::log(a);
        } else {
            std::cerr << "Error: ¡Logaritmo de un número negativo!" << std::endl;
            return 0;
        }
    }
}

int main() {
    int resultadoSuma, resultadoResta, resultadoMultiplicacion, resultadoDivision, resultadoCuadrado;
    double resultadoLogaritmo;

    // Área del triángulo
    std::ostringstream outputSuma;
    outputSuma << Matematicas::suma(5, 3);
    resultadoSuma = std::stoi(outputSuma.str());
    std::cout << "Suma: " << resultadoSuma << std::endl;

    // Área del círculo
    std::ostringstream outputResta;
    outputResta << Matematicas::resta(5, 3);
    resultadoResta = std::stoi(outputResta.str());
    std::cout << "Resta: " << resultadoResta << std::endl;

    // Área del pentágono
    std::ostringstream outputMultiplicacion;
    outputMultiplicacion << Matematicas::multiplicacion(5, 3);
    resultadoMultiplicacion = std::stoi(outputMultiplicacion.str());
    std::cout << "Multiplicacion: " << resultadoMultiplicacion << std::endl;

    // Área del decágono
    std::ostringstream outputDivision;
    outputDivision << Matematicas::division(6, 2);
    resultadoDivision = std::stoi(outputDivision.str());
    std::cout << "Division: " << resultadoDivision << std::endl;

    // Área del cuadrado
    std::ostringstream outputCuadrado;
    outputCuadrado << Matematicas::cuadrado(5);
    resultadoCuadrado = std::stoi(outputCuadrado.str());
    std::cout << "Cuadrado de 5: " << resultadoCuadrado << std::endl;

    // Área del logaritmo
    std::ostringstream outputLogaritmo;
    outputLogaritmo << Matematicas::logaritmo(100);
    resultadoLogaritmo = std::stod(outputLogaritmo.str());
    std::cout << "Logaritmo de 100: " << resultadoLogaritmo << std::endl;

    return 0;
}
