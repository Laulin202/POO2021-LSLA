#ifndef TIENDA_H
#define TIENDA_H

#include <iostream>
#include <list>
#include <string>

#include "producto.h"
#include "cliente.h"
#include "venta.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;


//CLASE TIENDA 

class Tienda{
    private:
        string nombre;
        string nombreDueno;
        int capClient;
        int capProducto;
        list<Producto> listaProductos; //list<Clase> nombre_de_lista
        list<Cliente> listaCliente;
        list<Venta> listaVenta;
    public:
        Tienda();
        void mostrarTodosProducto();
        void mostrarTodosCliente();
        void agregarProducto();
        void agregarCliente();
        Producto buscarProducto( int );
        Cliente buscarCliente( int );
        void vender();


};

#endif