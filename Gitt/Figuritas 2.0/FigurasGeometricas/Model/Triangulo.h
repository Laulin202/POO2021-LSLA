#ifndef TRINANGULO_H
// Guardas
#define TRIANGULO_H

//CLASE TRIANGULO

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "FiguraGeometrica.h"

using std::cin;
using std::cout;
using std::endl;

class Triangulo : public FiguraGeometrica{
    private:
        float base, altura;

    public:
        Triangulo();
        Triangulo(float base, float altura, string color);
        void calcularArea(); //POLIMORFISMO
        void calcularPerimetro();
        void mostrarFigura();
};

#endif //TRIANGULO_H 