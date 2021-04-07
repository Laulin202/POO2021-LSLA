#ifndef PROPIEDAD_H
#define PROPIEDAD_H

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/*
Código del inmueble, área, número de alcobas, número de parqueaderos, número de baños,  
tipo: arrendamiento/venta, tipo: apartamento, apartaestudio, casa, lote, casa con renta, 
finca, Descripción.  
*/

enum tipoPaga{
    arrendamiento, venta
};

enum tipoApartamento{
    apartamento, apartaestudio, casa, lote, casaRenta, finca
};

class Propiedad{
    private:
        string codigo;
        string area;
        int numAlcobas;
        int numParqueaderos;
        int numBanos;
        tipoPaga tipoAdquisicion;
        tipoApartamento tipo;
        string descripcion;
    public:
        Propiedad(); //constructor por defecto
        Propiedad( string, string, int, int, int, tipoPaga, tipoApartamento, string);
};


#endif