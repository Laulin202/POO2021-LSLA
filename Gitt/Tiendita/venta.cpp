#include "venta.h"

//CONSTRUCTORES VENTA

Venta::Venta(){}

Venta::Venta(Cliente cliente, string fecha, float valorTotal, float IVATotal, int id){
    this->cliente = cliente;
    this->fecha = fecha;
    this->valorTotal = valorTotal;
    this->IVATotal = IVATotal;
    this->id = id;

}

//METODOS VENTA

void Venta::agregarDetalleVenta( Producto producto, float valor, float IVA, int cantidadProductos){
    this->listaDetalleVenta.push_back(DetalleVenta( producto, valor, IVA, cantidadProductos));
}

void Venta::agregarDatos(Cliente cliente, string fecha, float valorTotal, float IVATotal, int id ){
    this->cliente = cliente;
    this->fecha = fecha;
    this->valorTotal = valorTotal;
    this->IVATotal = IVATotal;
    this->id = id;

}

