#ifndef DETALLEVENTA_H
#define DETALLEVENTA_H

#include <iostream>
#include <list>
#include <string>

#include "producto.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

//CLASE DETALLEVENTA

class DetalleVenta{
    private:
        Producto producto;
        float valor;
        float IVA;
        int cantidadProducto;  
    public:
        DetalleVenta();
        DetalleVenta( Producto, float, float, int);

};


#endif 