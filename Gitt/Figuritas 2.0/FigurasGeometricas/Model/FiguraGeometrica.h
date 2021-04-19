#ifndef  FIGURA_GEOMETRICA_H
// Guardas
#define FIGURA_GEOMETRICA_H

#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//CLASE FIGURA_GEOMETRICA

class FiguraGeometrica{

    private: //atributos
        string color;
        float area, perimetro;

    public:
        FiguraGeometrica(); //NO OLVIDAR
        FiguraGeometrica(string color);

        void mostrarFigura();
        void calcularArea();
        void calcularPerimetro();
        float getColor();
        void setColor(string);
        
        float getArea();
        float getPerimetro();
        void setArea( float area);
        void setPerimetro( float perimetro);
};

#endif //FIGURA_GEOMETRICA_H