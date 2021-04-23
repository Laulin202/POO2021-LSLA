#ifndef CUADRADO_H
// Guardas
#define CUADRADO_H

//CLASE RECTANGULO

#include <iostream>
#include <cstdlib>
#include "FiguraGeometrica.h"

using std::cin;
using std::cout;
using std::endl;

class Cuadrado : public FiguraGeometrica{
    private:
        float lado;
    
    public:
        Cuadrado();
        Cuadrado( float lado, string color);
        void calcularArea();
        void calcularPerimetro();
        void mostrarFigura();
};

#endif //CUADRADO_H