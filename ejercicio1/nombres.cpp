#include <iostream>
#include <cmath>
using namespace std;

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
            std::cout << "Error: ¡División por cero!" << std::endl;
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
            std::cout << "Error: ¡Logaritmo de un número negativo!" << std::endl;
            return 0;
        }
    }
}

int main() {
    cout << "Suma: " << Matematicas::suma(5, 3) << endl;
    cout << "Resta: " << Matematicas::resta(5, 3) << endl;
    cout << "Multiplicacion: " << Matematicas::multiplicacion(5, 3) << endl;
    cout << "Division: " << Matematicas::division(6, 2) << endl;
    cout << "Cuadrado de 5: " << Matematicas::cuadrado(5) << endl;
    cout << "Logaritmo de 100: " << Matematicas::logaritmo(100) << endl;
    return 0;
}