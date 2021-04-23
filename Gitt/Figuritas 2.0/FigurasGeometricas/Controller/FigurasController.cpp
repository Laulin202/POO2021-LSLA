#include "../Controller/FigurasController.h"

// Inicializacion constante estatica para elemento compartido
const int FigurasController::MAX_ITEMS = 10;

//------------------->( AGREGAR FIGURAS )<-----------------------

void FigurasController::agregarRectagulo(const float largo, const float ancho, string color)
{
    if (listaRectangulo.size() < MAX_ITEMS)
    {
        cout << "Agrego rectangulo" << endl;
        Rectangulo *pRectTemp = new Rectangulo(largo, ancho, color);
        listaRectangulo.push_back(*pRectTemp);
        pListaFiguras.push_back(pRectTemp); //implementar esta lista
    }
    else
    {
        //FIXME agregar manejo de excepcion
        std::cout << "\nSe sobrepasa el limite\n"
                  << std::endl;
    }
}

void FigurasController::agregarCirculo(const float radio, string color){
    
    if (listaCirculo.size() < MAX_ITEMS)
    {
        cout << "Agrego circulo" << endl;
        Circulo *pcirculoTemp = new Circulo(radio, color);
        listaCirculo.push_back(*pcirculoTemp);
        pListaFiguras.push_back(pcirculoTemp);
    }
    else
    {
        //FIXME agregar manejo de excepcion
        std::cout << "\nSe sobrepasa el limite\n"
                  << std::endl;
    }
}

void FigurasController::agregarTriagulo(const float base, const float altura, string color){

    if(this->listaTriangulo.size() < MAX_ITEMS){
        cout << "Agregaremos el triangulo! " << endl;
        Triangulo* ptrianguloTem = new Triangulo( base, altura, color);
        listaTriangulo.push_back(*ptrianguloTem);
        pListaFiguras.push_back(ptrianguloTem);
    }
    else{
        //FIXME agregar manejo de excepcion
        std::cout << "\nSe sobrepasa el limite\n"
                  << std::endl;
    }

}

void FigurasController::agregarCuadrado(const float lado, string color){

    if(this->listaCuadrado.size() < MAX_ITEMS){
        cout << "Agregaremos el cuadrado! " << endl;
        Cuadrado* pcuadradoTem = new Cuadrado( lado, color); //creo el cuadrado con memoria dinamica
        listaCuadrado.push_back(*pcuadradoTem);
        pListaFiguras.push_back(pcuadradoTem);
    }
    else{
        //FIXME agregar manejo de excepcion
        std::cout << "\nSe sobrepasa el limite\n"
                  << std::endl;
    }
}

void FigurasController::llenarListaTodosDummy()
{
    Circulo *pMiCirculo = new Circulo(10, "Rojo");
    Rectangulo *pMiRectangulo = new Rectangulo(10, 10, "Verde");
    Rectangulo *pMiRectangulo2 = new Rectangulo(20, 20, "Azul");
    Triangulo *pMiTriangulo = new Triangulo(11, 22, "Cafe");
    Triangulo *pMiTriangulo2 = new Triangulo(15, 20, "Cafe");
    Cuadrado *pMiCuadrado = new Cuadrado(9, "Multicolor");
    int arreglo[10];
    this->pListaFiguras.push_back(pMiCirculo);
    this->pListaFiguras.push_back(pMiRectangulo);
    this->pListaFiguras.push_back(pMiRectangulo2);
    this->pListaFiguras.push_back(pMiTriangulo);
    this->pListaFiguras.push_back(pMiTriangulo2);
    this->pListaFiguras.push_back(pMiCuadrado);
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

list<Cuadrado>& FigurasController::getListaCuadrado(){
    list<Cuadrado>& lista = this->listaCuadrado;
    return lista;
}

list<FiguraGeometrica *> &FigurasController::getListaFiguras()
{
    return pListaFiguras;
}

//--------->( Casos de prueba )<-------------


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