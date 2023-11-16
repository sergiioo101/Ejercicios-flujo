#include <iostream>
#include <sstream>
#include "geometria.h"

using namespace std;

int main() {
    double baseTriangulo = 5.0;
    double alturaTriangulo = 3.0;
    double radioCirculo = 2.5;
    double ladoPentagono = 5.0;
    double apotemaPentagono = 3.0;
    double ladoDecagono = 8.0;
    double ladoCuadrado = 4.0;

    // Área del triángulo
    istringstream inputTriangulo(to_string(baseTriangulo) + " " + to_string(alturaTriangulo));
    ostringstream outputTriangulo;
    Geometria::calcularYMostrarAreaTriangulo(inputTriangulo, outputTriangulo);
    cout << "Área del triángulo: " << outputTriangulo.str() << endl;

    // Área del círculo
    istringstream inputCirculo(to_string(radioCirculo));
    ostringstream outputCirculo;
    Geometria::calcularYMostrarAreaCirculo(inputCirculo, outputCirculo);
    cout << "Área del círculo: " << outputCirculo.str() << endl;

    // Área del pentágono
    istringstream inputPentagono(to_string(ladoPentagono) + " " + to_string(apotemaPentagono));
    ostringstream outputPentagono;
    Geometria::calcularYMostrarAreaPentagono(inputPentagono, outputPentagono);
    cout << "Área del pentágono: " << outputPentagono.str() << endl;

    // Área del decágono
    istringstream inputDecagono(to_string(ladoDecagono));
    ostringstream outputDecagono;
    Geometria::calcularYMostrarAreaDecagono(inputDecagono, outputDecagono);
    cout << "Área del decágono: " << outputDecagono.str() << endl;

    // Área del cuadrado
    istringstream inputCuadrado(to_string(ladoCuadrado));
    ostringstream outputCuadrado;
    Geometria::calcularYMostrarAreaCuadrado(inputCuadrado, outputCuadrado);
    cout << "Área del cuadrado: " << outputCuadrado.str() << endl;

    return 0;
}

