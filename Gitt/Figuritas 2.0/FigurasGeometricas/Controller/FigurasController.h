#ifndef FIGURAS_CONTROLLER_H
// Guardas
#define FIGURAS_CONTROLLER_H

#include "../Model/Circulo.h"
#include "../Model/Triangulo.h"
#include "../Model/Rectangulo.h"

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

public:
    // Retorna referencia a la lista de rectangulos
    
    void agregarRectagulo(float largo, float ancho);
    void agregarTriagulo(float base, float altura, string color);
    void agregarCirculo(float radio);

    /**
       * Retorna la referencia al rectangulo que tenga el mayor ancho       
       *
    */
    Rectangulo &encontrarMayorAncho();

    // TO-DO

    list<Rectangulo>& getListaRectangulo();
    list<Circulo>&  getListaCirculo(); 
    list<Triangulo>& getListaTriangulo(); 
    
};


#endif //FIGURAS_CONTROLLER_H