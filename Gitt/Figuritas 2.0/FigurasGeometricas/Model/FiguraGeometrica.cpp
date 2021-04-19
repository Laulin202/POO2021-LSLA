#include "FiguraGeometrica.h"

//CONSTRUCTORES FIGURAGEOMETRICA


FiguraGeometrica::FiguraGeometrica(){

}

FiguraGeometrica::FiguraGeometrica( string color ){
    this->area = 0.0;
    this->perimetro= 0.0;
    this->color = color;
}

//FUNCIONES FIGURAGEOMETRICA

void FiguraGeometrica::mostrarFigura(){
    cout << "El color es: " << this->color << endl;
}

float  FiguraGeometrica::getArea(){
    return this->area;
}
float  FiguraGeometrica::getPerimetro(){
    return this->perimetro;
}


void   FiguraGeometrica::setArea(float area){
    this->area = area;
}
void   FiguraGeometrica::setPerimetro(float perimetro){
    this->perimetro = area;
}