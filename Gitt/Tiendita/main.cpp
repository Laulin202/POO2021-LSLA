#include <iostream>
#include <list>
#include <string>

#include "tienda.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;


//Declaraciones


//main

int menu()
{
    int opcion;
    cout << "Menu Tienda\n"
              << endl;
    cout << "1. Agregar Productos" << endl;
    cout << "2. Mostrar Productos" << endl;
    cout << "3. Agregar cliente" << endl;
    cout << "4. Mostrar clientes" << endl;
    cout << "5. Vender" << endl;
    cout << "0. Salir\n"
              << endl;
    cout << "Digita el numero: ";
    cin >> opcion;
    return opcion;
}

int main(){
    int opcion, i;
    Tienda laFarra;

    do
    {
        opcion = menu();
        switch (opcion)
        {
        case 0:
            break;
        case 1:
            laFarra.agregarProducto();
            break;
        case 2:
            cout << "\n";
            laFarra.mostrarTodosProducto();
            cout << "\n";
            break;
        case 3:
            laFarra.agregarCliente();
            break;
        case 4:
            laFarra.mostrarTodosCliente();
            break;
        case 5:
            laFarra.vender();
            break;
        default:
            cout << "\nNumero invalido\n"
                      << endl;
            break;
        }
    } while (opcion != 0);

    


    cout << " BIENVENIDO A TIENDITA LA FARRA " << endl;
    return 0;
}