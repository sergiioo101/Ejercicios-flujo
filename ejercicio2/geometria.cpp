#include "geometria.h"
#include "triangulo.cpp"
#include "circulo.cpp"
#include "pentagono.cpp"
#include "decagono.cpp"
#include "cuadrado.cpp"

namespace Geometria {
    void calcularYMostrarAreaTriangulo(std::istream& input, std::ostream& output) {
        double base, altura;
        input >> base >> altura;
        output << Triangulo::calcularAreaTriangulo(base, altura);
    }

    void calcularYMostrarAreaCirculo(std::istream& input, std::ostream& output) {
        double radio;
        input >> radio;
        output << Circulo::calcularAreaCirculo(radio);
    }

    void calcularYMostrarAreaPentagono(std::istream& input, std::ostream& output) {
        double lado, apotema;
        input >> lado >> apotema;
        output << Pentagono::calcularAreaPentagono(lado, apotema);
    }

    void calcularYMostrarAreaDecagono(std::istream& input, std::ostream& output) {
        double lado;
        input >> lado;
        output << Decagono::calcularAreaDecagono(lado);
    }

    void calcularYMostrarAreaCuadrado(std::istream& input, std::ostream& output) {
        double lado;
        input >> lado;
        output << Cuadrado::calcularAreaCuadrado(lado);
    }
}
