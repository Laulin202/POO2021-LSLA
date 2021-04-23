#ifndef CIRCULO_H
// Guardas
#define CIRCULO_H

#include <iostream>
#include <cstdlib>
#include "FiguraGeometrica.h"

using std::cin;
using std::cout;
using std::endl;

//CLASE CIRCULO

class Circulo : public FiguraGeometrica{

    private: //atributos
        float radio;
        const static float PI;

    public:
        Circulo(); //NO OLVIDAR
        Circulo(float, string);
        void calcularArea();
        void calcularPerimetro();
        float getRadio();
        void setRadio(float);
        void mostrarFigura();
};

#endif //CIRCULO_H 