#include <iostream>
#include "heptagono.cpp"
#include "circunferencia.cpp"
#include "rectangulo.cpp"

using namespace std;

int main() {
    Geometria::Circulo c(5);
    cout << "Circulo:" << endl;
    cout << "Area: " << c.calcularArea() << endl;
    cout << "Perimetro: " << c.calcularPerimetro() << endl;

    cout << "\nPulse Enter para continuar...";
    cin.get();

    Geometria::Heptagono h(5);
    cout << "\nHeptagono:" << endl;
    cout << "Area: " << h.calcularArea() << endl;
    cout << "Perimetro: " << h.calcularPerimetro() << endl;

    cout << "\nPulse Enter para continuar...";
    cin.get();

    Geometria::Rectangulo r(5, 3);
    cout << "\nRectangulo:" << endl;
    cout << "Area: " << r.calcularArea() << endl;
    cout << "Perimetro: " << r.calcularPerimetro() << endl;

    cout << "\nPulse Enter para salir...";
    cin.get();

    return 0;
}

