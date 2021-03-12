#include "detalleVenta.h"

//CONSTRUCTORES DETALLEVENTA

DetalleVenta::DetalleVenta(){}

DetalleVenta::DetalleVenta(Producto producto, float valor, float IVA, int cantidadProductos){
    this->producto = producto;
    this->valor = valor;
    this->IVA = IVA;
    this->cantidadProducto = cantidadProducto;
}