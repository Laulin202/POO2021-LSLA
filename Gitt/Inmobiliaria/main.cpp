#include <iostream>
#include <string>
#include <fstream>

#include "inmobiliaria.h"


using std::cin;
using std::cout;
using std::endl;
using std::string;

int menu(){
    int opcion;
    cout << " BIENVENIDO A LA INMOBILIARIA STAR, POR FAVOR DIGITE SU OPCION:" << endl;
    cout << "1. Crear propiedad" << endl;
    cout << "2. Modificar propiedad" << endl;
    cout << "3. Mostrar lista propiedades" << endl;
    cout << "4. Eliminar propiedad " << endl;
    cout << "0. Salir " << endl;
    cin >> opcion;
    return opcion;
}

int main(){
    int opcion, i;
    Inmobiliaria star;
    do{
        opcion = menu();
        switch (opcion)
        {
        case 0:
            break;
        case 1:
            //star.crearPropiedad();
            break;
        case 2:
            cout << " En proceso" << endl;
            break;
        case 3:
            cout << " En proceso" << endl;
            break;
        case 4:
            cout << " En proceso" << endl;
            break;
        default:
            cout << "\nNumero invalido\n"
                      << endl;
            break;
        }
    } while (opcion != 0);

    return 0;
}
