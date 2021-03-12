#ifndef VENTA_H
#define VENTA_H

#include <iostream>
#include <list>
#include <string>

#include "detalleVenta.h"
#include "cliente.h"
#include "producto.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

//CLASE VENTA

class Venta{
    private:
        Cliente cliente;
        string fecha;
        float valorTotal;
        list<DetalleVenta> listaDetalleVenta;
        float IVATotal;
        int id;
    public:
        Venta();
        Venta(Cliente, string, float, float, int);
        void agregarDetalleVenta( Producto, float, float, int );
        void agregarDatos(Cliente, string, float, float, int);

};


#endif