#include <cmath>

namespace Geometria {
    class Heptagono {
    private:
        double lado;
    public:
        Heptagono(double l) : lado(l) {}

        double calcularArea() {
            double apotema = lado / (2 * tan(M_PI / 7));
            double perimetro = 7 * lado;
            return (perimetro * apotema) / 2;
        }

        double calcularPerimetro() {
            return 7 * lado;
        }
    };
}