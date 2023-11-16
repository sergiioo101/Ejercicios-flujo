namespace Ciencia {
    namespace Fisica {
        const double velocidad_luz = 299792458;

        double calcularEnergia(double masa) {
            return masa * velocidad_luz * velocidad_luz;
        }
    }
}