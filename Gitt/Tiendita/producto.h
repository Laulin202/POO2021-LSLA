#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

// CLASE PRODUCTO 

class Producto{
    private:
        string marca;
        string tipoProducto;
        int codigoProducto;
        int existencia;
        float valorProducto;
    public:
        Producto();
        Producto( string, string, int, int, float);
        void mostrarProducto();
        float getValorProducto();
        int getExistencia();
        void setExistencia( int );
        int getCodigoProducto();
};

#endif

