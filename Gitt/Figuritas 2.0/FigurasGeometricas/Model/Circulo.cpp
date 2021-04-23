#include "Circulo.h"

//Inicializa la variable PI que es estática y constante
const float Circulo::PI = 3.1416;

//CONSTRUCTORES CIRCULO
Circulo::Circulo()
{
}

Circulo::Circulo(float radio, string color) : FiguraGeometrica(color)
{

    this->radio = radio;
}

//METODOS CIRCULO

void Circulo::calcularArea()
{

    this->area = PI * (radio * radio);

}

void Circulo::calcularPerimetro()
{

    this->perimetro = (2 * PI) * radio;
}

float Circulo::getRadio()
{
    return this->radio;
}

void Circulo::setRadio(float radio)
{
    this->radio = radio;
}

void Circulo::mostrarFigura(){
    FiguraGeometrica::mostrarFigura();

    if (this->area == 0 || this->perimetro == 0){
        if(this->area == 0)
            calcularArea();
        if(this->perimetro == 0)
            calcularPerimetro();
    }

    cout << "El radio es: " << this->radio << endl;
    cout << "El area es: " << this->area << endl;
    cout << "El perimetro es: " << this->perimetro << endl;
}