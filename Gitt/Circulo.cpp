#include <iostream>
#include <cstdlib>


const int MAX = 10;

using namespace std;

//CLASE CIRCULO

class Circulo{
    private: //atributos
        float radio;
        float PI = 3.1416;
    
    public:
        Circulo(); //NO OLVIDAR
        Circulo( float );
        void calcularArea();
        void calcularPerimetro();
        float getRadio();
        void setRadio(float);
        //Circulo crearCirculo();
};

//CONSTRUCTORES CIRCULO

Circulo::Circulo(){}

Circulo::Circulo( float radio){

    this->radio = radio;
}

//CLASE RECTANGULO

class Rectangulo{
    private:
        float ancho, largo;
    public:
        Rectangulo(); //no olvidar
        Rectangulo( float, float );
        void calcularArea();
        void calcularPerimetro();
        float getLargo();
        float getAncho();
        void setLargo(float);
        void setAncho(float);
        Rectangulo crearRectangulo();
};

//CONSTRUCTORES RECTANGULO

Rectangulo::Rectangulo(){}

Rectangulo::Rectangulo( float ancho, float largo){

    this->ancho = ancho;
    this->largo = largo;
}

//CLASE TRIANGULO

class Triangulo{
    private:
        float lado1, base, lado2;
    public:
        Triangulo();
        Triangulo( float, float, float);
        void calcularArea();
        void calcularPerimetro();
        void setBaseyAltura();

};

//CONSTRUCTORES TRIANGULO

Triangulo::Triangulo(){}

Triangulo::Triangulo(float lado1, float base, float lado2){

    this->lado1 = lado1;
    this->base = base;
    this->lado2 = lado2;
}


//Vamos a implementar los metodos 

//METODOS CIRCULO

void Circulo::calcularArea(){
    float area;
    area = PI * (radio*radio);
    cout << "El area del circulo es: "<< area << endl; 
    
}

void Circulo::calcularPerimetro(){
    float perimetro;
    perimetro = ( 2 * PI ) * radio;
    cout << "El perimetro del circulo es: "<< perimetro << endl;

}

float Circulo::getRadio(){

    return this->radio;

}

void Circulo::setRadio( float radio){

    this->radio = radio;
}

//METODOS RECTANGULO

void Rectangulo::calcularArea(){
    float area;
    area = largo * ancho;
    cout << "El area del rectangulo es: " << area << endl;
}

void Rectangulo::calcularPerimetro(){
    float perimetro;
    perimetro = ( 2 * largo ) + ( 2 * ancho );
    cout << "El perimetro del rectangulo es : " << perimetro << endl;
}

float Rectangulo::getAncho(){
    return this->ancho;
}

float Rectangulo::getLargo(){
    return this->largo;
}

void Rectangulo::setAncho( float ancho ){
    this->ancho = ancho;

}
void Rectangulo::setLargo( float largo ){
    this->largo = largo;

}
//METODOS TRIANGULO

void Triangulo::calcularArea(){
    float area;
}

void Triangulo::calcularPerimetro(){
    float perimetro;

    perimetro = lado1 *  + base + lado2;
    cout << "El perimetro de un triangulo es: "<< perimetro << endl;

}



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
    
    

    return 0;


}