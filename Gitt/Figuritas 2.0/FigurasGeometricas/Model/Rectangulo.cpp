#include "Rectangulo.h"

//CONSTRUCTORES RECTANGULO

Rectangulo::Rectangulo(){}

Rectangulo::Rectangulo(float ancho, float largo, string color) :FiguraGeometrica(color)
{

    this->ancho = ancho;
    this->largo = largo;
}

//METODOS RECTANGULO

void Rectangulo::calcularArea()
{
    this->area = largo * ancho;

}

void Rectangulo::calcularPerimetro()
{
    this->perimetro = (2 * largo) + (2 * ancho);

}

void Rectangulo::mostrarFigura() 
{
    FiguraGeometrica::mostrarFigura();

    if (this->area == 0 || this->perimetro == 0){
        if(this->area == 0)
            calcularArea();
        if(this->perimetro == 0)
            calcularPerimetro();
    } 

    cout << "El ancho es: " << ancho << endl;
    cout << "El largo es: " << largo << endl;
    cout << "El area es: " << this->area << endl;
    cout << "El perimetro es: " << this->perimetro << endl;
         
}

float Rectangulo::getAncho()
{
    return this->ancho;
}

float Rectangulo::getLargo()
{
    return this->largo;
}

void Rectangulo::setAncho(float ancho)
{
    this->ancho = ancho;
}
void Rectangulo::setLargo(float largo)
{
    this->largo = largo;
}
