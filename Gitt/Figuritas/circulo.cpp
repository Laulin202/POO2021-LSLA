#include <iostream>
#include <cstdlib>
#include "Circulo.h"



using namespace std;


//CONSTRUCTORES CIRCULO

Circulo::Circulo(){}

Circulo::Circulo( float radio){

    this->radio = radio;
}

//METODOS CIRCULO

void Circulo::calcularArea(){
    float area;
    area = PI * (radio*radio);
    cout << "El area del circulo es: "<< area << endl; 
    
}

void Circulo::calcularPerimetro(){
    float perimetro;
    perimetro = ( 2 * PI ) * radio;
    cout << "El perimetro del circulo es: "<< perimetro << endl;

}

float Circulo::getRadio(){

    return this->radio;

}

void Circulo::setRadio( float radio){

    this->radio = radio;
}