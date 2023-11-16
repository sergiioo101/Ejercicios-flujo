namespace Geometria {
    class Rectangulo {
    private:
        double lado1;
        double lado2;
    public:
        Rectangulo(double l1, double l2) : lado1(l1), lado2(l2) {}

        double calcularArea() {
            return lado1 * lado2;
        }

        double calcularPerimetro() {
            return 2 * (lado1 + lado2);
        }
    };
}

