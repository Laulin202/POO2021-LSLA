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

    protected: //atributos
        string color;
        float area, perimetro;

    public:
        FiguraGeometrica(); //NO OLVIDAR
        FiguraGeometrica(string color);

        virtual void mostrarFigura();            //Este metodo virtual no es puro por que el metodo del clase padre si hace algo y si se llega a utilizar.
        virtual void calcularArea() = 0;         //Estos son metodos virtuales PUROS, es decir que nunca se utilizara el metodo del padre,
        virtual void calcularPerimetro() = 0;    //saltara directamente a usar la clase hija que llamo al su metodo calcular
        float getColor();
        void setColor(string);
        
        float getArea();
        float getPerimetro();
        void setArea( float area);
        void setPerimetro( float perimetro);
};

#endif //FIGURA_GEOMETRICA_H