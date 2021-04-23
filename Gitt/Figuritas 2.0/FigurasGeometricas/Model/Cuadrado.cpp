#include "Cuadrado.h"

//CONSTRUCTOR CLASE CUADRADO

Cuadrado::Cuadrado(){   
}

Cuadrado::Cuadrado( float lado, string color):FiguraGeometrica(color){
    this->lado = lado;
}

void Cuadrado::calcularArea(){
    this->area = lado * lado;
}

void Cuadrado::calcularPerimetro(){
    this->perimetro = lado * 4;
}

void Cuadrado::mostrarFigura(){
    FiguraGeometrica::mostrarFigura();

    if (this->area == 0 || this->perimetro == 0){
        if(this->area == 0)
            calcularArea();
        if(this->perimetro == 0)
            calcularPerimetro();
    }

    cout << "El lado es: " << this->lado << endl;
    cout << "El area es: " << this->area << endl;            //atributos protegidos del padre
    cout << "El perimetro es: " << this->perimetro << endl;  //atributos protegidos del padre

}