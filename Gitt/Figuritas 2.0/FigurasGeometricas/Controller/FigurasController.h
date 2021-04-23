#ifndef FIGURAS_CONTROLLER_H
// Guardas
#define FIGURAS_CONTROLLER_H

#include "../Model/FiguraGeometrica.h" //Nuevo
#include "../Model/Circulo.h"
#include "../Model/Triangulo.h"
#include "../Model/Rectangulo.h"
#include "../Model/Cuadrado.h"

#include <iostream>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::list;

class FigurasController
{
private:
    //constante y estático para declararla constante para todos los objetos.
    const static int MAX_ITEMS;
    list<Rectangulo> listaRectangulo;
    list<Circulo> listaCirculo;
    list<Triangulo> listaTriangulo;
    list<Cuadrado> listaCuadrado;
    //NUEVO:
    list<FiguraGeometrica *> pListaFiguras;

public:
    // Retorna referencia a la lista de rectangulos
    
    void agregarRectagulo(float largo, float ancho, string color);
    void agregarTriagulo(float base, float altura, string color);
    void agregarCirculo(float radio, string color);
    void agregarCuadrado(float lado, string color);

    /**
       * Retorna la referencia al rectangulo que tenga el mayor ancho       
       *
    */
    Rectangulo &encontrarMayorAncho();

    // TO-DO

    list<Rectangulo>& getListaRectangulo();
    list<Circulo>&  getListaCirculo(); 
    list<Triangulo>& getListaTriangulo(); 
    list<Cuadrado>& getListaCuadrado();

    list<FiguraGeometrica *> &getListaFiguras();
    void llenarListaTodosDummy();
    
};


#endif //FIGURAS_CONTROLLER_H