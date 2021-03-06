#include "View.h"

//FUNCIONES DEL PROGRAMA


//RECTANGULO

void View::pedirDatosRectangulo()
{
    // Se piden los datos y se valida para asegurar que estan bn
    float largo, ancho;
    string color;
    do
    {
        cout << "Digite el valor del largo " << endl;
        cin >> largo;
        cout << "Digite el valor del ancho " << endl;
        cin >> ancho;
        cout << "Digite el color: " << endl;
        cin >> color;
    } while (largo <= 0 || ancho <= 0);

    // Se llama al metodo del controller
    controller.agregarRectagulo(largo, ancho, color);
}

void View::mostrarRectangulos()
{
    //  list<Clase_a_recorrer>:: iterator nombre_iterador = nombre_lista_de_Clase.begin(); it != nombre_lista_de_Clase.end(); i++;
    int cont = 0;
    list<Rectangulo> &refListaRectangulo = controller.getListaRectangulo();
    for (list<Rectangulo>::iterator it = refListaRectangulo.begin(); it != refListaRectangulo.end(); ++it)
    {
        std::cout << "Rectangulo " << ++cont << ":" << std::endl;
        it->mostrarFigura();
    }
}

//CIRCULO

void View::pedirDatosCirculo(){
    float radio;
    string color;

    do{
        cout << "Digite el radio del circulo: " << endl;
        cin >> radio;
        cout << "Digite el color: " << endl;
        cin >> color;
    }while( radio <= 0);

    this->controller.agregarCirculo( radio, color );

}

void View::mostrarCirculos(){

    int cont = 0;
    list<Circulo>& refListaCirculo = controller.getListaCirculo();
    for( list<Circulo>::iterator it = refListaCirculo.begin(); it != refListaCirculo.end(); it++ ){
        cout << "Circulo "<< ++cont << ". ";
        it->mostrarFigura();
    }
}

//TRIANGULO

void View::pedirDatosTriangulo(){
    float base, altura;
    string color;
    do{
        cout << "Digite base del triangulo: ";
        cin >> base;
        cout << "Digite altura del triangulo: "; 
        cin >> altura;
        cout << "Digite el color del triangulo: "; 
        cin >> color;

    }while( base <= 0 || altura <=0 );

    this->controller.agregarTriagulo( base, altura, color );
}

void View::mostrarTriangulos(){
    int cont = 0;
    list<Triangulo>& refListaTriangulo = controller.getListaTriangulo();
    for( list<Triangulo>::iterator it = refListaTriangulo.begin(); it != refListaTriangulo.end(); it++){
        cout << "Triangulo " << ++cont << endl;
        it->mostrarFigura();
    }
}


//CUADRADO

void View::pedirDatosCuadrado(){
    float lado;
    string color;
    do{
        cout << "Digite lado del cuadrado: ";
        cin >> lado;
        cout << "Digite el color del cuadrado: "; 
        cin >> color;

    }while( lado <= 0 );
    this->controller.agregarCuadrado( lado, color);
    //llamar al controller para que lo agregue
}

void View::mostrarCuadrados(){
    int cont = 0;
    list<Cuadrado>& refListaCuadrado = controller.getListaCuadrado();
    for( list<Cuadrado>::iterator it = refListaCuadrado.begin(); it != refListaCuadrado.end(); it++){
        cout << "Cuadrado " << ++cont << endl;
        it->mostrarFigura();
    }
}

//METODO QUE MUESTRA TODAS LAS FIGURAS

void View::mostrarTodos()
{
    // LLama al que llena las figuras
    controller.llenarListaTodosDummy();

    list<FiguraGeometrica *> &pListaFiguras = controller.getListaFiguras();
    cout << "Cantidad de figuras " << pListaFiguras.size() << "\n";
    int cont = 0;
    for (list<FiguraGeometrica *>::iterator it = pListaFiguras.begin(); it != pListaFiguras.end(); ++it)
    {
        FiguraGeometrica *tmp = *it; // Por descifrar
        cout << "Figura con polimorfismo:" << ++cont << ":" << endl;
        tmp->mostrarFigura();
        cout << "\n";
    }
}


//MAIN

int View::mostrarMenu()
{
    int opcion;
    cout << "Menu\n"
         << std::endl;
    cout << "1. Agregar Rectangulos" << std::endl;
    cout << "2. Mostrar Rectangulos" << std::endl;
    cout << "3. [Rectangulo] Calcular area y perimetro" << std::endl;
    cout << "4. Agregar Circulos" << std::endl;
    cout << "5. Mostrar Circulos" << std::endl;
    cout << "6. [Circulo] Calcular area y perimetro" << std::endl;
    cout << "7. Agregar Triangulos" << std::endl;
    cout << "8. Mostrar Triangulos" << std::endl;
    cout << "9. [Triangulo] Calcular area y perimetro" << std::endl;


    cout << "10. Agregar Cuadrados" << std::endl;
    cout << "11. Mostrar Cuadrados" << std::endl;
    cout << "12. [Cuadrado] Calcular area y perimetro" << std::endl;

    cout << "13. Caso para pruebas" << std::endl;
    cout << "14. Mostrar todas las figuras" << std::endl;


    cout << "0. Salir\n"
         << std::endl;
    cout << "Digita el numero: ";
    cin >> opcion;
    return opcion;
}

void View::verPrincipal()
{
    int opcion;
    do
    {
        opcion = mostrarMenu();
        switch (opcion)
        {
        case 1: //Rectangulos
            pedirDatosRectangulo();
            break;
        case 2: //Mostrar Rectangulos
            mostrarRectangulos();
            break;
        case 3: 
            cout << "En proceso" << endl;
            break;
        case 4: 
            pedirDatosCirculo();
            break;
        case 5: 
            mostrarCirculos();
            break;
        case 6: 
            cout << "En proceso" << endl;
            break;
        case 7:
            pedirDatosTriangulo();
            break;
        case 8: 
            mostrarTriangulos();
            break;
        case 9: 
            cout << "En proceso" << endl;
            break;
        case 10: 
            pedirDatosCuadrado();
            break;
        case 11: 
            mostrarCuadrados();
            break;
        case 12: 
            cout << "En proceso" << endl;
            break;
        case 13:{
            Rectangulo& rectangulo = controller.encontrarMayorAncho();
            rectangulo.mostrarFigura();
            }
        break;
        case 14:
            mostrarTodos();
        break;
        }
    } while (opcion != 0);
}