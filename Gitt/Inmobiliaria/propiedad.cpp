#include "propiedad.h"

//CONSTRUCTORES

Propiedad::Propiedad(){}

Propiedad::Propiedad( string codigo, string area, int numAlcobas, int numParqueaderos, int numBanos, tipoPaga tipoAdquisicion, tipoApartamento tipo, string descripcion){
    
    this->codigo = codigo;
    this->area = area;
    this->numAlcobas = numAlcobas;
    this->numParqueaderos = numParqueaderos;
    this->numBanos = numBanos;
    this->tipoAdquisicion = tipoAdquisicion;
    this->tipo = tipo;
    this->descripcion = descripcion;

}


