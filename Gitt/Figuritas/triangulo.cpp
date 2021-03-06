#include <iostream>
#include <cstdlib>
#include "triangulo.h"


using namespace std;

//CONSTRUCTORES TRIANGULO

Triangulo::Triangulo(){}

Triangulo::Triangulo(float lado1, float base, float lado2){

    this->lado1 = lado1;
    this->base = base;
    this->lado2 = lado2;
}

//METODOS TRIANGULO

void Triangulo::calcularArea(){
    float area;
}

void Triangulo::calcularPerimetro(){
    float perimetro;

    perimetro = lado1 *  + base + lado2;
    cout << "El perimetro de un triangulo es: "<< perimetro << endl;

}

