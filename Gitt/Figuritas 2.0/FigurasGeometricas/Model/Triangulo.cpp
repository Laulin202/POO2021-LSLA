#include "triangulo.h"


//CONSTRUCTORES TRIANGULO

Triangulo::Triangulo(){}

Triangulo::Triangulo(float base, float altura, string color):FiguraGeometrica(color) // Permite inicializar atributos de la clase padre
{

    this->base = base;
    this->altura = altura;

}

//METODOS TRIANGULO

void Triangulo::calcularArea()
{
    float area;
    area = (base * altura) / 2;

    setArea(area); //funcion del papá(figuras geometricas)

    //std::cout << "El area del Triangulo es: " << area << std::endl;
}

void Triangulo::calcularPerimetro()
{
    float perimetro, temp;
    temp = base / 2;
    perimetro = 2 * ((sqrt((temp * temp)) + (altura * altura))) + base;

    setPerimetro(perimetro);
    //std::cout << "El perimetro del Triangulo es: " << perimetro << std::endl;
}

void Triangulo::mostrarFigura(){
    FiguraGeometrica::mostrarFigura(); //Sirve para colocar el metodo sobreescrito del papa

    /*RECORDAR: Funciones sobreeescritas como "calcularArea() y mostrarFigura() que son metodos que se llaman igual para hijo
    y padre, cuando llames a ese metodo, el sistema ejecutara la funcion propia de la clase donde lo lamaste, entonces si a un
    objeto de clase circulo, triangulo, o rectangulo llamas el .calcularArea() hará el calcular area de la clase triangulo, circulo 
    o rectangulo. " */

    cout << "Base: " << this->base << endl;
    cout << "Altura: " << this->altura << endl;
    //falta mostrar area y perimetro 
    cout << "Area: " << getArea() << endl;
    cout << "Perimetro: " << getPerimetro() << endl;
}
