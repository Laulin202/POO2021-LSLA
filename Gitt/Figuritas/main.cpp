#include <iostream>
#include <cstdlib>
#include "Circulo.h"
#include "Rectangulo.h"
#include "triangulo.h"


const int MAX = 10;

using namespace std;




//FUNCIONES DEL PROGRAMA

Circulo crearCirculo(){
    Circulo  circulo; //se ira al constructor sin parametros
    float radio;
    cout << "Digite el valor del radio" << endl;
    cin >> radio;
    circulo.setRadio( radio );

    return circulo;
}

Rectangulo crearRectangulo(){
    float largo, ancho;
    Rectangulo rectangulo;
    cout << "Digite el valor del largo " << endl;
    cin >> largo;
    rectangulo.setLargo( largo );
    cout << "Digite el valor del ancho " << endl;
    cin >> ancho;
    rectangulo.setAncho( ancho );

    return rectangulo;
}






int main(){
    int op;

    int contCirculos = 0;
    int contRectan = 0;

    Circulo arregloCirculo[MAX];
    Rectangulo arregloRect[MAX];

    Circulo circulo1(3);
    circulo1.calcularArea();
    circulo1.calcularPerimetro();
    cout << "El radio del circulo 1 es: " << circulo1.getRadio() << endl;

    Rectangulo rect1( 4, 2 );
    rect1.calcularArea();
    rect1.calcularPerimetro();
    cout << "El ancho del rectangulo 1 es: " << rect1.getAncho() << endl;
    cout << "El largo del rectangulo 1 es: " << rect1.getLargo() << endl;


    do
    {
        cout << "MENU FIGURITAS :D" << endl;
        cout << "==================" << endl;
        cout << "1. Crear circulo" << endl << "2. Crear rectangulo" << endl;
        cout << "Digite su opcion: " << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Entrando al punto 1..." << endl;
            arregloCirculo[contCirculos++] = crearCirculo();
            
        break;

        case 2:
            cout << "Entrando al punto 2..." << endl;
            arregloRect[contRectan++] = crearRectangulo();

        break;
        
        default:
            break;
        }
    } while (op);

    for( int i = 0; i < contCirculos; i++){
        cout << "Radio del circulo "<< i << " : " << arregloCirculo[i].getRadio() << endl;
    }

    for( int i = 0; i < contRectan; i++){
        cout << "el ancho del rectangulo "<< i << " es  : " << arregloRect[i].getLargo() << " Y su largo es:" <<arregloRect[i].getAncho() <<endl;
    }
    
    

    return 0;


}