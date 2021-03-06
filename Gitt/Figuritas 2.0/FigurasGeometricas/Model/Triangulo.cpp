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
    this->area = (this->base * this->altura) / 2;  //"area" es atributo protegido de la clase papá (FigurasG)

    //std::cout << "El area del Triangulo es: " << area << std::endl;
}

void Triangulo::calcularPerimetro()
{
    float temp;
    temp = this->base / 2;

    this->perimetro = 2 * ((sqrt((temp * temp)) + (this->altura * this->altura))) + this->base; //"perimetro" es atributo protegido de la clase papa"

    //std::cout << "El perimetro del Triangulo es: " << perimetro << std::endl;
}

void Triangulo::mostrarFigura(){
    FiguraGeometrica::mostrarFigura(); //Sirve para colocar el metodo sobreescrito del papa

    /*RECORDAR: Funciones sobreeescritas como "calcularArea() y mostrarFigura() que son metodos que se llaman igual para hijo
    y padre, cuando llames a ese metodo, el sistema ejecutara la funcion propia de la clase donde lo lamaste, entonces si a un
    objeto de clase circulo, triangulo, o rectangulo llamas el .calcularArea() hará el calcular area de la clase triangulo, circulo 
    o rectangulo. " */

    if (this->area == 0 || this->perimetro == 0){
        if(this->area == 0)
            calcularArea();
        if(this->perimetro == 0)
            calcularPerimetro();
    }

    cout << "Base: " << this->base << endl;
    cout << "Altura: " << this->altura << endl;
    cout << "Area: " << this->area << endl;     //atributos protegidos del padre         
    cout << "Perimetro: " << this->perimetro << endl;   //atributos protegidos del padre
}
