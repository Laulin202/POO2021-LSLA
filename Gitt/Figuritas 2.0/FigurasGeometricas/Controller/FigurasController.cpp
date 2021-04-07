#include "../Controller/FigurasController.h"

// Inicializacion constante estatica para elemento compartido
const int FigurasController::MAX_ITEMS = 10;

//------------------->( AGREGAR FIGURAS )<-----------------------

void FigurasController::agregarRectagulo(const float largo, const float ancho)
{
    if (listaRectangulo.size() < MAX_ITEMS)
    {
        cout << "Agrego rectangulo" << endl;
        listaRectangulo.push_back(Rectangulo(largo, ancho));
    }
    else
    {
        //FIXME agregar manejo de excepcion
        std::cout << "\nSe sobrepasa el limite\n"
                  << std::endl;
    }
}

void FigurasController::agregarCirculo(const float radio){
    
    if(this->listaCirculo.size() < MAX_ITEMS){
        cout << "Agregaremos el circulo! " << endl;
        this->listaCirculo.push_back(Circulo(radio));
    }
    else{
        //FIXME agregar manejo de excepcion
        std::cout << "\nSe sobrepasa el limite\n"
                  << std::endl;
    }
}

void FigurasController::agregarTriagulo(const float base, const float altura){

    if(this->listaTriangulo.size() < MAX_ITEMS){
        cout << "Agregaremos el triangulo! " << endl;
        this->listaTriangulo.push_back(Triangulo( base, altura));
    }
    else{
        //FIXME agregar manejo de excepcion
        std::cout << "\nSe sobrepasa el limite\n"
                  << std::endl;
    }

}

//------------------->( RETORNOS DE LISTAS )<-----------------------

list<Rectangulo>& FigurasController::getListaRectangulo(){
    // Creo la  referencia
    list<Rectangulo>& lista = listaRectangulo;
    return lista;
}

list<Circulo>& FigurasController::getListaCirculo(){          
    list<Circulo>& lista = this->listaCirculo;      
    return lista;                    
}

list<Triangulo>& FigurasController::getListaTriangulo(){
    // Creo la  referencia
    list<Triangulo>& lista = this->listaTriangulo;
    return lista;
}




Rectangulo& FigurasController::encontrarMayorAncho()
{
    bool isFirst = true;
    int mayorAncho = 0;
    Rectangulo *pRectanguloMayor = NULL;
    for (list<Rectangulo>::iterator it = listaRectangulo.begin(); it != listaRectangulo.end(); ++it)
    {
        if (isFirst)
        {
            // Se inicializa el mayor ancho con el primer elemento
            int mayorAncho = listaRectangulo.begin()->getAncho();
            isFirst = false;
            pRectanguloMayor = &(*it); // It es un apuntador, para acceder al rectangulo se tiene que acceder al contenido
        }
        else
        {
            if (it->getAncho() > pRectanguloMayor->getAncho())
            {
                // Actaulizar el mayor
                pRectanguloMayor = &(*it);
            }
        }
    }
    // Se obtien el contenido del apuntador para luego retorar la referencia
    // a fin de facilitar el manejo de los objetos posteriormente
    return *pRectanguloMayor;
}