#include <cmath>

namespace Geometria {
    double calcularAreaDecagono(double lado) {
        return 2.5 * lado * lado * (1 + sqrt(5));
    }
}