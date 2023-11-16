namespace Ciencia {
    namespace Quimica {
        const double constante_avogadro = 6.022e23;

        double calcularMoles(double particulas) {
            return particulas / constante_avogadro;
        }
    }
}