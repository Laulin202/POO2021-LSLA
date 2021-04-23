#ifndef MAIN_H
// Guardas
#define MAIN_H

/* Mostrar menua y validar datos de entrada */
#include "../Controller/FigurasController.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class View
{
private:
    // Objeto de tipo FigurasController para enlazar la logica
    FigurasController controller;

public:
    //pedir datos
    void pedirDatosRectangulo();
    void pedirDatosCirculo();
    void pedirDatosTriangulo(); 
    void pedirDatosCuadrado(); 
    //mostrar datos
    void mostrarRectangulos();
    void mostrarCirculos(); 
    void mostrarTriangulos();
    void mostrarCuadrados();

    void mostrarTodos();

    int mostrarMenu();
    void verPrincipal();
};

#endif //MAIN_H